#include "Sculpture.h"

Sculpture::Sculpture(const std::string& author, const std::string& name, const std::string& country, int year, double width, double length,
                     double height, int type) :
VoluminousExhibit (author, name, country, year, width, length, height){
    if (type < 1 || type > 6){
        throw std::invalid_argument("Wrong number.");
    }
    switch (type) {
        case bust:{
            m_type = "Bust.";
        }
        case sculptureOfSmallForms:{
            m_type = "Sculpture of small forms.";
        }
        case sculpturalGroup:{
            m_type = "Sculptural group.";
        }
        case statuette:{
            m_type = "Statuette.";
        }
        case statue:{
            m_type = "Statue.";
        }
        case torso:{
            m_type = "Torso.";
        }
    }
}

Sculpture::Sculpture(const std::string& name, const std::string& country, int year, double width, double length,
                     double height, int type) :
        VoluminousExhibit (name, country, year, width, length, height){
    if (type < 1 || type > 6){
        throw std::invalid_argument("Wrong number.");
    }
    switch (type) {
        case bust:{
            m_type = "Bust.";
        }
        case sculptureOfSmallForms:{
            m_type = "Sculpture of small forms.";
        }
        case sculpturalGroup:{
            m_type = "Sculptural group.";
        }
        case statuette:{
            m_type = "Statuette.";
        }
        case statue:{
            m_type = "Statue.";
        }
        case torso:{
            m_type = "Torso.";
        }
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