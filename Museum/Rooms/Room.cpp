#include "Room.h"

Room::Room(double width, double length, double height, int numberOfWindows, int numberOfDoorWays) : m_width(width), m_length(length), m_height(height),
m_windows(Windows(numberOfWindows)), m_doorways(Doorway(numberOfDoorWays)), m_floorArea(width*length), m_usableWallArea(
                usableWallArea(numberOfWindows, numberOfDoorWays)){
    if (usableWallArea(numberOfWindows, numberOfDoorWays) <= 0)
    {
        throw std::invalid_argument ("Cannot create a room. It does not have usable area.");
    }
}

std::string Room::Info () const{
    std::stringstream ss;
    ss << "Room ( "<< m_width << '*' << m_length << '*'
            << m_height << ")." << "\n" << m_doorways.Info() << "\n" << m_windows.Info()
            << "\nUsable wall area: " << m_usableWallArea << '.';
    return ss.str();
}

double Room::usableWallArea (int numberOfWindows, int numberOfDoorWays) const{
    double usableArea = m_length*m_height*2 + m_width*m_height*2;
    Windows w(numberOfWindows);
    usableArea -= w.squareOfWindows();
    Doorway d(numberOfDoorWays);
    usableArea -= d.squareOfDoorways();
    return usableArea;
}

void Room::setUsableWallArea(double newArea) {
    m_usableWallArea = newArea;
}

void Room::setFloorArea(double newArea) {
    m_floorArea = newArea;
}


