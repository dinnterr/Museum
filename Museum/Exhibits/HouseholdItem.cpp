#include "HouseholdItem.h"

HouseholdItem::HouseholdItem(const std::string& author, const std::string& name, const std::string& country, int year, double width, double length, double height, int posibilityOfUsing):
        VoluminousExhibit(author, name, country, year, width, length, height){
    if(posibilityOfUsing < 0 || posibilityOfUsing > 1){
        throw std::invalid_argument("Wrong number.");
    }
    switch (posibilityOfUsing) {
        case usable: {
            m_posibilityOfUsing = "Usable item.";
        }
        case notUsable:{
            m_posibilityOfUsing = "Not usable item.";
        }
    }
}

HouseholdItem::HouseholdItem(const std::string& name, const std::string& country, int year, double width, double length, double height, int posibilityOfUsing):
        VoluminousExhibit(name, country, year, width, length, height){
    if(posibilityOfUsing < 0 || posibilityOfUsing > 1){
        throw std::invalid_argument("Wrong number.");
    }
    switch (posibilityOfUsing) {
        case usable: {
            m_posibilityOfUsing = "Usable item.";
        }
        case notUsable:{
            m_posibilityOfUsing = "Not usable item.";
        }
    }
}

std::string HouseholdItem::Info() const{
    std::stringstream ss;
    ss << VoluminousExhibit::Info() << "\nIt is a household item.";
    return ss.str();
}

void HouseholdItem::place(Room *room) {
    VoluminousExhibit::place(room);
}