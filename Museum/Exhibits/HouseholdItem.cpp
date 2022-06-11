#include "HouseholdItem.h"

HouseholdItem::HouseholdItem(const std::string& author, const std::string& name, const std::string& country, int year, double width, double length, double height, int possibilityOfUsing):
        VoluminousExhibit(author, name, country, year, width, length, height){
    if(possibilityOfUsing == 1){
        m_possibilityOfUsing = "Usable item.";
    }
    if(possibilityOfUsing == 2){
        m_possibilityOfUsing = "Not usable item.";
    }
}

HouseholdItem::HouseholdItem(const std::string& name, const std::string& country, int year, double width, double length, double height, int possibilityOfUsing):
        VoluminousExhibit(name, country, year, width, length, height){
    if(possibilityOfUsing == 1){
        m_possibilityOfUsing = "Usable item.";
    }
    if(possibilityOfUsing == 2){
        m_possibilityOfUsing = "Not usable item.";
    }
}

std::string HouseholdItem::Info() const{
    std::stringstream ss;
    ss << VoluminousExhibit::Info() << "\nIt is a household item. Its possibility of using: "
    << m_possibilityOfUsing;
    return ss.str();
}

void HouseholdItem::place(Room *room) {
    VoluminousExhibit::place(room);
}

void HouseholdItem::removeFromRoom(Room *room) {
    VoluminousExhibit::removeFromRoom(room);
}