#ifndef TECHNICS_H
#define TECHNICS_H

#include "VoluminousExhibit.h"

class Technics : public  VoluminousExhibit{
public:
    Technics(std::string author, std::string country, int year, double width, double length, double height);
};

#endif //TECHNICS_H
