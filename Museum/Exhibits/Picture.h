#ifndef PICTURE_H
#define PICTURE_H

#include "Exhibit.h"

class Picture : public Exhibit {
public:
    Picture (const std::string& author, const std::string& name, const std::string& country, int year, double width, double height);
    Picture (const std::string& name, const std::string& country, int year, double width, double height);

    std::string Info() const override;

    void place(Room* room) override;

private:
    double m_width, m_height;
};

#endif //PICTURE_H
