#include "Doorway.h"

Doorway::Doorway (int numberOfDoorways) : m_numberOfDoorways(numberOfDoorways) {
    if (numberOfDoorways <= 0) {
        throw std::invalid_argument("Number of doorways cannot be negative or equal zero.");
    }
}

double Doorway::squareOfDoorways () const {
    return m_height*m_width*m_numberOfDoorways;
}

std::string Doorway::Info() const {
    std::stringstream ss;
    ss << "Number of doorways: " << m_numberOfDoorways << " (each 2.1m * 1m)";
    return ss.str();
}
