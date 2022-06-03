#include "VoluminousExhibit.h"

VoluminousExhibit::VoluminousExhibit(const std::string& author, const std::string& country, int year,
                                     double width, double length, double height) : Exhibit(author, country, year){
    if (width < 0 || length < 0 || height < 0){
        throw std::invalid_argument("Cannot create a voluminous exhibit! Width and/or length and/or height cannot be negative.");
    }
    m_width = width;
    m_length = length;
    m_height = height;
}

VoluminousExhibit::VoluminousExhibit(const std::string& country, int year,
                                     double width, double length, double height) : Exhibit(country, year){
    if (width < 0 || length < 0 || height < 0){
        throw std::invalid_argument("Cannot create a voluminous exhibit! Width and/or length and/or height cannot be negative.");
    }
    m_width = width;
    m_length = length;
    m_height = height;
}

std::string VoluminousExhibit::Info() const {
    std::stringstream ss;
    ss << Exhibit::Info() << "\nIt`s a voluminous exhibit. Size of voluminous exhibit: " << m_width << '*' << m_length << '*' << m_height << '.';
    return ss.str();
}

double VoluminousExhibit::Area() const {
    return m_width*m_length;
}

void VoluminousExhibit::place(Room *room) {
    if(Area() <= room->getFloorArea() && m_height < room->getHeight()) {
        Exhibit::place(room);
    }
    double area = (room->getFloorArea() - Area());
    room->setFloorArea(area);
}
