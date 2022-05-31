#ifndef SCULPTURE_H
#define SCULPTURE_H

#include "VoluminousExhibit.h"

class Sculpture : public  VoluminousExhibit {
public:
    Sculpture(const std::string& author, const std::string& country, int year, double width, double length,
              double height, const std::string& type);
    Sculpture(const std::string& country, int year, double width, double length, double height, const std::string& type);

    std::string Info() const override;

private:
    std::string m_type;
};

#endif //SCULPTURE_H
