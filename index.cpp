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
#include <iostream> 
#include "bsscan.h"
#include <iomanip>
#include <stdio.h>
#include <wbemidl.h>
#pragma comment(lib,"wbemuuid")

using namespace std;

int main() { 
  
  bsscan::NET;
  std::vector<bsscan::NET> nets = bsscan::getAllNetworkAdapters();
  std::cout << "--------------------------------- Nets -----------------------------------" << std::endl;
  if (!nets.empty()) {
    int net_counter = 0;
    for (const auto &net: nets) {
      std::cout << "Net " << net_counter++ << ":" << std::endl;
      std::cout << std::left << std::setw(20) << "  name: ";
      std::cout << net.name() << std::endl;
      std::cout << std::left << std::setw(20) << "  manufacturer: ";
      std::cout << net.manufacturer() << std::endl;
      std::cout << std::left << std::setw(20) << "  IP Address: ";
      std::cout << net.ipAddress() << std::endl;
      std::cout << std::left << std::setw(20) << "  Subnet: ";
      std::cout << net.subnet() << std::endl;
      std::cout << std::left << std::setw(20) << "  MAC Address: ";
      std::cout << net.macAddress() << std::endl;
      std::cout << std::left << std::setw(20) << "  DNS Hostname: ";
      std::cout << net.dnsHostname() << std::endl;
      std::cout << std::left << std::setw(20) << "  Gateway: ";
      std::cout << net.gateway() << std::endl;
      std::cout << std::left << std::setw(20) << "  Service Name: ";
      std::cout << net.serviceName() << std::endl;
      std::cout << std::left << std::setw(20) << "  DriverPath: ";
      std::cout << net.driverPath() << std::endl;

    }
    std::cout << "---------------------------------------------------------------------------" << std::endl;
  }
  else {
    std::cout << "No Network Adapter installed or detected" << std::endl;
  }


}