#ifndef MUSEUM_ROOM_H
#define MUSEUM_ROOM_H

#include <iostream>
#include <exception>
#include <stdexcept>

class Room{
private:
    double width;
    double length;
    double height;
    double usable_wall_area;

public:

    Room(double myWidth, double myLength, double myHeight, double myUsable_wall_area);

    double getWidth () const{return width;}

    double getLength () const{return length;}

    double getHeight() const{return height;}

    double getUsableWallArea() const{return usable_wall_area;}

};

#endif //MUSEUM_ROOM_H
