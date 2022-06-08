#ifndef DOORWAY_H
#define DOORWAY_H

#include <iostream>
#include <exception>
#include <stdexcept>
#include <utility>
#include <vector>
#include <string>
#include <sstream>

class Doorway {
public:
    Doorway();
    Doorway (int numberOfDoorways);

    void setNumberOfDoors (int numberOfDoorways) {m_numberOfDoorways= numberOfDoorways;}

    double squareOfDoorways () const;

    std::string Info() const;

private:
    int m_numberOfDoorways;
    double m_height = 2.1;
    double m_width = 1;
};


#endif //DOORWAY_H
