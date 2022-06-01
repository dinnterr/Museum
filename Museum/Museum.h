#ifndef MUSEUM_H
#define MUSEUM_H

#include <iostream>
#include <vector>
#include <iomanip>
#include "Rooms/Room.h"
#include "Rooms/Windows.h"
#include "Rooms/Doorway.h"
#include "Exhibits/Exhibit.h"
#include "Exhibits/Picture.h"
#include "Exhibits/VoluminousExhibit.h"
#include "Exhibits/Sculpture.h"
#include "Exhibits/HouseholdItem.h"
#include "Exhibits/Technics.h"

class Museum {
public:
    Museum() = default;
    ~Museum();

    void addRoom (Room* room);
    void removeRoom (int pos);

    void addExhibit (Exhibit* exhibit);
    void removeExhibit (int pos);


    void printExhibits() const;
    void placeExhibit (Exhibit* exhibit) const;


private:
    std::vector <Room*> m_rooms;
    std::vector <Exhibit*> m_exhibits;

};

#endif //MUSEUM_H