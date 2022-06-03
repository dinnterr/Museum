#include "Room.h"

Room::Room(double width, double length, double height, std::vector<Windows>& window, std::vector<Doorway>& doorway){
    if (usableWallArea(window, doorway) <= 0)
    {
        throw std::invalid_argument ("Cannot create a room. It does not have usable area.");
    }
    m_width = width;
    m_length = length;
    m_height = height;
    m_windows = window;
    m_doorways = doorway;
    m_floorArea = width*length;
    m_usableWallArea = usableWallArea(window, doorway);
}

std::string Room::Info() const{
    std::stringstream ss;

    ss << "You have created a room of size "
            << m_width << '*' << m_length << '*'
            << m_height << ".";
    return ss.str();
}

double Room::usableWallArea (std::vector<Windows>& w, std::vector<Doorway>& d) const{
    double usableArea = m_length*m_height*2 + m_width*m_height*2;
    for (auto const & window : w){
        usableArea -= window.squareOfWindows();
    }
    for (auto const & doorway : d){
        usableArea -= doorway.squareOfDoorways();
    }
    return usableArea;
}

void Room::addWindow(const Windows & window) {
    m_windows.push_back(window);
}

void Room::addDoorway(const Doorway & doorway) {
    m_doorways.push_back(doorway);
}


