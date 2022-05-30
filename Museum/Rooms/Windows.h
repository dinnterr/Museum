#ifndef WINDOWS_H
#define WINDOWS_H

#include <iostream>
#include <exception>
#include <stdexcept>
#include <utility>
#include <vector>

class Windows {
public:
    Windows (int numberOfWindows);
    Windows (int numberOfWindows, std::vector <std::vector <double>>& windows);
    void setNumberOfWindows (int numberOfWindows) {m_numberOfWindows = numberOfWindows;}
    void setDimensions (std::vector <std::vector <double>> windows) {m_windows = std::move(windows);}

    double squareOfWindows () const;

private:
    int m_numberOfWindows;
    std::vector <std::vector <double>> m_windows;
};


#endif //WINDOWS_H
