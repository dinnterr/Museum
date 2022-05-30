#ifndef WINDOWS_H
#define WINDOWS_H

#include <iostream>
#include <exception>
#include <stdexcept>
#include <utility>
#include <vector>
#include "Openings.h"

class Windows : public Openings{
public:
    Windows (int numberOfWindows);
    Windows (int numberOfWindows, std::vector <std::vector <double>>& windows);

    void setNumberOfWindows (int numberOfWindows) {m_numberOfOpenings = numberOfWindows;}
    void setDimensions (std::vector <std::vector <double>> windows) {m_openings = std::move(windows);}

    double squareOfOpenings () const override;
};


#endif //WINDOWS_H
