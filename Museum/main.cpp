#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>
#include <exception>
#include <cstdlib>
#include "Museum.h"
#include "Rooms/Room.h"
#include "Exhibits/Exhibit.h"
#include "Exhibits/Picture.h"
#include "Exhibits/VoluminousExhibit.h"
#include "Exhibits/Sculpture.h"
#include "Exhibits/Technics.h"
#include "Exhibits/HouseholdItem.h"

using namespace std;

int main() {
    Museum museum;
    Room* room = nullptr;
    Exhibit* exhibit = nullptr;
    std::vector <Windows> windows;
    std::vector <Doorway> doorways;
    cout << "Create a room of museum." << endl;
    cout << "1. Add number of doorways." << endl;
    int number_of_doorways;
    cin >> number_of_doorways;
    cout << "2. Add number of windows." << endl;
    int number_of_windows;
    cin >> number_of_windows;
    double width, length, height;
    cout << "3. Enter width of room." << endl;
    cin >> width;
    cout << "4. Enter length of room." << endl;
    cin >> length;
    cout << "5. Enter height of room." << endl;
    cin >> height;
    room = new Room(width,length,height,windows,doorways);
    museum.addRoom(room);

    cout << "What do you want to do next?" << endl;
    cout << "1. Add new room" << endl;
    cout << "2. Add exhibit(-s)" << endl;
    int n;
    cin >> n;
    switch (n) {
        case 1: //Add room
        {
            cout << "1. Add number of doorways." << endl;
            cin >> number_of_doorways;
            cout << "2. Add number of windows." << endl;
            cin >> number_of_windows;
            cout << "3. Enter width of room." << endl;
            cin >> width;
            cout << "4. Enter length of room." << endl;
            cin >> length;
            cout << "5. Enter height of room." << endl;
            cin >> height;
            room = new Room(width, length, height, windows, doorways);
            museum.addRoom(room);
            break;
        }
        case 2: //Add exhibit
        {

        }
    }

    return 0;
}