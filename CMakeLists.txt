cmake_minimum_required(VERSION 2.6)

#Déclaration du projet

project(Heroes)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(EXECUTABLE_OUTPUT_PATH ../bin)

#Déclaration de l'exécutable


set(EXECUTABLE_NAME "exe")
file(GLOB SOURCES
    #"src/*.h"
    "src/*.cpp"
    "src/web/*.cpp"
)
add_executable(${EXECUTABLE_NAME} ${SOURCES})

set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake_modules" ${CMAKE_MODULE_PATH})
#Find any version 2.X of SFML
#See the FindSFML.cmake file for additional details and instructions
#find_package(SFML 2 REQUIRED system window graphics network audio)
#if(SFML_FOUND)
 # include_directories(${SFML_INCLUDE_DIR})
  #target_link_libraries(exe ${SFML_LIBRARIES})
#endif()




# SFML
set(SFML_ROOT "/usr/lsa")
set(CMAKE_MODULE_PATH "${SFML_ROOT}/share/SFML/cmake/Modules"
${CMAKE_MODULE_PATH})
find_package(SFML 2 COMPONENTS graphics window system network audio)
if(SFML_FOUND)
   include_directories(${SFML_INCLUDE_DIR})
   target_link_libraries(exe ${SFML_LIBRARIES})
endif()

