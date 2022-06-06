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
    cout << "Press Enter to start!" << endl;
    cin.get();
    try {
        cout << "Create a first room of the museum." << endl;
        cout << "Add number of doorways." << endl;
        int number_of_doorways;
        cin >> number_of_doorways;
        cout << endl;
        cout << "Add number of windows." << endl;
        int number_of_windows;
        cin >> number_of_windows;
        cout << endl;
        double r_width, r_length, r_height;
        cout << "Enter width of room (in mm)." << endl;
        cin >> r_width;
        cout << endl;
        cout << "Enter length of room (in mm)." << endl;
        cin >> r_length;
        cout << endl;
        cout << "Enter height of room (in mm)." << endl;
        cin >> r_height;
        cout << endl;
        room = new Room(r_width, r_length, r_height, windows, doorways);
        museum.addRoom(room);
        cout << endl;
        cout << "Room created. What do you want to do next?" << endl;
        cout << "1. Add new room." << endl;
        cout << "2. Add exhibit." << endl;
        int n;
        cin >> n;
        cout << endl;
        switch (n) {
            case 1: //Add room
            {
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
                switch (n2) {
                    case 1: //Witn author
                    {
                        cout << "Okay. Now select an exhibit type." << endl;
                        cout << "1. Simple exhibit (Author, name, country, year)." << endl;
                        cout << "2. Picture." << endl;
                        cout << "3. Voluminous exhibit (generalized)." << endl;
                        cout << "4. Sculpture" << endl;
                        cout << "5. Technics." << endl;
                        cout << "6. Household item." << endl;
                        int n3;
                        cin >> n3;
                        cout << endl;
                        switch (n3) {
                            case 1: //simple exhibit
                            {
                                string author, name, country;
                                int year;
                                cout << "Enter the name of the exhibit's author" << endl;
                                cin >> author;
                                cout << endl;
                                cout << "Enter exhibit name." << endl;
                                cin >> name;
                                cout << endl;
                                cout << "Indicate the country of origin of the exhibit." << endl;
                                cin >> country;
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
                                cout << "Enter the name of the artist" << endl;
                                cin >> author;
                                cout << endl;
                                cout << "Enter picture name." << endl;
                                cin >> name;
                                cout << endl;
                                cout << "Indicate the country of origin of the picture." << endl;
                                cin >> country;
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
                                cin >> author;
                                cout << endl;
                                cout << "Enter voluminous exhibit name." << endl;
                                cin >> name;
                                cout << endl;
                                cout << "Indicate the country of origin of the voluminous exhibit." << endl;
                                cin >> country;
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
                                cin >> author;
                                cout << endl;
                                cout << "Enter sculpture name." << endl;
                                cin >> name;
                                cout << endl;
                                cout << "Indicate the country of origin of the sculpture." << endl;
                                cin >> country;
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
                                cin >> author;
                                cout << endl;
                                cout << "Enter technic name." << endl;
                                cin >> name;
                                cout << endl;
                                cout << "Indicate the country of origin of the technic." << endl;
                                cin >> country;
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
                                exhibit = new Technics(author, name, country, year, t_width, t_length, t_height,
                                                       material);
                                museum.addExhibit(exhibit);
                                cout << endl;
                                break;
                            }
                            case 6: //Household item
                            {
                                string author, name, country;
                                int year, posibilityOfUsing;
                                double h_width, h_height, h_length;
                                cout << "Enter the name of the household item's author." << endl;
                                cin >> author;
                                cout << endl;
                                cout << "Enter household item name." << endl;
                                cin >> name;
                                cout << endl;
                                cout << "Indicate the country of origin of the household item." << endl;
                                cin >> country;
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
                                cin >> posibilityOfUsing;
                                exhibit = new HouseholdItem(author, name, country, year, h_width, h_length, h_height,
                                                            posibilityOfUsing);
                                museum.addExhibit(exhibit);
                                cout << endl;
                                break;
                            }
                        }
                        break;
                    }
                    case 2: //Unknown author
                    {
                        cout << "Okay. Now select an exhibit type." << endl;
                        cout << "1. Simple exhibit (Name, country, year)." << endl;
                        cout << "2. Picture." << endl;
                        cout << "3. Voluminous exhibit (generalized)." << endl;
                        cout << "4. Sculpture" << endl;
                        cout << "5. Technics." << endl;
                        cout << "6. Household item." << endl;
                        int n3;
                        cin >> n3;
                        cout << endl;
                        switch (n3) {
                            case 1: //simple exhibit
                            {
                                string name, country;
                                int year;
                                cout << "Enter exhibit name." << endl;
                                cin >> name;
                                cout << endl;
                                cout << "Indicate the country of origin of the exhibit." << endl;
                                cin >> country;
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
                                cin >> name;
                                cout << endl;
                                cout << "Indicate the country of origin of the picture." << endl;
                                cin >> country;
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
                                cin >> name;
                                cout << endl;
                                cout << "Indicate the country of origin of the voluminous exhibit." << endl;
                                cin >> country;
                                cout << endl;
                                cout << "Enter the year the voluminous exhibit was created." << endl;
                                cin >> year;
                                cout << endl;
                                cout << "Enter the width of the voluminous exhibit." << endl;
                                cin >> v_width;
                                cout << endl;
                                cout << "Enter the length of the voluminous exhibit." << endl;
                                cin >> v_length;
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
                                cin >> name;
                                cout << endl;
                                cout << "Indicate the country of origin of the sculpture." << endl;
                                cin >> country;
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
                                cin >> name;
                                cout << endl;
                                cout << "Indicate the country of origin of the technic." << endl;
                                cin >> country;
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
                                cin >> name;
                                cout << endl;
                                cout << "Indicate the country of origin of the household item." << endl;
                                cin >> country;
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
                                exhibit = new HouseholdItem(name, country, year, h_width, h_length, h_height,
                                                            possibilityOfUsing);
                                museum.addExhibit(exhibit);
                                cout << endl;
                                break;
                            }
                        }
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
    return 0;
}