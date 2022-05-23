#ifndef VOLUMINOUSEXHIBIT_H
#define VOLUMINOUSEXHIBIT_H

#include "Exhibit.h"

class VoluminousExhibit : public Exhibit{
public:
    VoluminousExhibit(std::string country, int year, std::string author, double width, double length, double height);

    double getWidth () const {return m_width;}
    double  getLength () const {return m_length;}
    double getHeigth () const {return  m_height;}

    void setWidth (double width){m_width = width;}
    void setLength (double length) {m_length = length;}
    void setHeigth (double heigth){m_height = heigth;}

    std::string Info() const override;

private:
    double m_width, m_length, m_height;
};

#endif //VOLUMINOUSEXHIBIT_H