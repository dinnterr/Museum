#ifndef ROOM_H
#define ROOM_H

#include <iostream>
#include <exception>
#include <stdexcept>
#include <sstream>
#include <string>
#include <vector>
#include "Windows.h"
#include "Doorway.h"
#include "../Exhibits/Picture.h"
#include "../Exhibits/VoluminousExhibit.h"

class Room{
public:

    Room(double width, double length, double height, int numberOfWindows, int numberOfDoorWays);

    double usableWallArea (int numberOfWindows, int numberOfDoorWays) const;
    double usableFloorArea () const;

    std::string Info () const;

    void canPlacePicture(Picture* p);
    void canPlaceVoluminousExhibit (VoluminousExhibit* v);

    void removePicture (Picture* p);
    void removeVoluminousExhibit (VoluminousExhibit* v);

private:
    double m_width, m_length, m_height;
    Windows m_windows;
    Doorway m_doorways;
    double m_usableWallArea, m_usableFloorArea;

};

#endif //ROOM_H