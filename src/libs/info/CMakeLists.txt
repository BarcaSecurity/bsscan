add_library(BSScan
        scan_network.cpp
        scan_port.cpp
        # apple OS
        #apple/scan_network.cpp
        # linux OS
        #apple/scan_network.cpp
        # windows OS
        windows/scan_network.cpp
        windows/scan_port.cpp
        )

add_library(${PROJECT_NAME}::BSScan ALIAS BSScan)
