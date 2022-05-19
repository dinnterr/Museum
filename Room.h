#ifndef ROOM_H
#define ROOM_H

#include <iostream>
#include <exception>
#include <stdexcept>

class Room{
public:

    Room(double width, double length, double height, double usable_wall_area);

    double getWidth () const{return m_width;}
    double getLength () const{return m_length;}
    double getHeight() const{return m_height;}
    double getUsableWallArea() const{return m_usable_wall_area;}

private:
    double m_width;
    double m_length;
    double m_height;
    double m_usable_wall_area;

};

#endif //ROOM_H
