#ifndef TECHNICS_H
#define TECHNICS_H

#include "VoluminousExhibit.h"

class Technics : public  VoluminousExhibit{
public:
    Technics(const std::string& author, const std::string& country, int year, double width,
             double length, double height, const std::string& material);
    Technics(const std::string& country, int year, double width, double length, double height, const std::string& material);
    std::string Info() const override;

private:
    std::string m_material;
};

#endif //TECHNICS_H
