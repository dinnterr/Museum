#include "HouseholdItem.h"

HouseholdItem::HouseholdItem(std::string author, std::string country, int year, double width, double length, double height, bool posibilityOfUsing):
        VoluminousExhibit(author, country, year, width, length, height){
    m_posibilityOfUsing = posibilityOfUsing;
}

HouseholdItem::HouseholdItem(std::string country, int year, double width, double length, double height, bool posibilityOfUsing):
        VoluminousExhibit(country, year, width, length, height){
    m_posibilityOfUsing = posibilityOfUsing;
}

std::string HouseholdItem::Info() const{
    std::stringstream ss;
    ss << VoluminousExhibit::Info() << "\nIt is a household item.";
    return ss.str();
}