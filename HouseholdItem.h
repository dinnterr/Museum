#ifndef HOUSEHOLDITEM_H
#define HOUSEHOLDITEM_H

#include "VoluminousExhibit.h"

class HouseholdItem : public  VoluminousExhibit{
public:
    HouseholdItem(std::string author, std::string country, int year, double width, double length, double height);
    HouseholdItem(std::string country, int year, double width, double length, double height);
    std::string Info() const override;
};

#endif //HOUSEHOLDITEM_H
