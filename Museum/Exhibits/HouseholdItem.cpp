#include "HouseholdItem.h"

HouseholdItem::HouseholdItem(const std::string& author, const std::string& name, const std::string& country, int year, double width, double length, double height, int possibilityOfUsing):
        VoluminousExhibit(author, name, country, year, width, length, height){
    if(possibilityOfUsing < 0 || possibilityOfUsing > 1){
        throw std::invalid_argument("Wrong number.");
    }
    switch (possibilityOfUsing) {
        case usable: {
            m_possibilityOfUsing = "Usable item.";
        }
        case notUsable:{
            m_possibilityOfUsing = "Not usable item.";
        }
    }
}

HouseholdItem::HouseholdItem(const std::string& name, const std::string& country, int year, double width, double length, double height, int possibilityOfUsing):
        VoluminousExhibit(name, country, year, width, length, height){
    if(possibilityOfUsing < 0 || possibilityOfUsing > 1){
        throw std::invalid_argument("Wrong number.");
    }
    switch (possibilityOfUsing) {
        case usable: {
            m_possibilityOfUsing = "Usable item.";
        }
        case notUsable:{
            m_possibilityOfUsing = "Not usable item.";
        }
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