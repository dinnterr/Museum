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
    Exhibit(const std::string& author, const std::string& name, const std::string& country, int year);
    Exhibit(const std::string& name, const std::string& country, int year);

    virtual std::string getName () const {return m_name;}
    Room* getRoom () const {return m_room;}

    virtual std::string Info() const;

    virtual void place(Room* room);

private:
    std::string m_author = "Unknown";
    std::string m_country, m_name;
    int m_year;
    Room* m_room;
};

#endif //EXHIBIT_H

