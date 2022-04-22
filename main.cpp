#include <iostream>
#include <string>
#include "Room.h"

/*class Exhibit{
private:
    std::string author;
    std::string country;
    int year;
public:

};*/

int main() {
    std::cout <<"Input room width, length, height and usable wall area:" <<std::endl;
    int width, length, height, usable_wall_area;
    std::cin >> width >> length >> height >> usable_wall_area;
    try
    {
        Room room(width, length, height, usable_wall_area);
        std::cout <<"You have created a room of size "
                  <<room.getWidth() << '*' << room.getLength() << '*'
                  <<room.getHeight() << " with " << room.getUsableWallArea()
                  << " usable wall area." << std::endl;
    }
    catch (const std::exception& ex)
    {
        std::cout <<"Cannot create a room!" <<std::endl;
    }

    return 0;
}
