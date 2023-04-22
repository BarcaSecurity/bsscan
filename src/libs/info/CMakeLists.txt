add_library(BSScan
        scan_network.cpp
        # apple OS
        #apple/scan_network.cpp
        # linux OS
        #apple/scan_network.cpp
        # windows OS
        windows/scan_network.cpp
        )

add_library(${PROJECT_NAME}::BSScan ALIAS BSScan)
