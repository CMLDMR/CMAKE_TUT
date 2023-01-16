cmake_minimum_required(VERSION 3.15 FATAL_ERROR)

project(helloWorld LANGUAGES CXX)

include(CMakeDependentOption)

cmake_dependent_option(
    MAKE_STATIC_LIBRARY "Static Library" OFF
    "USE_LIBRARY" ON
)

cmake_dependent_option(
    MAKE_STATIC_LIBRARY "Static Library" ON
    "USE_LIBRARY" ON
)


option( USE_LIBRARY "Compile without Shared Library" OFF )
set( BUILD_SHARED_LIBS OFF )

list( APPEND _source message.h message.cpp )

if( USE_LIBRARY )
    # add library will create shared libs and link

    add_library( message-shared SHARED ${_source} )

    add_executable( helloWorld main.cpp )

    target_link_libraries(helloWorld message-shared )

else()
    add_executable(helloWord main.cpp ${_source})
endif()
