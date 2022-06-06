#include "Technics.h"

Technics::Technics(const std::string& author, const std::string& name, const std::string& country, int year,
                   double width, double length, double height, int material) :
        VoluminousExhibit(author, name, country, year, width, length, height){
    switch(material){
        case 1:{
            m_material = "Stone";
        }
        case 2:{
            m_material = "Iron";
        }
        case 3: {
            m_material = "Aliminium";
        }
        case 4:{
            m_material = "Plastic";
        }
        case 5:{
            m_material = "Alloy";
        }
        case 6:{
            m_material = "Rubber";
        }
    }
}


Technics::Technics(const std::string& name, const std::string& country, int year, double width, double length,
                   double height, int material) :
        VoluminousExhibit(name, country, year, width, length, height){
    switch(material){
        case 1:{
            m_material = "Stone";
        }
        case 2:{
            m_material = "Iron";
        }
        case 3: {
            m_material = "Aliminium";
        }
        case 4:{
            m_material = "Plastic";
        }
        case 5:{
            m_material = "Alloy";
        }
        case 6:{
            m_material = "Rubber";
        }
    }
}

std::string Technics::Info() const{
    std::stringstream ss;
    ss << VoluminousExhibit::Info() << "\nIt is a technics.\nMaterial: " << m_material << '.';
    return ss.str();
}

void Technics::place(Room *room) {
    VoluminousExhibit::place(room);
}