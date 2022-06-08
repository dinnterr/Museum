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
    cout << "Hello! You are using a museum creation program." << endl << endl;
    cout << "Press Enter to start!" << endl;
    cin.get();
    for (;;) {
        cout << "Now make your choice what do you want to do:" << endl;
        cout << "1. Add room." << endl;
        cout << "2. Remove room." << endl;
        cout << "3. Add exhibit." << endl;
        cout << "4. Place tne exhibit in the room." << endl;
        cout << "5. Remove exhibit from room." << endl;
        cout << "6. Remove exhibit from museum." << endl;
        cout << "7. Print exhibits." << endl;
        cout << "8. Print rooms." << endl;
        int n;
        cin >> n;
        while (n < 1 || n > 8){
            cout << "Wrong number. Try again." << endl;
            cin >> n;
        }
        cout << endl;
        if (n == 2 && museum.isEmptyRooms()){
            cout << "You cannot remove the room. There is no rooms in museum. First add at least one." << endl << endl;
            continue;
        }
        if (n == 2 && museum.isOnlyOneRoom()){
            cout << "You cannot remove the room. There is only one room in museum." << endl << endl;
            continue;
        }
        if (n == 4 && museum.isEmptyExhibits()){
            cout << "You cannot place an exhibit. There are no exhibits in the museum. First add at least one." << endl << endl;
            continue;
        }
        if (n == 5 && museum.isOneExhibitInRoom()){
            cout << "There are no exhibits in rooms. First place exhibits in rooms." << endl << endl;
            continue;
        }
        if (n == 6 && museum.isEmptyExhibits()){
            cout << "You cannot delete an exhibit from museum. There are no exhibits in the museum. First add at least one." << endl << endl;
            continue;
        }
        if (n == 7 && museum.isEmptyExhibits()){
            cout << "There are no exhibits in the museum. First add at least one." << endl << endl;
            continue;
        }
        if (n == 8 && museum.isEmptyRooms()){
            cout << "There are no rooms in the museum. First add at least one." << endl << endl;
            continue;
        }
        if (n == 1) { //Add room
           try {
                cout << "You have chosen \"Add room\"." << endl << endl;
                std::vector<Windows*> windows;
                std::vector<Doorway*> doorways;
                int number_of_doorways, number_of_windows;
                double r_width, r_length, r_height;
                cout << "Add number of doorways." << endl;
                cin >> number_of_doorways;
                cout << endl;
                cout << "Add number of windows." << endl;
                cin >> number_of_windows;
                cout << endl;
                cout << "Enter width of room (in mm)." << endl;
                cin >> r_width;
                cout << endl;
                cout << "Enter length of room (in mm)." << endl;
                cin >> r_length;
                cout << endl;
                cout << "Enter height of room (in mm)." << endl;
                cin >> r_height;
                Windows w(number_of_windows);
                windows.push_back(&w);
                Doorway d(number_of_doorways);
                doorways.push_back(&d);
                room = new Room(r_width, r_length, r_height, windows, doorways);
                museum.addRoom(room);
                cout << endl;
            }
            catch (const exception& ex){
                cerr << ex.what() << endl;
            }
        }
        if (n == 2){

        }






        cout << "Do you want to exit the program or continue the selection?" << endl;
        cout << "0. Exit." << endl;
        cout << "1. Back to selection." << endl;
        int e;
        cin >> e;
        while (e < 0 || e > 1){
            cout << "Wrong number. Try again." << endl;
            cin >> e;
        }
        cout << endl;
        if (e == 0){
            cout << "You have chosen to exit. Are you sure?" << endl;
            cout << "1. Yes." << endl;
            cout << "2. No." << endl;
            int e2;
            cin >> e2;
            while (e2 < 1 || e2 > 2){
                cout << "Wrong number. Try again." << endl;
                cin >> e2;
            }
            if(e2 == 1){
                room = nullptr;
                exhibit = nullptr;
                return  0;
            }
            if (e2 == 2){
                cout << endl;
                continue;
            }
        }
        if(e == 1){
            continue;
        }
    }
}