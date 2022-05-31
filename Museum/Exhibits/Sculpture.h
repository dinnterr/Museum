#ifndef SCULPTURE_H
#define SCULPTURE_H

#include "VoluminousExhibit.h"

class Sculpture : public  VoluminousExhibit {
public:
    Sculpture(std::string author, std::string country, int year, double width, double length,
              double height, std::string type);
    Sculpture(std::string country, int year, double width, double length, double height, std::string type);

    std::string Info() const override;

private:
    std::string m_type;

};

#endif //SCULPTURE_H
