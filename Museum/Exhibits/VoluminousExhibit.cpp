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

void VoluminousExhibit::place(Room *room) {
    if (room == nullptr){
        Exhibit::place(room);
    }
    else if(m_width*m_length <= room->getUsableFloorArea() && m_height < room->getHeight()) {
        Exhibit::place(room);
        double area = (room->getUsableFloorArea() - m_width*m_length);
        room->setFloorArea(area);
    }
    else
        throw std::invalid_argument("Cannot place in the room. Voluminous exhibit is too big.");
}

