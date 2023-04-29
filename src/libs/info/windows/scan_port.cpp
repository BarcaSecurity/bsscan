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
#include "platform.h"
#include <utils/netutils.h>
#include <utils/stringutils.h>
#ifdef BSSCAN_WINDOWS  
  #include <string>
  #include <vector>
  #include "network/scan_port.h"

  namespace bsscan {

    std::string PORT::getStatus(int port) {
      std::cout << port << endl;
      if (port_is_open("127.0.0.1", port))
        return "OPEN";
      else
        return "CLOSED";
    }

    std::string PORT::getService(int port) {
      return "TODO";
    }

    std::vector<PORT> getAllPorts() {
      std::string address = "127.0.0.1";
      std::string port_list = "1-48556";
      std::vector<int> new_ports;
      std::vector<PORT> ports;
      new_ports = ports_list(port_list);
      std::cout << "\nScanning...\n " << endl;
      for (int port : new_ports) {
        ports.push_back(PORT());

        std::cout << "Port " << port << " : ";
        if (port_is_open(address, port)) {
          std::cout << "OPEN\n";
          ports.back()._s_status = "OPEN";
          ports.back()._n_number = port;
        
        }else {
          std::cout << "CLOSED\n";
          ports.back()._s_status = "CLOSED";
          ports.back()._n_number = port;
        }
      }

      return ports;
    };

    std::vector<PORT> getAllPortsOpen() {
      std::string address = "127.0.0.1";
      std::string port_list = "1-48556";
      std::vector<int> new_ports;
      std::vector<PORT> ports;
      new_ports = ports_list(port_list);
      std::cout << "\nScanning...\n " << endl;
      for (int port : new_ports) {
        ports.push_back(PORT());

        if (port_is_open(address, port)) {
          std::cout << "Port " << port << " : ";
          std::cout << "OPEN\n";
          ports.back()._s_status = "OPEN";
          ports.back()._n_number = port;
        }
      }

      return ports;
    };


  };
#endif  // END BSSCAN_WINDOWS