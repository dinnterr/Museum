#include "VoluminousExhibit.h"

VoluminousExhibit::VoluminousExhibit(const std::string& author, const std::string& name, const std::string& country, int year,
                                     double width, double length, double height) : m_width(width), m_length(length),
                                     m_height(height), Exhibit(author, name, country, year){
    if (width < 0 || length < 0 || height < 0){
        throw std::invalid_argument("Cannot create a voluminous exhibit! Width and/or length and/or height cannot be negative.");
    }
}

VoluminousExhibit::VoluminousExhibit(const std::string& name, const std::string& country, int year,
                                     double width, double length, double height) : m_width(width), m_length(length),
                                     m_height(height), Exhibit(name, country, year){
    if (width < 0 || length < 0 || height < 0){
        throw std::invalid_argument("Cannot create a voluminous exhibit! Width and/or length and/or height cannot be negative.");
    }
}

std::string VoluminousExhibit::Info() const {
    std::stringstream ss;
    ss << Exhibit::Info() << "\nIt`s a voluminous exhibit. Size: " << m_width << '*' << m_length << '*' << m_height << '.';
    return ss.str();
}

double VoluminousExhibit::area() const {
    return m_width*m_length;
}

void VoluminousExhibit::place(Room *room) {
    if (room == nullptr){
        Exhibit::place(room);
    }
    else if(area() <= room->getUsableFloorArea() && m_height < room->getHeight()) {
        Exhibit::place(room);
        double newArea = room->getUsableFloorArea() - area();
        room->setUsableFloorArea(newArea);
    }
    else
        throw std::invalid_argument("Cannot place in the room. Voluminous exhibit is too big.");
}

void VoluminousExhibit::removeFromRoom(Room *room) {
    Exhibit::removeFromRoom(room);
    double newArea = room->getUsableFloorArea() + area();
    room->setUsableFloorArea(newArea);
}

VoluminousExhibit::~VoluminousExhibit() {
    Exhibit::~Exhibit();
}

