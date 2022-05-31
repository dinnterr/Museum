#include "Technics.h"

Technics::Technics(std::string author, std::string country, int year, double width, double length, double height, std::string material) :
        VoluminousExhibit(author, country, year, width, length, height){
    m_material = material;
}


Technics::Technics(std::string country, int year, double width, double length, double height, std::string material) :
        VoluminousExhibit(country, year, width, length, height){
    m_material = material;
}

std::string Technics::Info() const{
    std::stringstream ss;
    ss << VoluminousExhibit::Info() << "\nIt is a technics.\nMaterial: " << m_material << '.';
    return ss.str();
}