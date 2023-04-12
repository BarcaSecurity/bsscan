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
#include "platform.h"
#ifdef BSCAN_WINDOWS
#include <string>
#include <vector>
#include "WMIwrapper.h"
#pragma comment(lib, "wbemuuid.lib")
#include "hwares/scan_gpu.h"

namespace bscan {

  std::string GPU::getVendor() {
    std::vector<const wchar_t*> vendor{};
    wmi::queryWMI("WIN32_VideoController", "AdapterCompatibility", vendor);
    auto ret = vendor[0];
    if (!ret) {
      return "<unknown>";
    }
    std::wstring tmp(ret);
    return {tmp.begin(), tmp.end()};
  }

  std::string GPU::getName() {
    std::vector<const wchar_t*> names{};
    wmi::queryWMI("WIN32_VideoController", "Name", names);
    auto ret = names[0];
    if (!ret) {
      return "<unknown>";
    }
    std::wstring tmp(ret);
    return {tmp.begin(), tmp.end()};
  }

  std::string GPU::getDriverVersion() {
    std::vector<const wchar_t*> driverVersion{};
    wmi::queryWMI("WIN32_VideoController", "DriverVersion", driverVersion);
    auto ret = driverVersion[0];
    if (!ret) {
      return "<unknown>";
    }
    std::wstring tmp(ret);
    return {tmp.begin(), tmp.end()};
  }

  int64_t GPU::getMemory_Bytes() {
    std::vector<unsigned long long> memory{};
    wmi::queryWMI("WIN32_VideoController", "AdapterRam", memory);
    return static_cast<int64_t>(memory[0] * 2);
  }

};

#endif  // END BSCAN_WINDOWS