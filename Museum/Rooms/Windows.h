#ifndef WINDOWS_H
#define WINDOWS_H

#include <iostream>
#include <exception>
#include <stdexcept>
#include <utility>
#include <vector>
#include <string>
#include <sstream>

class Windows{
public:
    Windows (int numberOfWindows);

    double squareOfWindows () const;

    std::string Info() const;

private:
    int m_numberOfWindows;
    double m_height = 1.76;
    double m_width = 1.42;
};


#endif //WINDOWS_H
