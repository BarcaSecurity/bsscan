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
#include "network/scan_adapters.h"
#include "utils/stringutils.h"

namespace bsscan {

	NET::NET(
		std::string& name,
		std::string& manufacturer,
		std::string& permanentAddress,
		std::string& dnsHostname,
		std::string& serviceName,
		std::string& driverPath,
		std::string& status,
		std::string& macAddress,
		std::string& ipAddress,
		std::string& subnet,
		std::string& gateway
		
		)
	    : _name(name),
	     _manufacturer(manufacturer),
	     _permanentAddress(permanentAddress),
	     _dnsHostname(dnsHostname),
	     _serviceName(serviceName),
	     _driverPath(driverPath),
	     _status(status),
	     _macAddress(macAddress),
	     _ipAddress(ipAddress),
	     _subnet(subnet),
	     _gateway(gateway)
	     {}
	const std::string& NET::name() const { return _name; }
	const std::string& NET::manufacturer() const { return _manufacturer; }
	const std::string& NET::permanentAddress() const { return _permanentAddress; }
	const std::string& NET::dnsHostname() const { return _dnsHostname; }
	const std::string& NET::serviceName() const { return _serviceName; }
	const std::string& NET::driverPath() const { return _driverPath; }
	const std::string& NET::status() const { return _status; }
	const std::string& NET::macAddress() const { return _macAddress; }
	const std::string& NET::ipAddress() const { return _ipAddress; }
	const std::string& NET::subnet() const { return _subnet; }
	const std::string& NET::gateway() const { return _gateway; }

};
