#include "Room.h"

    Room::Room(double myWidth, double myLength, double myHeight, double myUsable_wall_area){
        if(myLength*myHeight < myUsable_wall_area){
            throw std::invalid_argument("The total area of the walls is less than the usable area of the walls.");
        }
        width = myWidth;
        length = myLength;
        height = myHeight;
        usable_wall_area = myUsable_wall_area;
    }

