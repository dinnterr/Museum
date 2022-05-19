#include "Picture.h"

Picture::Picture (std::string author, std::string country, int year, double width, double height): Exhibit(author, country, year){
    if (width < 0 || height < 0){
        throw std::invalid_argument("Cannot create a picture! Width and/or height cannot be negative.");
    }
    m_width = width;
    m_height = height;
}