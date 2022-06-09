#include "Picture.h"

Picture::Picture (const std::string& author, const std::string& name, const std::string& country, int year,
                  double width, double height): m_width(width), m_height(height), Exhibit(author, name, country, year){
    if (width < 0 || height < 0){
        throw std::invalid_argument("Cannot create a picture! Width and/or height cannot be negative.");
    }
}

Picture::Picture (const std::string& name, const std::string& country, int year,
                  double width, double height): m_width(width), m_height(height), Exhibit(name, country, year){
    if (width < 0 || height < 0){
        throw std::invalid_argument("Cannot create a picture! Width and/or height cannot be negative.");
    }
}

std::string Picture::Info() const{
    std::stringstream ss;
    ss << Exhibit::Info() << "\nIt`s a picture. Size: " << m_width << '*' << m_height << '.';
    return ss.str();
}

void Picture::place(Room *room) {
    if(m_height*m_width <= room->getUsableWallArea()) {
        Exhibit::place(room);
        double area = (room->getUsableWallArea() - m_height*m_width);
        room->setUsableWallArea(area);
    }
    else {
        throw std::invalid_argument("Cannot place in the room. Picture is too big.");
    }
}
