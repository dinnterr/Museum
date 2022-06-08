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

    Room(double width, double length, double height, std::vector<Windows*>& window, std::vector<Doorway*>& doorway);

    double getWidth () const{return m_width;}
    double getLength () const{return m_length;}
    double getHeight() const{return m_height;}
    double getFloorArea () const {return m_floorArea;}
    double getUsableWallArea () const {return m_usableWallArea;}

    void setWidth (double width) {m_width = width;}
    void setLength (double length) {m_length = length;}
    void setHeight (double height) {m_height = height;}
    void addWindow(Windows * window);
    void addDoorway(Doorway * doorway);
    void setUsableWallArea (double newArea);
    void setFloorArea (double newArea);

    double usableWallArea (std::vector<Windows*>& w, std::vector<Doorway*>& d) const;

    std::string Info () const;

private:
    double m_width, m_length, m_height;
    std::vector <Windows*> m_windows;
    std::vector <Doorway*> m_doorways;
    double m_floorArea, m_usableWallArea;

};

#endif //ROOM_H