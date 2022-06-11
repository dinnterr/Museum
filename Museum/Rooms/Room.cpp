#include "Room.h"

Room::Room(double width, double length, double height, int numberOfWindows, int numberOfDoorWays) : m_width(width), m_length(length), m_height(height),
m_windows(Windows(numberOfWindows)), m_doorways(Doorway(numberOfDoorWays)), m_usableWallArea(
                usableWallArea(numberOfWindows, numberOfDoorWays)), m_usableFloorArea(width*length) {
    if (width <= 0 || length <= 0 || height <= 0){
        throw std::invalid_argument ("Cannot create a room. Parameters of size cannot be negative or equal zero.");
    }
    if (usableWallArea(numberOfWindows, numberOfDoorWays) <= 0)
    {
        throw std::invalid_argument ("Cannot create a room. It does not have usable area.");
    }
}

std::string Room::Info () const{
    std::stringstream ss;
    ss << "Room ("<< m_width << '*' << m_length << '*'
            << m_height << ")." << "\n" << m_doorways.Info() << "\n" << m_windows.Info()
            << "\nUsable wall area: " << m_usableWallArea << " m2." << "\nUsable floor area: "
            << m_usableFloorArea << " m2.";
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

double Room::usableFloorArea() const {
    return m_width*m_length;
}

void Room::canPlacePicture(Picture* p) {
    if (p->area() <= m_usableWallArea){
        m_usableWallArea -= p->area();
    }
    else
        throw std::invalid_argument("Cannot place in the room. Picture is too big.");
}

void Room::canPlaceVoluminousExhibit(VoluminousExhibit *v) {
    if (v->area() <= m_usableFloorArea && v->getHeight() < m_height){
        m_usableFloorArea -= v->area();
    }
    else
        throw std::invalid_argument("Cannot place in the room. Voluminous exhibit is too big.");
}

void Room::removePicture(Picture *p) {
    m_usableWallArea += p->area();
}

void Room::removeVoluminousExhibit(VoluminousExhibit *v) {
    m_usableFloorArea += v->area();
}
