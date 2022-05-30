#ifndef PICTURE_H
#define PICTURE_H

#include "Exhibit.h"

class Picture : public Exhibit {
public:
    Picture (std::string author, std::string country, int year, double width, double heigh);
    Picture (std::string country, int year, double width, double heigh);

    double getWidth () const {return m_width;}
    double getHeigth () const {return  m_height;}

    void setWidth (double width){m_width = width;}
    void setHeigth (double heigth){m_height = heigth;}

    std::string Info() const override;

private:
    double m_width, m_height;
};

#endif //PICTURE_H