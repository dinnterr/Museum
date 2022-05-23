#include "Technics.h"

Technics::Technics(std::string country, int year, std::string author, double width, double length, double height) :
        VoluminousExhibit(country, year, author, width, length, height){}

std::string Technics::Info() const{
    std::stringstream ss;
    ss << VoluminousExhibit::Info() << "\nIt is a technics.";
    return ss.str();
}