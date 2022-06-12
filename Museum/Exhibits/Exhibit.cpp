#include "Exhibit.h"

Exhibit::Exhibit(const std::string& author, const std::string& name, const std::string& country, int year): m_author(author),
m_name(name), m_country(country), m_year(year), m_room(nullptr) {
    if (year == 0) {
        throw std::invalid_argument("Cannot create an exhibit! Year cannot be equal to zero.");
    }
}

Exhibit::Exhibit(const std::string& name, const std::string& country, int year): m_name(name),
m_country(country), m_year(year), m_room(nullptr){
    if (year == 0) {
        throw std::invalid_argument("Cannot create an exhibit! Year cannot be equal to zero.");
    }
}

std::string Exhibit::Info() const{
    std::stringstream ss;
    if (m_room != nullptr) {
        ss << "Exhibit: " << m_name << '.'
           << "\nAuthor: " << m_author << ". " << "Country: " << m_country << '.'
           << "\nYear: " << m_year << '.' << "\nIt placed in: " << m_room->Info();
    }
    else {
        ss << "Exhibit: " << m_name << '.'
           << "\nAuthor: " << m_author << ". " << "Country: " << m_country << '.'
           << "\nYear: " << m_year << '.' << "\nIt is not placed in the room.";
    }
    return ss.str();
}

void Exhibit::place(Room * room) {
    if (m_room != room) {
        m_room = room;
    }
    else
        throw std::invalid_argument("Exhibit already in this room. Choose another one.");
}

void Exhibit::removeFromRoom(Room * room) {
    if (m_room == nullptr)
        throw std::invalid_argument("This exhibit is not in the room. Choose another one or add such another one.");
    else if (m_room == room)
        m_room = nullptr;
}

Exhibit::~Exhibit() {
    delete m_room;
}
