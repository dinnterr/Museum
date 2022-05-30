#include "Windows.h"

int const DIMENSIONS = 2;

Windows::Windows(std::vector <std::vector <double>>& windows, int numberOfWindows) {
    if (numberOfWindows < 0) {
        throw std::invalid_argument("Number of windows cannot be negative.");
    }
    else if (numberOfWindows == 0) {
        m_numberOfWindows = 0;
    }
    else {
        m_numberOfWindows = numberOfWindows;
        for (int i = 0; i < numberOfWindows; i++) {
            for (int j = 0; j < DIMENSIONS; j++) {
                if (windows[i][j] > 0) {
                    m_windows[i][j] = windows[i][j];
                }
                throw std::invalid_argument("Cannot set window(-s). Dimensions cannot be negative.");
            }
        }
    }
}

double Windows::squareOfWindows () const{
    int const N = m_numberOfWindows;

    std::vector <double> individualWindowAreas (N);

    for (int n = 0; n < N; n++){
        individualWindowAreas[n] = 1;
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < DIMENSIONS; j++) {
            individualWindowAreas[i] *= m_windows[i][j];
        }
    }
    double square = 0;
    for (int i = 0; i < N; i++){
        square += individualWindowAreas[i];
    }
    return square;
}