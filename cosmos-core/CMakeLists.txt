cmake_minimum_required(VERSION 3.17)
project(cosmos_core)

set(CMAKE_CXX_STANDARD 14)

add_executable(cosmos_core
        main.cpp

        # geometry
        geometry/Point.cpp

        #bodies
        bodies/Body.cpp

        #utils
        utils/Math.cpp

        #engine
        engine/Storage.cpp
        engine/Session.cpp
        )