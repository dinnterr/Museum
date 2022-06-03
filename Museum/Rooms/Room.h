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

    Room(double width, double length, double height, std::vector<Windows>& window, std::vector<Doorway>& doorway);

    double getWidth () const{return m_width;}
    double getLength () const{return m_length;}
    double getHeight() const{return m_height;}

    void setWidth (double width) {m_width = width;}
    void setLength (double length) {m_length = length;}
    void setHeight (double height) {m_height = height;}
    void addWindow(const Windows & window);
    void addDoorway(const Doorway & doorway);

    std::string Info() const;

private:
    double m_width, m_length, m_height;
    std::vector <Windows> m_windows;
    std::vector <Doorway> m_doorways;
    double usableWallArea (std::vector<Windows>& w, std::vector<Doorway>& d) const;
    double m_floorArea, m_usableWallArea;

};

#endif //ROOM_H