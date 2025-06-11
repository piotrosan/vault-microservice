cmake_minimum_required(VERSION 3.20 FATAL_ERROR)
project(vault)

set(CMAKE_CXX_STANDARD 20)

add_library(vault-lib
    models/Password.h
    models/Password.cpp
        main.cpp
        main.h
)

## include directories
target_include_directories(vault-lib PUBLIC .)

list(APPEND CMAKE_MODULE_PATH "/usr/local/lib/cmake/oatpp-1.4.0/")

find_package(oatpp   1.4.0    REQUIRED)
#find_package(oatpp-swagger  1.4.0 REQUIRED)
#find_package(oatpp-sqlite   1.4.0 REQUIRED)

target_link_libraries(vault-lib
        # Oat++
        PUBLIC oatpp::oatpp
#        PUBLIC oatpp::oatpp-swagger
#        PUBLIC oatpp::oatpp-sqlite
)


#add_executable(crud-exe vault/App.cpp)
#target_link_libraries(crud-exe crud-lib)


#add_library(new_target models/Password.cpp models/Password.h)
