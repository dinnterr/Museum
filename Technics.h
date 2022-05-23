#ifndef TECHNICS_H
#define TECHNICS_H

#include "VoluminousExhibit.h"

class Technics : public  VoluminousExhibit{
public:
    Technics(std::string country, int year, std::string author, double width, double length, double height);

    std::string Info() const override;
};

#endif //TECHNICS_H
