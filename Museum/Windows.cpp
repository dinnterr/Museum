#include "Windows.h"

Windows::Windows(std::vector <std::vector <double>> windows, int numberOfWindows) {
    if (numberOfWindows < 0) {
        throw std::invalid_argument("Number of windows cannot be negative.");
    }
    else if (numberOfWindows == 0) {
        m_numberOfWindows = 0;
    }
    else {
        m_numberOfWindows = numberOfWindows;
        for (int i = 0; i < numberOfWindows; i++) {
            for (int j = 0; j < 2; j++) {
                if (windows[i][j] > 0) {
                    m_windows[i][j] = windows[i][j];
                }
                throw std::invalid_argument("Cannot set window(-s). Dimensions cannot be negative.");
            }
        }
    }
}

    /*int const N = numberOfWindows;
    int const DIMENSIONS = 2;
    std::vector <std::vector <double>> windows (N, std::vector<double>(DIMENSIONS));
    std::cout << "Enter the dimensions of each window (its width and height)." << std::endl;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < DIMENSIONS; j++)
        {
            std::cin >> windows[i][j];
        }
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < DIMENSIONS; j++)
        {
            if (windows[i][j] > 0){
                m_windows[i][DIMENSIONS] = windows[i][j];
            }
            else
                throw std::invalid_argument ("Cannot set window(-s). Dimensions cannot be negative.");
        }
    }*/


double Windows::squareOfWindows (int numberOfWindows) const{
    int const N = numberOfWindows;

    std::vector <double> individualWindowAreas (N);

    for (int n = 0; n < N; n++){
        individualWindowAreas[n] = 1;
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 2; j++) {
            individualWindowAreas[i] *= m_windows[i][j];
        }
    }
    double square = 0;
    for (int i = 0; i < N; i++){
        square += individualWindowAreas[i];
    }
    return square;
}