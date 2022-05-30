#ifndef WINDOWS_H
#define WINDOWS_H

#include <iostream>
#include <exception>
#include <stdexcept>
#include <sstream>
#include <string>
#include <utility>
#include <vector>

class Windows {
public:
    Windows (std::vector <std::vector <double>>& windows, int numberOfWindows);
    void setNumberOfWindows (int numberOfWindows) {m_numberOfWindows = numberOfWindows;}
    void setDimensions (std::vector <std::vector <double>> windows) {m_windows = std::move(windows);}

    double squareOfWindows () const;

private:
    int m_numberOfWindows;
    std::vector <std::vector <double>> m_windows;
};


#endif //WINDOWS_H
