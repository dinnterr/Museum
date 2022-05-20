#ifndef ROOM_H
#define ROOM_H

#include <iostream>
#include <exception>
#include <stdexcept>
#include <sstream>
#include <string>

class Room{
public:

    Room(double width, double length, double height, double usable_wall_area);

    double getWidth () const{return m_width;}
    double getLength () const{return m_length;}
    double getHeight() const{return m_height;}
    double getUsableWallArea() const{return m_usable_wall_area;}

    void setWidth (double width) {m_width = width;}
    void setLength (double length) {m_length = length;}
    void setHeight (double height) {m_height = height;}
    void setUsableWallArea (double usable_wall_area) {m_usable_wall_area = usable_wall_area;}

    std::string Info() const;

    double getSquare () const;
    double getSpace () const;

private:
    double m_width;
    double m_length;
    double m_height;
    double m_usable_wall_area;
};

#endif //ROOM_H