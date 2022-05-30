#ifndef OPENINGS_H
#define OPENINGS_H

#include <iostream>
#include <exception>
#include <stdexcept>
#include <utility>
#include <vector>

class Openings {
public:
    virtual double squareOfOpenings () const = 0;

protected:
    Openings() = default;
    int m_numberOfOpenings;
    std::vector <std::vector <double>> m_openings;
};


#endif //OPENINGS_H
