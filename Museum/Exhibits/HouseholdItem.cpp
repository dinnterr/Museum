#include "HouseholdItem.h"

HouseholdItem::HouseholdItem(const std::string& author, const std::string& name, const std::string& country, int year, double width, double length, double height, bool posibilityOfUsing):
        VoluminousExhibit(author, name, country, year, width, length, height){
    m_posibilityOfUsing = posibilityOfUsing;
}

HouseholdItem::HouseholdItem(const std::string& name, const std::string& country, int year, double width, double length, double height, bool posibilityOfUsing):
        VoluminousExhibit(name, country, year, width, length, height){
    m_posibilityOfUsing = posibilityOfUsing;
}

std::string HouseholdItem::Info() const{
    std::stringstream ss;
    ss << VoluminousExhibit::Info() << "\nIt is a household item.";
    return ss.str();
}

void HouseholdItem::place(Room *room) {
    VoluminousExhibit::place(room);
}