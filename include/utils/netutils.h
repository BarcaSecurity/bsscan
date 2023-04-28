/************************************************************************************
      
 *                 Copyright (C) 2021 - 2023, Barca, Inc. 
 
 *    Email: <opensource@barca.com>  GitHub: @BarcaSecurity. 
 *    Project: BSSCAN to find vulnerabilities on servers, files, network and more
 
 * This software is licensed as described in the file COPYING, which                    
 * you should have received as part of this distribution. The terms                     
 * are also available at https://BarcaCorporation.github.io/docs/copyright.html.           
 *
 * You may opt to use, copy, modify, merge, publish, distribute and/or sell             
 * copies of the Software, and permit persons to whom the Software is                   
 * furnished to do so, under the terms of the COPYING file.                             
 *
 * This software is distributed on an "AS IS" basis, WITHOUT WARRANTY OF ANY            
 * KIND, either express or implied.                                                      
 *
 **************************************************************************************/
#pragma once
#include "platform.h"

#ifdef BSSCAN_WINDOWS
  #include <iostream>
  #include <SFML/Network.hpp>
  #include <sstream>
  #include <utils/stringutils.h>
  #include <string>
  #include <vector>
	
	using namespace std;

  static bool port_is_open(const std::string& address, int port) {
    return (sf::TcpSocket().connect(address, port) == sf::Socket::Done);
  }

  template <typename T>
  static void SWAP(T& a, T& b) {
    T c = a;
    a = b;
    b = c;
  };
  
  static std::vector<std::string> split_seq(const std::string& string, char delimiter = ' ', bool allow_empty = false) {
    std::vector<std::string> tokens;
    std::stringstream sstream(string);
    std::string token;
    while (std::getline(sstream, token, delimiter)) {
      if (allow_empty || token.size() > 0)
        tokens.push_back(token);
    }
    return tokens;
  }

  template <typename T>
  static std::vector<T> range(T min, T max) {
    if (min > max)
      SWAP(min, max);
    if (min == max)
      return std::vector<T>(1, min);
    std::vector<T> values;
    for (; min <= max; ++min)
      values.push_back(min);
    return values;
  };

  static std::vector<int> ports_list(const std::string& list) {
    std::vector<int> ports;
    for (const std::string& token : split_seq(list, ',')) {
      std::vector<std::string> strrange = split_seq(token, '-');
      switch (strrange.size()) {
        case 0: ports.push_back(string_to_int(token));       break;
        case 1: ports.push_back(string_to_int(strrange[0])); break;
        case 2: {
          int min = string_to_int(strrange[0]),
            max = string_to_int(strrange[1]);
          for (int port : range(min, max))
            ports.push_back(port);
          break;
        }
        default:
          break;
      }
    }
    return ports;
  };



#endif