add_library(BScan
        scan_network.cpp
        scan_datasource.cpp
        # apple OS
        apple/scan_network.cpp
        # linux OS
        apple/scan_network.cpp
        # windows OS
        windows/scan_network.cpp
        windows/scan_datasource.cpp
        )

add_library(${PROJECT_NAME}::BSScan ALIAS BSScan)