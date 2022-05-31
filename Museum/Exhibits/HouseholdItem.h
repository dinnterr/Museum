#ifndef HOUSEHOLDITEM_H
#define HOUSEHOLDITEM_H

#include "VoluminousExhibit.h"

class HouseholdItem : public  VoluminousExhibit{
public:
    HouseholdItem(std::string author, std::string country, int year, double width, double length,
                  double height, bool posibilityOfUsing);
    HouseholdItem(std::string country, int year, double width, double length,
                  double height, bool posibilityOfUsing);
    std::string Info() const override;

private:
    bool m_posibilityOfUsing;
};

#endif //HOUSEHOLDITEM_H
