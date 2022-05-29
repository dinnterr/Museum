#ifndef ROOM_H
#define ROOM_H

#include <iostream>
#include <exception>
#include <stdexcept>
#include <sstream>
#include <string>
#include <vector>
#include "Windows.h"

class Room{
public:

    Room(double width, double length, double height);

    double getWidth () const{return m_width;}
    double getLength () const{return m_length;}
    double getHeight() const{return m_height;}

    void setWidth (double width) {m_width = width;}
    void setLength (double length) {m_length = length;}
    void setHeight (double height) {m_height = height;}

    std::string Info() const;

    double getSquare () const;
    double getSpace () const;

  //  double squareOfDoors (int numberOfDoors);

private:
    double m_width, m_length, m_height;
};

#endif //ROOM_H