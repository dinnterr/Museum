#include "Sculpture.h"

Sculpture::Sculpture(const std::string& author, const std::string& name, const std::string& country, int year, double width, double length,
                     double height, int type) :
VoluminousExhibit (author, name, country, year, width, length, height){
    if(type == 1){
        m_type = "Bust.";
    }
    if(type == 2){
        m_type = "Sculpture of small forms.";
    }
    if(type == 3){
        m_type = "Sculptural group.";
    }
    if(type == 4){
        m_type = "Bust.";
    }
    if(type == 5){
        m_type = "Statuette.";
    }
    if(type == 6){
        m_type = "Torso.";
    }
}

Sculpture::Sculpture(const std::string& name, const std::string& country, int year, double width, double length,
                     double height, int type) :
        VoluminousExhibit (name, country, year, width, length, height){
    if(type == 1){
        m_type = "Bust.";
    }
    if(type == 2){
        m_type = "Sculpture of small forms.";
    }
    if(type == 3){
        m_type = "Sculptural group.";
    }
    if(type == 4){
        m_type = "Bust.";
    }
    if(type == 5){
        m_type = "Statuette.";
    }
    if(type == 6){
        m_type = "Torso.";
    }
}

std::string Sculpture::Info() const{
    std::stringstream ss;
    ss << VoluminousExhibit::Info() << "\nIt is a sculpture. Its type: " << m_type;
    return ss.str();
}

void Sculpture::place(Room *room) {
    VoluminousExhibit::place(room);
}