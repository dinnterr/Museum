cmake_minimum_required(VERSION 3.20)
project(museum)

set(CMAKE_CXX_STANDARD 17)

add_executable(museum main.cpp Room.cpp Room.h Exhibit.cpp Exhibit.h Picture.cpp Picture.h VoluminousExhibit.cpp VoluminousExhibit.h)
