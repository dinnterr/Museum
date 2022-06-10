#include <iostream>
#include <stdexcept>
#include <exception>
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
        cout << "Now make your choice what do you want to do (enter number):" << endl;
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
        if (n == 4 && museum.isEmptyRooms()){
            cout << "You cannot place an exhibit. There are no rooms in the museum. First add at least one." << endl << endl;
            continue;
        }
        if (n == 5 && museum.isEmptyExhibits()){
            cout << "There are no exhibits in museum. First add at least one." << endl << endl;
            continue;
        }
        if (n == 5 && museum.isEmptyRooms()){
            cout << "There are no rooms in the museum." << endl << endl;
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
                int number_of_doorways, number_of_windows;
                double r_width, r_length, r_height;
                cout << "Add number of doorways." << endl;
                cin >> number_of_doorways;
                cout << endl;
                cout << "Add number of windows." << endl;
                cin >> number_of_windows;
                cout << endl;
                cout << "Enter width of room (in m)." << endl;
                cin >> r_width;
                cout << endl;
                cout << "Enter length of room (in m)." << endl;
                cin >> r_length;
                cout << endl;
                cout << "Enter height of room (in m)." << endl;
                cin >> r_height;
                room = new Room(r_width, r_length, r_height, number_of_windows, number_of_doorways);
                museum.addRoom(room);
                cout << endl;
            }
            catch (const exception& ex){
                cerr << ex.what() << endl;
            }
        }
        if (n == 2){ //Remove room
            cout << "You have chosen \"Remove room\"." << endl << endl;
            cout << "Rooms of museum" << endl;
            museum.printRooms();
            cout << endl;
            cout << "Choose room that you want to delete (enter a number)." << endl;
            int d;
            cin >> d;
            while (d <= 0 || d > museum.getRoomsAmount()){
                cout << "Wrong number. Try again." << endl;
                cin >> d;
            }
            cout << endl;
            museum.removeRoom(d);
            cout << "Now museum has such rooms:" << endl;
            museum.printRooms();
            cout << endl;
        }
        if (n == 3) { //Add exhibit
            try {
                cout << "You have chosen \"Add exhibit\"." << endl << endl;
                cout << "Is the author known?" << endl;
                cout << "1. Yes." << endl;
                cout << "2. No." << endl;
                int n2;
                cin >> n2;
                while (n2 < 1 || n2 > 2) {
                    cout << "Wrong number. Try again." << endl;
                    cin >> n2;
                }
                cout << endl;
                switch (n2) {
                    case 1: //With author
                    {
                        cout << "Now select an exhibit type." << endl;
                        cout << "1. Simple exhibit (Author, name, country, year)." << endl;
                        cout << "2. Picture." << endl;
                        cout << "3. Voluminous exhibit (generalized)." << endl;
                        cout << "4. Sculpture." << endl;
                        cout << "5. Technics." << endl;
                        cout << "6. Household item." << endl;
                        int n3;
                        cin >> n3;
                        while (n3 < 1 || n3 > 6) {
                            cout << "Wrong number. Try again." << endl;
                            cin >> n3;
                        }
                        cout << endl;
                        switch (n3) {
                            case 1: //simple exhibit
                            {
                                string author, name, country;
                                int year;
                                cout << "Enter the name of the exhibit's author." << endl;
                                getline(cin, author);
                                cout << endl;
                                cout << "Enter exhibit name." << endl;
                                getline(cin, name);
                                cout << endl;
                                cout << "Indicate the country of origin of the exhibit." << endl;
                                getline(cin, country);
                                cout << endl;
                                cout << "Enter the year the exhibit was created." << endl;
                                cin >> year;
                                cout << endl;
                                exhibit = new Exhibit(author, name, country, year);
                                museum.addExhibit(exhibit);
                                cout << endl;
                                break;
                            }
                            case 2: //Picture
                            {
                                string author, name, country;
                                int year;
                                double p_width, p_height;
                                cout << "Enter the name of the artist." << endl;
                                getline (cin, author);
                                cout << endl;
                                cout << "Enter picture name." << endl;
                                getline (cin, name);
                                cout << endl;
                                cout << "Indicate the country of origin of the picture." << endl;
                                getline (cin, country);
                                cout << endl;
                                cout << "Enter the year the picture was created." << endl;
                                cin >> year;
                                cout << endl;
                                cout << "Enter the width of the picture." << endl;
                                cin >> p_width;
                                cout << endl;
                                cout << "Enter the height of the picture." << endl;
                                cin >> p_height;
                                exhibit = new Picture(author, name, country, year, p_width, p_height);
                                museum.addExhibit(exhibit);
                                cout << endl;
                                break;
                            }
                            case 3: //Voluminous exhibit
                            {
                                string author, name, country;
                                int year;
                                double v_width, v_height, v_length;
                                cout << "Enter the name of the voluminous exhibit's author." << endl;
                                getline (cin, author);
                                cout << endl;
                                cout << "Enter voluminous exhibit name." << endl;
                                getline (cin, name);
                                cout << endl;
                                cout << "Indicate the country of origin of the voluminous exhibit." << endl;
                                getline (cin, country);
                                cout << endl;
                                cout << "Enter the year the voluminous exhibit was created." << endl;
                                cin >> year;
                                cout << endl;
                                cout << "Enter the width of the voluminous exhibit." << endl;
                                cin >> v_width;
                                cout << endl;
                                cout << "Enter the length of the voluminous exhibit." << endl;
                                cin >> v_length;
                                cout << endl;
                                cout << "Enter the height of the voluminous exhibit." << endl;
                                cin >> v_height;
                                cout << endl;
                                exhibit = new VoluminousExhibit(author, name, country, year, v_width, v_length,
                                                                v_height);
                                museum.addExhibit(exhibit);
                                cout << endl;
                                break;
                            }
                            case 4: //Sculpture
                            {
                                string author, name, country;
                                int year, type;
                                double s_width, s_height, s_length;
                                cout << "Enter the name of the sculpture's author." << endl;
                                getline (cin, author);
                                cout << endl;
                                cout << "Enter sculpture name." << endl;
                                getline (cin, name);
                                cout << endl;
                                cout << "Indicate the country of origin of the sculpture." << endl;
                                getline (cin, country);
                                cout << endl;
                                cout << "Enter the year the sculpture was created." << endl;
                                cin >> year;
                                cout << endl;
                                cout << "Enter the width of the sculpture." << endl;
                                cin >> s_width;
                                cout << endl;
                                cout << "Enter the length of the sculpture." << endl;
                                cin >> s_length;
                                cout << endl;
                                cout << "Enter the height of the sculpture." << endl;
                                cin >> s_height;
                                cout << endl;
                                cout << "Choose the type of sculpture:" << endl;
                                cout << "1. Bust." << endl;
                                cout << "2. Sculpture of small forms." << endl;
                                cout << "3. Sculptural group." << endl;
                                cout << "4. Statuette." << endl;
                                cout << "5. Statue." << endl;
                                cout << "6. Torso." << endl;
                                cin >> type;
                                while (type <= 0 || type > 6) {
                                    cout << "Wrong number. Try again." << endl;
                                    cin >> type;
                                }
                                exhibit = new Sculpture(author, name, country, year, s_width, s_length, s_height, type);
                                museum.addExhibit(exhibit);
                                cout << endl;
                                break;
                            }
                            case 5: //Technics
                            {
                                string author, name, country;
                                int year, material;
                                double t_width, t_height, t_length;
                                cout << "Enter the name of the technic's author." << endl;
                                getline (cin, author);
                                cout << endl;
                                cout << "Enter technic name." << endl;
                                getline (cin, name);
                                cout << endl;
                                cout << "Indicate the country of origin of the technic." << endl;
                                getline (cin, country);
                                cout << endl;
                                cout << "Enter the year the technic was created." << endl;
                                cin >> year;
                                cout << endl;
                                cout << "Enter the width of the technic." << endl;
                                cin >> t_width;
                                cout << endl;
                                cout << "Enter the length of the technic." << endl;
                                cin >> t_length;
                                cout << endl;
                                cout << "Enter the height of the technic." << endl;
                                cin >> t_height;
                                cout << endl;
                                cout << "Choose the material of technic:" << endl;
                                cout << "1. Stone." << endl;
                                cout << "2. Iron." << endl;
                                cout << "3. Aluminium." << endl;
                                cout << "4. Plastic." << endl;
                                cout << "5. Alloy." << endl;
                                cout << "6. Rubber." << endl;
                                cin >> material;
                                while (material <= 0 || material > 6) {
                                    cout << "Wrong number. Try again." << endl;
                                    cin >> material;
                                }
                                exhibit = new Technics(author, name, country, year, t_width, t_length, t_height,
                                                       material);
                                museum.addExhibit(exhibit);
                                cout << endl;
                                break;
                            }
                            case 6: //Household item
                            {
                                string author, name, country;
                                int year, possibilityOfUsing;
                                double h_width, h_height, h_length;
                                cout << "Enter the name of the household item's author." << endl;
                                getline (cin, author);
                                cout << endl;
                                cout << "Enter household item name." << endl;
                                getline (cin, name);
                                cout << endl;
                                cout << "Indicate the country of origin of the household item." << endl;
                                getline (cin, country);
                                cout << endl;
                                cout << "Enter the year the household item was created." << endl;
                                cin >> year;
                                cout << endl;
                                cout << "Enter the width of the household item." << endl;
                                cin >> h_width;
                                cout << endl;
                                cout << "Enter the length of the household item." << endl;
                                cin >> h_length;
                                cout << endl;
                                cout << "Enter the height of the household item." << endl;
                                cin >> h_height;
                                cout << endl;
                                cout << "Choose the possibility of using the household item:" << endl;
                                cout << "1. Usable item." << endl;
                                cout << "2. Not usable item." << endl;
                                cin >> possibilityOfUsing;
                                while (possibilityOfUsing <= 0 || possibilityOfUsing > 2) {
                                    cout << "Wrong number. Try again." << endl;
                                    cin >> possibilityOfUsing;
                                }
                                exhibit = new HouseholdItem(author, name, country, year, h_width, h_length, h_height, possibilityOfUsing);
                                museum.addExhibit(exhibit);
                                cout << endl;
                                break;
                            }
                        }
                        break;
                    }
                    case 2: //Unknown author
                    {
                        cout << "Now select an exhibit type." << endl;
                        cout << "1. Simple exhibit (Name, country, year)." << endl;
                        cout << "2. Picture." << endl;
                        cout << "3. Voluminous exhibit (generalized)." << endl;
                        cout << "4. Sculpture." << endl;
                        cout << "5. Technics." << endl;
                        cout << "6. Household item." << endl;
                        int n3;
                        cin >> n3;
                        while (n3 < 1 || n3 > 6) {
                            cout << "Wrong number. Try again." << endl;
                            cin >> n3;
                        }
                        cout << endl;
                        switch (n3) {
                            case 1: //simple exhibit
                            {
                                string name, country;
                                int year;
                                cout << "Enter exhibit name." << endl;
                                getline (cin, name);
                                cout << endl;
                                cout << "Indicate the country of origin of the exhibit." << endl;
                                getline (cin, country);
                                cout << endl;
                                cout << "Enter the year the exhibit was created." << endl;
                                cin >> year;
                                cout << endl;
                                exhibit = new Exhibit(name, country, year);
                                museum.addExhibit(exhibit);
                                cout << endl;
                                break;
                            }
                            case 2: //Picture
                            {
                                string name, country;
                                int year;
                                double p_width, p_height;
                                cout << "Enter picture name." << endl;
                                getline (cin, name);
                                cout << endl;
                                cout << "Indicate the country of origin of the picture." << endl;
                                getline (cin, country);
                                cout << endl;
                                cout << "Enter the year the picture was created." << endl;
                                cin >> year;
                                cout << endl;
                                cout << "Enter the width of the picture." << endl;
                                cin >> p_width;
                                cout << endl;
                                cout << "Enter the height of the picture." << endl;
                                cin >> p_height;
                                exhibit = new Picture(name, country, year, p_width, p_height);
                                museum.addExhibit(exhibit);
                                cout << endl;
                                break;
                            }
                            case 3: //Voluminous exhibit
                            {
                                string name, country;
                                int year;
                                double v_width, v_height, v_length;
                                cout << "Enter voluminous exhibit name." << endl;
                                getline (cin, name);
                                cout << endl;
                                cout << "Indicate the country of origin of the voluminous exhibit." << endl;
                                getline (cin, country);
                                cout << endl;
                                cout << "Enter the year the voluminous exhibit was created." << endl;
                                cin >> year;
                                cout << endl;
                                cout << "Enter the width of the voluminous exhibit." << endl;
                                cin >> v_width;
                                cout << endl;
                                cout << "Enter the length of the voluminous exhibit." << endl;
                                cin >> v_length;
                                cout << endl;
                                cout << "Enter the height of the voluminous exhibit." << endl;
                                cin >> v_height;
                                cout << endl;
                                exhibit = new VoluminousExhibit(name, country, year, v_width, v_length, v_height);
                                museum.addExhibit(exhibit);
                                cout << endl;
                                break;
                            }
                            case 4: //Sculpture
                            {
                                string name, country;
                                int year, type;
                                double s_width, s_height, s_length;
                                cout << "Enter sculpture name." << endl;
                                getline (cin, name);
                                cout << endl;
                                cout << "Indicate the country of origin of the sculpture." << endl;
                                getline (cin, country);
                                cout << endl;
                                cout << "Enter the year the sculpture was created." << endl;
                                cin >> year;
                                cout << endl;
                                cout << "Enter the width of the sculpture." << endl;
                                cin >> s_width;
                                cout << endl;
                                cout << "Enter the length of the sculpture." << endl;
                                cin >> s_length;
                                cout << endl;
                                cout << "Enter the height of the sculpture." << endl;
                                cin >> s_height;
                                cout << endl;
                                cout << "Choose the type of sculpture:" << endl;
                                cout << "1. Bust." << endl;
                                cout << "2. Sculpture of small forms." << endl;
                                cout << "3. Sculptural group." << endl;
                                cout << "4. Statuette." << endl;
                                cout << "5. Statue." << endl;
                                cout << "6. Torso." << endl;
                                cin >> type;
                                while (type <= 0 || type > 6) {
                                    cout << "Wrong number. Try again." << endl;
                                    cin >> type;
                                }
                                exhibit = new Sculpture(name, country, year, s_width, s_length, s_height, type);
                                museum.addExhibit(exhibit);
                                cout << endl;
                                break;
                            }
                            case 5: //Technics
                            {
                                string name, country;
                                int year, material;
                                double t_width, t_height, t_length;
                                cout << "Enter technic name." << endl;
                                getline (cin, name);
                                cout << endl;
                                cout << "Indicate the country of origin of the technic." << endl;
                                getline (cin, country);
                                cout << endl;
                                cout << "Enter the year the technic was created." << endl;
                                cin >> year;
                                cout << endl;
                                cout << "Enter the width of the technic." << endl;
                                cin >> t_width;
                                cout << endl;
                                cout << "Enter the length of the technic." << endl;
                                cin >> t_length;
                                cout << endl;
                                cout << "Enter the height of the technic." << endl;
                                cin >> t_height;
                                cout << endl;
                                cout << "Choose the material of technic:" << endl;
                                cout << "1. Stone." << endl;
                                cout << "2. Iron." << endl;
                                cout << "3. Aluminium." << endl;
                                cout << "4. Plastic." << endl;
                                cout << "5. Alloy." << endl;
                                cout << "6. Rubber." << endl;
                                cin >> material;
                                while (material <= 0 || material > 6) {
                                    cout << "Wrong number. Try again." << endl;
                                    cin >> material;
                                }
                                exhibit = new Technics(name, country, year, t_width, t_length, t_height, material);
                                museum.addExhibit(exhibit);
                                cout << endl;
                                break;
                            }
                            case 6: //Household item
                            {
                                string name, country;
                                int year, possibilityOfUsing;
                                double h_width, h_height, h_length;
                                cout << "Enter household item name." << endl;
                                getline (cin, name);
                                cout << endl;
                                cout << "Indicate the country of origin of the household item." << endl;
                                getline (cin, country);
                                cout << endl;
                                cout << "Enter the year the household item was created." << endl;
                                cin >> year;
                                cout << endl;
                                cout << "Enter the width of the household item." << endl;
                                cin >> h_width;
                                cout << endl;
                                cout << "Enter the length of the household item." << endl;
                                cin >> h_length;
                                cout << endl;
                                cout << "Enter the height of the household item." << endl;
                                cin >> h_height;
                                cout << endl;
                                cout << "Choose the possibility of using the household item:" << endl;
                                cout << "1. Usable item." << endl;
                                cout << "2. Not usable item." << endl;
                                cin >> possibilityOfUsing;
                                while (possibilityOfUsing <= 0 || possibilityOfUsing > 2) {
                                    cout << "Wrong number. Try again." << endl;
                                    cin >> possibilityOfUsing;
                                }
                                exhibit = new HouseholdItem(name, country, year, h_width, h_length, h_height, possibilityOfUsing);
                                museum.addExhibit(exhibit);
                                cout << endl;
                                break;
                            }
                        }
                        break;
                    }
                }
            }
            catch (const exception& ex){
                cerr << ex.what() << endl;
            }
        }
        if (n == 4){ //Place tne exhibit in the room
            cout << "You have chosen \"Place tne exhibit in the room\"." << endl << endl;
            cout << "Your museum has such exhibits:" << endl << endl;
            museum.printExhibits();
            cout << endl;
            cout << "Now select the exhibit you want to place (enter number)." << endl;
            int p;
            cin >> p;
            while (p <= 0 || p > museum.getExhibitsAmount()){
                cout << "Wrong number. Try again." << endl;
                cin >> p;
            }
            cout << endl;
            cout << "And such rooms:" << endl << endl;
            museum.printRooms();
            cout << "Now select the room in which you want to place exhibit." << endl;
            int p2;
            cin >> p2;
            while (p2 <= 0 || p2 > museum.getRoomsAmount()){
                cout << "Wrong number. Try again." << endl;
                cin >> p2;
            }
            try {
                museum.placeExhibit(museum.getExhibit(p), museum.getRoom(p2));
            }
            catch (const exception& ex){
                cerr << ex.what() << endl;
            }
            cout << endl;
        }
        if (n == 5){ //Remove exhibit from room
            cout << "You have chosen \"Remove exhibit from room\"." << endl << endl;
            cout << "There are exhibits of your museum:" << endl;
            museum.printExhibits();
            cout << endl;
            cout << "Make your choice (enter number)." << endl;
            int r;
            cin >> r;
            while (r <= 0 || r > museum.getExhibitsAmount()){
                cout << "Wrong number. Try again." << endl;
                cin >> r;
            }
            try {
                museum.removeExhibitFromRoom(museum.getExhibit(r));
            }
            catch (const exception& ex){
                cerr << ex.what() << endl;
            }
            cout << endl;
        }
        if (n == 6){ //Remove exhibit from museum
            cout << "You have chosen \"Remove exhibit from museum\"." << endl << endl;
            cout << "There are exhibits of your museum:" << endl;
            museum.printExhibits();
            cout << endl;
            cout << "Make your choice (enter number)." << endl;
            int r;
            cin >> r;
            while (r <= 0 || r > museum.getExhibitsAmount()){
                cout << "Wrong number. Try again." << endl;
                cin >> r;
            }
            museum.deleteExhibitFromMuseum(museum.getExhibit(r));
            cout << endl;
        }
        if(n == 7){ //Print exhibits
            cout << "Exhibits of your museum: " << endl;
            museum.printExhibits();
            cout << endl;
        }
        if(n == 8){ //Print rooms
            cout << "Rooms of your museum: " << endl;
            museum.printRooms();
            cout << endl;
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