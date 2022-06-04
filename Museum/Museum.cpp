#include "Museum.h"

Museum::~Museum() {
    for (auto room: m_rooms){
        delete room;
    }
    for (auto exhibit: m_exhibits){
        delete exhibit;
    }
}

void Museum::addRoom(Room *room) {
    m_rooms.push_back(room);
}

void Museum::removeRoom(int pos) {
    if (pos > m_rooms.size() || pos <= 0)
    {
        throw std::invalid_argument("Wrong number.");
    }
    else
    {
        m_rooms.erase(m_rooms.begin() + pos - 1);
    }
}

void Museum::addExhibit(Exhibit *exhibit) {
    m_exhibits.push_back(exhibit);
}

/*void Museum::removeExhibit(Exhibit* exhibit) {
    if (find(m_exhibits.begin(), m_exhibits.end(), exhibit->getName()) > m_rooms.size() || find(m_exhibits.begin(), m_exhibits.end(), exhibit->getName()) <= 0)
    {
        throw std::invalid_argument("Exhibit does not exist.");
    }
    else
    {
        m_exhibits.erase(m_exhibits.begin() + find(m_exhibits.begin(), m_exhibits.end(), exhibit->getName()) - 1);
    }
}*/


void Museum::printExhibits() const
{
    int i = 1;
    for (const auto& exhibit : m_exhibits)
    {
        std::cout << i++ << ' ' << std::setprecision(2) << exhibit->Info() << std::endl;
    }
}

template <class InputIterator, class UnaryPredicate>
InputIterator find_if (InputIterator begin, InputIterator end, UnaryPredicate pred) ;

void Museum::place(Exhibit *exhibit, Room *room) {
    exhibit->place(room);

    std::string sname = exhibit->getName();
    auto it = std::find_if(m_exhibits.begin(), m_exhibits.end(), [&sname](const Exhibit& obj){return obj.getName() == sname;});

    if (it != m_exhibits.end()){
        m_exhibits.push_back(exhibit);
    }
}

void Museum::place(Picture *picture, Room *room) {
    picture->place(room);
}

void Museum::place(VoluminousExhibit *v_exhibit, Room *room) {
    v_exhibit->place(room);
}

void Museum::place(Sculpture *sculpture, Room *room) {
    sculpture->place(room);
}

void Museum::place(Technics *technics, Room *room) {
    technics->place(room);
}

void Museum::place(HouseholdItem *householditem, Room *room) {
    householditem->place(room);
}
