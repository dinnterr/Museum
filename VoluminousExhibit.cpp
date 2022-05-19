#include "VoluminousExhibit.h"

VoluminousExhibit::VoluminousExhibit(std::string author, std::string country, int year,
                                     double width, double length, double height) : Exhibit(author, country, year){
    if (width < 0 || length < 0 || height < 0){
        throw std::invalid_argument("Cannot create a voluminous exhibit! Width and/or length and/or height cannot be negative.");
    }
    m_width = width;
    m_length = length;
    m_height = height;
}