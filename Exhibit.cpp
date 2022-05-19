#include "Exhibit.h"

Exhibit::Exhibit(std::string author, std::string country, int year){
    if ( year < 0) {
        throw std::invalid_argument("Cannot create an exhibit! Year cannot be negative.");
    }
    m_author = author;
    m_country = country;
    m_year = year;
}