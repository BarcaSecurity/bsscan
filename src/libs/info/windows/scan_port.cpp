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

  };

#endif  // END BSSCAN_WINDOWS