/************************************************************************************
      
 *                 Copyright (C) 2021 - 2023, Barca, Inc. 
 
 *    Email: <opensource@barca.com>  GitHub: @BarcaWebCloud. 
 *    Project: BSCAN to scanner MotherBoards. CPU, Memory Ram, SO and more
 
 * This software is licensed as described in the file COPYING, which                    
 * you should have received as part of this distribution. The terms                     
 * are also available at https://project-barca.github.io/docs/copyright.html.           
 *
 * You may opt to use, copy, modify, merge, publish, distribute and/or sell             
 * copies of the Software, and permit persons to whom the Software is                   
 * furnished to do so, under the terms of the COPYING file.                             
 *
 * This software is distributed on an "AS IS" basis, WITHOUT WARRANTY OF ANY            
 * KIND, either express or implied.                                                      
 *
 **************************************************************************************/
#include <regex>
#include <string>
#include <vector>

#if defined(unix) || defined(__unix) || defined(__unix__)
#elif defined(__APPLE__)
#elif defined(_WIN32) || defined(_WIN64) || defined(__CYGWIN__)
#include "WMIwrapper.h"
#pragma comment(lib, "wbemuuid.lib")
#endif

#include "network/scan_port.h"

namespace bsscan {

  PORT::PORT(const std::string& n_number, const std::string& s_status)
      : _n_number(n_number), 
        _s_status(s_status) {}

  std::string& PORT::status(int port) {
    if (_status.empty()) {
      _status = getStatus(port);
    }
    return _status;
  }

  std::string& PORT::service(int port) {
    if (_service.empty()) {
      _service = getService(port);
    }
    return _service;
  }

  const std::string& PORT::n_number() const { return _n_number; }
  const std::string& PORT::s_status() const { return _s_status; }

};