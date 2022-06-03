#include "Sculpture.h"

Sculpture::Sculpture(const std::string& author, const std::string& country, int year, double width, double length,
                     double height, const std::string& type) :
VoluminousExhibit (author, country, year, width, length, height){
    m_type = type;
}

Sculpture::Sculpture(const std::string& country, int year, double width, double length,
                     double height, const std::string& type) :
        VoluminousExhibit (country, year, width, length, height){
    m_type = type;
}

std::string Sculpture::Info() const{
    std::stringstream ss;
    ss << VoluminousExhibit::Info() << "\nIt is a sculpture.";
    return ss.str();
}

void Sculpture::place(Room *room) {
    VoluminousExhibit::place(room);
}