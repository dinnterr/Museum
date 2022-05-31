#ifndef PICTURE_H
#define PICTURE_H

#include "Exhibit.h"

class Picture : public Exhibit {
public:
    Picture (const std::string& author, const std::string& country, int year, double width, double height);
    Picture (const std::string& country, int year, double width, double height);

    void setWidth (double width){m_width = width;}
    void setHeight (double height){m_height = height;}

    std::string Info() const override;

private:
    double m_width, m_height;
};

#endif //PICTURE_H
