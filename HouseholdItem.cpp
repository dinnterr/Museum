#include "HouseholdItem.h"

HouseholdItem::HouseholdItem(std::string country, int year, std::string author, double width, double length, double height):
        VoluminousExhibit(country, year, author, width, length, height){}

std::string HouseholdItem::Info() const{
    std::stringstream ss;
    ss << VoluminousExhibit::Info() << "\nIt is a household item.";
    return ss.str();
}