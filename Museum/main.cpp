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
        if (n == 1) {

        }
        if (n == 2 && museum.isOnlyOneRoom()){
            cout << "You cannot remove the room. There is only one room in museum." << endl;
            cout << "Choose which room you want to delete (the room number):" << endl;
            continue;
        }
        if (n == 3){

        }
        if (n == 4 && museum.isEmptyExhibits()){
            cout << "You cannot place an exhibit. There are no exhibits in the museum. First add at least one." << endl;
            continue;
        }
        if (n == 5 && museum.isOneExhibitInRoom()){
            cout << "There are no exhibits in rooms. First place exhibits in rooms." << endl;
            continue;
        }
        if (n == 6 && museum.isEmptyExhibits()){
            cout << "You cannot delete an exhibit from museum. There are no exhibits in the museum. First add at least one." << endl;
            continue;
        }
        if (n == 7 && museum.isEmptyExhibits()){
            cout << "There are no exhibits in the museum. First add at least one." << endl;
            continue;
        }
        if (n == 8 && museum.isEmptyRooms()){
            cout << "There are no rooms in the museum. First add at least one." << endl;
            continue;
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
        if (e == 0){
            cout << "You have chosen to exit. Bye!" << endl;
            return 0;
        }
        if(e == 1){
            continue;
        }
    }
    return 0;
}