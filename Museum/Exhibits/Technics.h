#ifndef TECHNICS_H
#define TECHNICS_H

#include "VoluminousExhibit.h"

class Technics : public  VoluminousExhibit{
public:
    Technics(std::string author, std::string country, int year, double width, double length, double height, std::string material);
    Technics(std::string country, int year, double width, double length, double height, std::string material);
    std::string Info() const override;

private:
    std::string m_material;
};

#endif //TECHNICS_H
