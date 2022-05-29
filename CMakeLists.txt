cmake_minimum_required(VERSION 3.20)
project(museum)

set(CMAKE_CXX_STANDARD 17)

add_executable(museum Museum/main.cpp Museum/Room.cpp Museum/Room.h Museum/Exhibit.cpp Museum/Exhibit.h Museum/Picture.cpp Museum/Picture.h Museum/VoluminousExhibit.cpp Museum/VoluminousExhibit.h Museum/Sculpture.cpp Museum/Sculpture.h Museum/Technics.cpp Museum/Technics.h Museum/HouseholdItem.cpp Museum/HouseholdItem.h Museum/Windows.cpp Museum/Windows.h)
