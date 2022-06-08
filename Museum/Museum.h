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
    //void removeRoom (Room* room);

    void addExhibit (Exhibit* exhibit);
    void removeExhibitFromRoom (Exhibit* exhibit);
    void deleteExhibitFromMuseum (Exhibit* exhibit);
    void placeExhibit(Exhibit* exhibit, Room* room);

    void printExhibits() const;
    void printRooms () const;

    Room* getRoom (int pos) const;
    Exhibit* getExhibit (int pos) const;
    Exhibit* getExhibit (const std::string& name) const;
    Exhibit* getExhibit (Exhibit* exhibit) const;

    bool isOnlyOneRoom () const;
    bool isEmptyExhibits () const;
    bool isOneExhibitInRoom () const;
    bool isEmptyRooms () const;

    int getRoomsAmount () const {return m_rooms.size();}
    int getExhibitsAmount () const {return m_exhibits.size();}

private:
    std::vector <Room*> m_rooms;
    std::vector <Exhibit*> m_exhibits;

};

#endif //MUSEUM_H