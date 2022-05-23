#include "Exhibit.h"

Exhibit::Exhibit(std::string country, int year, std::string author){
    if ( year < 0) {
        throw std::invalid_argument("Cannot create an exhibit! Year cannot be negative.");
    }
    m_country = country;
    m_year = year;
    m_author = author;
}

std::string Exhibit::Info() const{
    std::stringstream ss;

    ss << "You have created an exhibit of museum."
       << "\nAuthor: "<< m_author << ". " << "Country: " << m_country << '.'
       << "\nYear: " << m_year << '.';
    return ss.str();
}
