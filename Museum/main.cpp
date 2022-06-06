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
    cout << "Hello! You are using a museum creation program." << endl << endl;
    cout << "Create a first room of the museum." << endl;
    cout << "1. Add number of doorways." << endl;
    int number_of_doorways;
    cin >> number_of_doorways;
    cout << "2. Add number of windows." << endl;
    int number_of_windows;
    cin >> number_of_windows;
    double r_width, r_length, r_height;
    cout << "3. Enter width of room." << endl;
    cin >> r_width;
    cout << "4. Enter length of room." << endl;
    cin >> r_length;
    cout << "5. Enter height of room." << endl;
    cin >> r_height;
    room = new Room(r_width,r_length,r_height,windows,doorways);
    museum.addRoom(room);
    cout << endl;
    cout << "What do you want to do next?" << endl;
    cout << "1. Add new room." << endl;
    cout << "2. Add exhibit." << endl;
    int n;
    cin >> n;
    cout << endl;
    switch (n) {
        case 1: //Add room
        {
            cout << "1. Add number of doorways." << endl;
            cin >> number_of_doorways;
            cout << "2. Add number of windows." << endl;
            cin >> number_of_windows;
            cout << "3. Enter width of room (in mm)." << endl;
            cin >> r_width;
            cout << "4. Enter length of room (in mm)." << endl;
            cin >> r_length;
            cout << "5. Enter height of room (in mm)." << endl;
            cin >> r_height;
            room = new Room(r_width, r_length, r_height, windows, doorways);
            museum.addRoom(room);
            cout << endl;
            break;
        }
        case 2: //Add exhibit
        {
            cout << "Is the author known?" << endl;
            cout << "1. Yes." << endl;
            cout << "2. No." << endl;
            int n2;
            cin >> n2;
            cout << endl;
            switch (n2){
                case 1: //Witn author
                {
                    cout << "Okay. Now select an exhibit type." << endl;
                    cout << "1. Simple exhibit (Author (if there is), name, country, year)." << endl;
                    cout << "2. Picture." << endl;
                    cout << "3. Voluminous exhibit (generalized)." << endl;
                    cout << "4. Sculpture" << endl;
                    cout << "5. Technics." << endl;
                    cout << "6. Household item." << endl;
                    cout << endl;
                    int n3;
                    cin >> n3;
                    cout << endl;
                    switch (n3) {
                        case 1: //simple exhibit
                        {
                            string author, name, country;
                            int year;
                            cout << "Enter author name." << endl;
                            cin >> author;
                            cout << "Enter exhibit name." << endl;
                            cin >> name;
                            cout << "Indicate the country of origin of the exhibit." << endl;
                            cin >> country;
                            cout << "Enter the year the exhibit was created." << endl;
                            cin >> year;
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
                            cout << "Enter author name." << endl;
                            cin >> author;
                            cout << "Enter exhibit name." << endl;
                            cin >> name;
                            cout << "Indicate the country of origin of the exhibit." << endl;
                            cin >> country;
                            cout << "Enter the year the exhibit was created." << endl;
                            cin >> year;
                            cout << "Enter the width of the picture" << endl;
                            cin >> p_width;
                            cout << "Enter the height of the picture." << endl;
                            cin >> p_height;
                            exhibit = new Picture(author, name, country, year, p_width, p_height);
                            museum.addExhibit(exhibit);
                            cout << endl;
                            break;
                        }
                        case 3: //Voluminous exhibit
                        {

                        }
                        case 4: //Sculpture
                        {

                        }
                        case 5: //Technics
                        {

                        }
                        case 6: //Household item
                        {

                        }
                    }
                }
                case 2: //Unknown author
                {
                    string name, country, sculpture_type, technics_material, posibilityOfUsing_householdItem;
                    int year;
                    double e_length, e_width, e_height;
                    cout << "Okay. Select an exhibit type." << endl;
                    cout << "1. Simple exhibit (Author (if there is), name, country, year)." << endl;
                    cout << "2. Picture." << endl;
                    cout << "3. Voluminous exhibit (generalized)." << endl;
                    cout << "4. Sculpture" << endl;
                    cout << "5. Technics." << endl;
                    cout << "6. Household item." << endl;
                    cout << endl;
                    int n3;
                    cin >> n3;
                    cout << endl;
                    switch (n3) {
                        case 1:
                        {

                        }
                        case 2:
                        {

                        }
                        case 3:
                        {

                        }
                        case 4:
                        {

                        }
                        case 5:
                        {

                        }
                        case 6:
                        {

                        }
                    }
                    break;
                }
            }
            break;
        }
    }
    cout << "end" << endl;
    return 0;
}