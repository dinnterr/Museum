#include "Technics.h"

Technics::Technics(std::string author, std::string country, int year, double width, double length, double height) :
        VoluminousExhibit(author, country, year, width, length, height){}


Technics::Technics(std::string country, int year, double width, double length, double height) :
        VoluminousExhibit(country, year, width, length, height){}

std::string Technics::Info() const{
    std::stringstream ss;
    ss << VoluminousExhibit::Info() << "\nIt is a technics.";
    return ss.str();
}