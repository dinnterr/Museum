#ifndef EXHIBIT_H
#define EXHIBIT_H

#include <iostream>
#include <exception>
#include <stdexcept>
#include <sstream>
#include <string>

class Exhibit{
public:
    Exhibit(std::string author, std::string country, int year);
    Exhibit(std::string country, int year);

    std::string getAuthor () const {return m_author;}
    std::string getCountry () const {return m_country;}
    int getYear () const {return m_year;}

    void setAuthor (std::string author){m_author = author;}
    void setCountry (std::string country){m_country = country;}
    void setYear (int year){m_year = year;}

    virtual std::string Info() const;

private:
    std::string m_author = "Unknown";
    std::string m_country;
    int m_year;
};

#endif //EXHIBIT_H

