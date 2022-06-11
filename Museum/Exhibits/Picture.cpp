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

double Picture::area() const {
    return m_height*m_width;
}

void Picture::place(Room *room) {
    if (room == nullptr){
        Exhibit::place(room);
    }
    else if(room->canPlacePicture(this)) {
        Exhibit::place(room);
    }
}

void Picture::removeFromRoom(Room * room) {
    Exhibit::removeFromRoom(room);
    room->removePicture(this);
}
