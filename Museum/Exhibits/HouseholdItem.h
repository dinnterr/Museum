#ifndef HOUSEHOLDITEM_H
#define HOUSEHOLDITEM_H

#include "VoluminousExhibit.h"

class HouseholdItem : public  VoluminousExhibit{
public:
    HouseholdItem(const std::string& author, const std::string& name, const std::string& country, int year, double width, double length,
                  double height, int possibilityOfUsing);
    HouseholdItem(const std::string& name, const std::string& country, int year, double width, double length,
                  double height, int possibilityOfUsing);

    std::string Info() const override;

    void place(Room* room) override;

private:
    std::string m_possibilityOfUsing;
};

#endif //HOUSEHOLDITEM_H
