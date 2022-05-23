#include "Sculpture.h"

Sculpture::Sculpture(std::string author, std::string country, int year, double width, double length, double height) :
VoluminousExhibit (author, country, year, width, length, height){}

Sculpture::Sculpture(std::string country, int year, double width, double length, double height) :
        VoluminousExhibit (country, year, width, length, height){}

std::string Sculpture::Info() const{
    std::stringstream ss;
    ss << VoluminousExhibit::Info() << "\nIt is a sculpture.";
    return ss.str();
}