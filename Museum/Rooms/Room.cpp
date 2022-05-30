#include "Room.h"

Room::Room(double width, double length, double height){
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

double Room::getSquare () const{
    return m_width*m_length;
}

double Room::getSpace () const{
    return m_width*m_length*m_height;
}


