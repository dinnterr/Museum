#include "Picture.h"

Picture::Picture (const std::string& author, const std::string& name, const std::string& country, int year,
                  double width, double height): Exhibit(author, name, country, year){
    if (width < 0 || height < 0){
        throw std::invalid_argument("Cannot create a picture! Width and/or height cannot be negative.");
    }
    m_width = width;
    m_height = height;
}

Picture::Picture (const std::string& name, const std::string& country, int year,
                  double width, double height): Exhibit(name, country, year){
    if (width < 0 || height < 0){
        throw std::invalid_argument("Cannot create a picture! Width and/or height cannot be negative.");
    }
    m_width = width;
    m_height = height;
}

std::string Picture::Info() const{
    std::stringstream ss;
    ss << Exhibit::Info() << "\nIt`s a picture. Size of picture: " << m_width << '*' << m_height << '.';
    return ss.str();
}

double Picture::Area() const {
    return m_height*m_width;
}

void Picture::place(Room *room) {
    if(Area() <= room->getUsableWallArea()) {
        Exhibit::place(room);
    }
    double area = (room->getUsableWallArea() - Area());
    room->setUsableWallArea(area);
}
