#include "Sculpture.h"

Sculpture::Sculpture(std::string author, std::string country, int year, double width, double length, double height, std::string type) :
VoluminousExhibit (author, country, year, width, length, height){
    m_type = type;
}

Sculpture::Sculpture(std::string country, int year, double width, double length, double height, std::string type) :
        VoluminousExhibit (country, year, width, length, height){
    m_type = type;
}

std::string Sculpture::Info() const{
    std::stringstream ss;
    ss << VoluminousExhibit::Info() << "\nIt is a sculpture.";
    return ss.str();
}