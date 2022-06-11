#ifndef VOLUMINOUSEXHIBIT_H
#define VOLUMINOUSEXHIBIT_H

#include "Exhibit.h"

class VoluminousExhibit : public Exhibit{
public:
    VoluminousExhibit(const std::string& author, const std::string& name, const std::string& country, int year, double width, double length, double height);
    VoluminousExhibit(const std::string& name, const std::string& country, int year, double width, double length, double height);

    std::string Info() const override;

    double getHeight () const {return m_height;}
    double area() const;

    void place(Room* room) override
    void removeFromRoom (Room* room) override;

private:
    double m_width, m_length, m_height;
};

#endif //VOLUMINOUSEXHIBIT_H