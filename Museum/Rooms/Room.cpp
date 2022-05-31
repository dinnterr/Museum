#include "Room.h"

Room::Room(double width, double length, double height, const Windows& windows, const Doorway& doorways){
    if (usableWallArea(windows, doorways) <= 0)
    {
        throw std::invalid_argument ("Cannot create a room. It does not have usable area.");
    }
    m_width = width;
    m_length = length;
    m_height = height;
}

std::string Room::Info() const{
    std::stringstream ss;

    ss << "You have created a room of size "
            << m_width << '*' << m_length << '*'
            << m_height << ".";
    return ss.str();
}

double Room::getFloorArea () const{
    return m_width*m_length;
}

double Room::getWallArea () const{
    return m_length*m_height*2 + m_width*m_height*2;
}

double Room::getSpace () const{
    return m_width*m_length*m_height;
}

double Room::usableWallArea (const Windows &w, const Doorway &d) const{
    double usableArea = 0;
    usableArea = getWallArea() - (w.squareOfWindows() + d.squareOfDoorways());
    return  usableArea;
}
