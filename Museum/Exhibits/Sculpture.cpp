#include "Sculpture.h"

Sculpture::Sculpture(const std::string& author, const std::string& name, const std::string& country, int year, double width, double length,
                     double height, int type) :
VoluminousExhibit (author, name, country, year, width, length, height){
    if (type < 1 || type > 6){
        throw std::invalid_argument("Wrong number.");
    }
    switch (type) {
        case 1:{
            m_type = "Bust.";
        }
        case 2:{
            m_type = "Sculpture of small forms.";
        }
        case 3:{
            m_type = "Sculptural group.";
        }
        case 4:{
            m_type = "Statuette.";
        }
        case 5:{
            m_type = "Statue.";
        }
        case 6:{
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
        case 1:{
            m_type = "Bust.";
        }
        case 2:{
            m_type = "Sculpture of small forms.";
        }
        case 3:{
            m_type = "Sculptural group.";
        }
        case 4:{
            m_type = "Statuette.";
        }
        case 5:{
            m_type = "Statue.";
        }
        case 6:{
            m_type = "Torso.";
        }
    }
}

std::string Sculpture::Info() const{
    std::stringstream ss;
    ss << VoluminousExhibit::Info() << "\nIt is a sculpture.";
    return ss.str();
}

void Sculpture::place(Room *room) {
    VoluminousExhibit::place(room);
}