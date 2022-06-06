#ifndef TECHNICS_H
#define TECHNICS_H

#include "VoluminousExhibit.h"

enum class Material {
    stone = 1, //������
    iron,      //������
    aluminum,  //�����
    plastic,   //����⨪
    alloy,      //ᯫ��
    rubber      //१���
};

class Technics : public  VoluminousExhibit{
public:
    Technics(const std::string& author, const std::string& name, const std::string& country, int year, double width,
             double length, double height, int material);
    Technics(const std::string& name, const std::string& country, int year, double width, double length, double height, int material);
    std::string Info() const override;

    void place(Room* room) override;

private:
    std::string m_material;
};

#endif //TECHNICS_H
