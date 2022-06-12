#include "Technics.h"

Technics::Technics(const std::string& author, const std::string& name, const std::string& country, int year,
                   double width, double length, double height, int material) :
        VoluminousExhibit(author, name, country, year, width, length, height){
    if(material == 1){
        m_material = "Stone.";
    }
    if(material == 2){
        m_material = "Iron.";
    }
    if(material == 3){
        m_material = "Aliminium.";
    }
    if(material == 4){
        m_material = "Plastic.";
    }
    if(material == 5){
        m_material = "Alloy.";
    }
    if(material == 6){
        m_material = "Rubber.";
    }
}


Technics::Technics(const std::string& name, const std::string& country, int year, double width, double length,
                   double height, int material) :
        VoluminousExhibit(name, country, year, width, length, height){
    if(material == 1){
        m_material = "Stone.";
    }
    if(material == 2){
        m_material = "Iron.";
    }
    if(material == 3){
        m_material = "Aliminium.";
    }
    if(material == 4){
        m_material = "Plastic.";
    }
    if(material == 5){
        m_material = "Alloy.";
    }
    if(material == 6){
        m_material = "Rubber.";
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

void Technics::removeFromRoom(Room *room) {
    VoluminousExhibit::removeFromRoom(room);
}

Technics::~Technics() {
    VoluminousExhibit::~VoluminousExhibit();
}
