cmake_minimum_required(VERSION 3.19)
project(C__)

set(CMAKE_CXX_STANDARD 14)

add_executable(C__ "Ancien exo/main.cpp" "Ancien exo/point.h" "Ancien exo/polygone.h" "Ancien exo/test-polymorphic.cpp" Zoo/Zoo.cpp Zoo/Zoo.h Zoo/IAnimal.cpp Zoo/IAnimal.h Zoo/Tigre.cpp Zoo/Tigre.h Zoo/Poule.cpp Zoo/Poule.h Zoo/Aigle.cpp Zoo/Aigle.h Zoo/main.cpp)