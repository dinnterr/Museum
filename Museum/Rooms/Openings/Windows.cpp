#include "Windows.h"
#include "Constants.h"

Windows::Windows (int numberOfWindows){
    if (numberOfWindows < 0) {
        throw std::invalid_argument("Number of windows cannot be negative.");
    }
    else if (numberOfWindows == 0) {
        m_numberOfOpenings = 0;
    }
    else {
        m_numberOfOpenings = numberOfWindows;
        for (int i = 0; i < numberOfWindows; i++) {
            m_openings[i][0] = 1760;
            m_openings[i][1] = 1420;
        }
    }
}

Windows::Windows(int numberOfWindows, std::vector <std::vector <double>>& windows) {
    if (numberOfWindows <= 0) {
        throw std::invalid_argument("If you enter window parameters, then their number cannot be negative or equal to zero.");
    }
    else {
        m_numberOfOpenings = numberOfWindows;
        for (int i = 0; i < numberOfWindows; i++) {
            for (int j = 0; j < DIMENSIONS; j++) {
                if (windows[i][j] > 0) {
                    m_openings[i][j] = windows[i][j];
                }
                throw std::invalid_argument("Cannot set window(-s). Dimensions cannot be negative.");
            }
        }
    }
}

double Windows::squareOfOpenings () const {
    if (m_numberOfOpenings == 0){
        return 0;
    }
    else {
        int const N = m_numberOfOpenings;

        std::vector<double> individualWindowAreas(N);

        for (int n = 0; n < N; n++) {
            individualWindowAreas[n] = 1;
        }

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < DIMENSIONS; j++) {
                individualWindowAreas[i] *= m_openings[i][j];
            }
        }
        double square = 0;
        for (int i = 0; i < N; i++) {
            square += individualWindowAreas[i];
        }
        return square;
    }
}