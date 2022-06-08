#include "Technics.h"

Technics::Technics(const std::string& author, const std::string& name, const std::string& country, int year,
                   double width, double length, double height, int material) :
        VoluminousExhibit(author, name, country, year, width, length, height){
    if (material < 1 || material > 6){
        throw std::invalid_argument("Wrong number.");
    }
    switch(material){
        case stone:{
            m_material = "Stone.";
        }
        case iron:{
            m_material = "Iron.";
        }
        case aluminum: {
            m_material = "Aliminium.";
        }
        case plastic:{
            m_material = "Plastic.";
        }
        case alloy:{
            m_material = "Alloy.";
        }
        case rubber:{
            m_material = "Rubber.";
        }
    }
}


Technics::Technics(const std::string& name, const std::string& country, int year, double width, double length,
                   double height, int material) :
        VoluminousExhibit(name, country, year, width, length, height){
    if (material < 1 || material > 6){
        throw std::invalid_argument("Wrong number.");
    }
    switch(material){
        case stone:{
            m_material = "Stone.";
        }
        case iron:{
            m_material = "Iron.";
        }
        case aluminum: {
            m_material = "Aliminium.";
        }
        case plastic:{
            m_material = "Plastic.";
        }
        case alloy:{
            m_material = "Alloy.";
        }
        case rubber:{
            m_material = "Rubber.";
        }
    }
}

std::string Technics::Info() const{
    std::stringstream ss;
    ss << VoluminousExhibit::Info() << "\nIt is a technics.\nIts material: " << m_material;
    return ss.str();
}

void Technics::place(Room *room) {
    VoluminousExhibit::place(room);
}