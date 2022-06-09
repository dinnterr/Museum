#ifndef ROOM_H
#define ROOM_H

#include <iostream>
#include <exception>
#include <stdexcept>
#include <sstream>
#include <string>
#include <vector>
#include "Windows.h"
#include "Doorway.h"

class Room{
public:

    Room(double width, double length, double height, int numberOfWindows, int numberOfDoorWays);

    double getWidth () const{return m_width;}
    double getLength () const{return m_length;}
    double getHeight() const{return m_height;}
    double getUsableFloorArea () const {return m_usableFloorArea;}
    double getUsableWallArea () const {return m_usableWallArea;}

    void setUsableWallArea (double newArea);
    void setFloorArea (double newArea);

    double usableWallArea (int numberOfWindows, int numberOfDoorWays) const;
    double usableFloorArea () const;

    std::string Info () const;

private:
    double m_width, m_length, m_height;
    Windows m_windows;
    Doorway m_doorways;
    double m_usableWallArea, m_usableFloorArea;

};

#endif //ROOM_H