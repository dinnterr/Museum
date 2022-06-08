#include "Windows.h"
#include "Constants.h"

Windows::Windows (int numberOfWindows) : m_numberOfWindows(numberOfWindows){
    if (numberOfWindows < 0) {
        throw std::invalid_argument("Number of windows cannot be negative.");
    }
}

double Windows::squareOfWindows() const {
    if (m_numberOfWindows == 0){
        return 0;
    }
    else {
        return m_height*m_width*m_numberOfWindows;
    }
}