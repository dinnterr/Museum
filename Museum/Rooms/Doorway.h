#ifndef DOORWAY_H
#define DOORWAY_H

#include <iostream>
#include <exception>
#include <stdexcept>
#include <sstream>
#include <string>
#include <utility>
#include <vector>

class Doorway {
    Doorway (int numberOfDoorways);
    Doorway (std::vector <std::vector <double>>& doorways, int numberOfDoorways);
    void setNumberOfDoors (int numberOfDoorways) {m_numberOfDoorways= numberOfDoorways;}
    void setDimensions (std::vector <std::vector <double>> doorways) {m_doorways = std::move(doorways);}

    double squareOfDoorways () const;

private:
    int m_numberOfDoorways;
    std::vector <std::vector <double>> m_doorways;
};


#endif //DOORWAY_H
