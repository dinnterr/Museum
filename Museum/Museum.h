#ifndef MUSEUM_H
#define MUSEUM_H

#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>
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
    void removeRoom (Room* room);

    void addExhibit (Exhibit* exhibit);
    void removeExhibit (Exhibit* exhibit);

    void place(Exhibit* exhibit, Room* room);
    void place(Picture* picture, Room* room);
    void place(VoluminousExhibit* v_exhibit, Room* room);
    void place (Sculpture* sculpture, Room* room);
    void place (Technics* technics, Room* room);
    void place (HouseholdItem* householditem, Room* room);

    void printExhibits() const;

private:
    std::vector <Room*> m_rooms;
    std::vector <Exhibit*> m_exhibits;

};

#endif //MUSEUM_H