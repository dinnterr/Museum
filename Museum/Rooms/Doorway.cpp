#include "Doorway.h"
#include "Constants.h"

Doorway::Doorway (int numberOfDoorways){
    if (numberOfDoorways <= 0) {
        throw std::invalid_argument("Number of doorways cannot be negative or equal zero.");
    }
    else{
        m_doorways.resize(numberOfDoorways, std::vector<double>(DIMENSIONS));
        m_numberOfDoorways = numberOfDoorways;
        for (int i = 0; i < numberOfDoorways; i++) {
            m_doorways[i][0] = 2100;
            m_doorways[i][1] = 1000;
        }
    }
}

Doorway::Doorway(std::vector <std::vector <double>>& doorways, int numberOfDoorways){
    if (numberOfDoorways <= 0) {
        throw std::invalid_argument("Number of doorways cannot be negative or equal zero.");
    }
    else {
        m_doorways.resize(numberOfDoorways, std::vector<double>(DIMENSIONS));
        m_numberOfDoorways = numberOfDoorways;
        for (int i = 0; i < numberOfDoorways; i++) {
            for (int j = 0; j < DIMENSIONS; j++) {
                if (doorways[i][j] > 0) {
                    m_doorways[i][j] = doorways[i][j];
                }
                throw std::invalid_argument("Cannot set window(-s). Dimensions cannot be negative.");
            }
        }
    }
}

double Doorway::squareOfDoorways () const {
    int const N = m_numberOfDoorways;

    std::vector<double> individualDoorAreas(N);

    for (int n = 0; n < N; n++) {
        individualDoorAreas[n] = 1;
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < DIMENSIONS; j++) {
            individualDoorAreas[i] *= m_doorways[i][j];
        }
    }
    double square = 0;
    for (int i = 0; i < N; i++) {
        square += individualDoorAreas[i];
    }
    return square;
}
