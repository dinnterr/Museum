#ifndef EXHIBIT_H
#define EXHIBIT_H

#include <iostream>
#include <exception>
#include <stdexcept>
#include <sstream>
#include <string>
#include "../Rooms/Room.h"

class Exhibit{
public:
    Exhibit(const std::string& author, const std::string& country, int year);
    Exhibit(const std::string& country, int year);

    void setAuthor (const std::string& author){m_author = author;}
    void setCountry (const std::string& country){m_country = country;}
    void setYear (int year){m_year = year;}

    virtual std::string Info() const;

    virtual void place(Room* room);

private:
    std::string m_author = "Unknown";
    std::string m_country;
    int m_year;
    Room* m_room;
};

#endif //EXHIBIT_H

