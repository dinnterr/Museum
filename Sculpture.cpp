#include "Sculpture.h"

Sculpture::Sculpture(std::string country, int year, std::string author, double width, double length, double height) :
VoluminousExhibit (country, year, author, width, length, height){}

std::string Sculpture::Info() const{
    std::stringstream ss;
    ss << VoluminousExhibit::Info() << "\nIt is a sculpture.";
    return ss.str();
}