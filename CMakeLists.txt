cmake_minimum_required(VERSION 3.20)
project(museum)

set(CMAKE_CXX_STANDARD 17)

add_executable(museum Museum/main.cpp Museum/Rooms/Room.cpp Museum/Rooms/Room.h Museum/Exhibits/Exhibit.cpp Museum/Exhibits/Exhibit.h Museum/Exhibits/Picture.cpp Museum/Exhibits/Picture.h Museum/Exhibits/VoluminousExhibit.cpp Museum/Exhibits/VoluminousExhibit.h Museum/Exhibits/Sculpture.cpp Museum/Exhibits/Sculpture.h Museum/Exhibits/Technics.cpp Museum/Exhibits/Technics.h Museum/Exhibits/HouseholdItem.cpp Museum/Exhibits/HouseholdItem.h Museum/Rooms/Windows.cpp Museum/Rooms/Windows.h Museum/Rooms/Doorway.cpp Museum/Rooms/Doorway.h "Museum/Rooms/Constants.h" Museum/Exhibits/Museum.cpp Museum/Museum.h)
