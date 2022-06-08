#include "Exhibit.h"

Exhibit::Exhibit(const std::string& author, const std::string& name, const std::string& country, int year): m_author(author),
m_name(name), m_country(country), m_year(year), m_room(nullptr) {
    if (year < 0) {
        throw std::invalid_argument("Cannot create an exhibit! Year cannot be negative.");
    }
}

Exhibit::Exhibit(const std::string& name, const std::string& country, int year): m_name(name),
m_country(country), m_year(year), m_room(nullptr){
    if ( year < 0) {
        throw std::invalid_argument("Cannot create an exhibit! Year cannot be negative.");
    }
}

std::string Exhibit::Info() const{
    std::stringstream ss;

    ss << "You have created an exhibit of museum."
       << "\nAuthor: "<< m_author << ". " << "Country: " << m_country << '.'
       << "\nYear: " << m_year << '.';
    return ss.str();
}

void Exhibit::place(Room * room) {
    m_room = room;
}
