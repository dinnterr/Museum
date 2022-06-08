#ifndef WINDOWS_H
#define WINDOWS_H

#include <iostream>
#include <exception>
#include <stdexcept>
#include <utility>
#include <vector>

class Windows{
public:
    Windows();
    Windows (int numberOfWindows);

    void setNumberOfWindows (int numberOfWindows) {m_numberOfWindows = numberOfWindows;}

    double squareOfWindows () const;

private:
    int m_numberOfWindows;
    double m_height = 1.76;
    double m_width = 1.42;
};


#endif //WINDOWS_H
