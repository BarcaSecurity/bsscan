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

#include <string>
#include <vector>

namespace bsscan {

  class PORT {

    friend std::vector<PORT> getAllPorts();
    friend std::vector<PORT> getAllPortsOpen();
    friend std::vector<PORT> getAllPortsClosed();
    friend std::vector<PORT> getSeqPorts(std::string seq);
    friend std::vector<PORT> getSeqPortsClosed(std::string seq);
    friend std::vector<PORT> getSeqPortsOpen(std::string seq);
    public:
      PORT() = default;
      PORT(const std::string& n_number,
          const std::string& s_status);
      ~PORT() = default;

      std::string& status(int port);
      std::string& service(int port);
    
      [[nodiscard]] const std::string& n_number() const;
      [[nodiscard]] const std::string& s_status() const;

      static std::string getStatus(int port);
      static std::string getService(int port);

    private:
      std::string _status;
      std::string _service;
      std::string _n_number;
      std::string _s_status;
  };
  std::vector<PORT> getAllPorts();
  std::vector<PORT> getAllPortsOpen();
  std::vector<PORT> getAllPortsClosed();
  std::vector<PORT> getSeqPorts(std::string  seq);
  std::vector<PORT> getSeqPortsClosed(std::string  seq);
  std::vector<PORT> getSeqPortsOpen(std::string  seq);

};