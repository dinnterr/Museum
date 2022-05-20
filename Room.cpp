#include "Room.h"

Room::Room(double width, double length, double height, double usable_wall_area){
    if(length*height < usable_wall_area){
        throw std::invalid_argument("Cannot create a room! The total area of the walls is less than the usable area of the walls.");
    }
    m_width = width;
    m_length = length;
    m_height = height;
    m_usable_wall_area = usable_wall_area;
}

std::string Room::Info() const{
    std::stringstream ss;

    ss << "You have created a room of size "
            << m_width << '*' << m_length << '*'
            << m_height << " with " << m_usable_wall_area
            << " usable wall area.";
    return ss.str();
}

double Room::getSquare () const{
    return m_width*m_length;
}

double Room::getSpace () const{
    return m_width*m_length*m_height;
}