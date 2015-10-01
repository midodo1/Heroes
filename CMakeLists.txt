cmake_minimum_required(VERSION 2.6)

#Déclaration du projet

project(Heroes-client)

set(EXECUTABLE_OUTPUT_PATH ../bin)

#Déclaration de l'exécutable

add_executable(

        executable-client

        src/main.cpp

        src/Arme.h

        src/Arme.cpp

        src/Personnage.h

        src/Personnage.cpp


)

