#include "HouseholdItem.h"

HouseholdItem::HouseholdItem(std::string author, std::string country, int year, double width, double length, double height):
        VoluminousExhibit(author, country, year, width, length, height){}

HouseholdItem::HouseholdItem(std::string country, int year, double width, double length, double height):
        VoluminousExhibit(country, year, width, length, height){}

std::string HouseholdItem::Info() const{
    std::stringstream ss;
    ss << VoluminousExhibit::Info() << "\nIt is a household item.";
    return ss.str();
}