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
    Doorway (int numberOfDoorways);
    Doorway (std::vector <std::vector <double>>& doorways, int numberOfDoorways);

    void setNumberOfDoors (int numberOfDoorways) {m_numberOfDoorways= numberOfDoorways;}
    void setDimensions (std::vector <std::vector <double>> doorways) {m_doorways = std::move(doorways);}

    double squareOfDoorways () const;

    std::string Info() const;

private:
    int m_numberOfDoorways;
    std::vector <std::vector <double>> m_doorways;
};


#endif //DOORWAY_H
