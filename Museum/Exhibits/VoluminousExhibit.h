#ifndef VOLUMINOUSEXHIBIT_H
#define VOLUMINOUSEXHIBIT_H

#include "Exhibit.h"

class VoluminousExhibit : public Exhibit{
public:
    VoluminousExhibit(const std::string& author, const std::string& country, int year, double width, double length, double height);
    VoluminousExhibit(const std::string& country, int year, double width, double length, double height);

    void setWidth (double width){m_width = width;}
    void setLength (double length) {m_length = length;}
    void setHeigth (double height){m_height = height;}

    double Area () const;
    std::string Info() const override;

    void place(Room* room) override;

private:
    double m_width, m_length, m_height;
};

#endif //VOLUMINOUSEXHIBIT_H