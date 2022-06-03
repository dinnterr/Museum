#ifndef HOUSEHOLDITEM_H
#define HOUSEHOLDITEM_H

#include "VoluminousExhibit.h"

class HouseholdItem : public  VoluminousExhibit{
public:
    HouseholdItem(const std::string& author, const std::string& name, const std::string& country, int year, double width, double length,
                  double height, bool posibilityOfUsing);
    HouseholdItem(const std::string& name, const std::string& country, int year, double width, double length,
                  double height, bool posibilityOfUsing);
    std::string Info() const override;

    void place(Room* room) override;

private:
    bool m_posibilityOfUsing;
};

#endif //HOUSEHOLDITEM_H
