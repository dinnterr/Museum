#include "VoluminousExhibit.h"

VoluminousExhibit::VoluminousExhibit(std::string country, int year, std::string author,
                                     double width, double length, double height) : Exhibit(country, year, author){
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