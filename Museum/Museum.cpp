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

void Museum::removeRoom(Room *room) {
    auto it = std::find(m_rooms.begin(), m_rooms.end(), room);
    if (it != m_rooms.end()) {
        m_rooms.erase(it);
    }
}

void Museum::addExhibit(Exhibit *exhibit) {
    m_exhibits.push_back(exhibit);
}

void Museum::removeExhibit(Exhibit* exhibit) {
    auto it = std::find(m_exhibits.begin(), m_exhibits.end(), exhibit);
    if (it != m_exhibits.end()) {
        m_exhibits.erase(it);
    }
}

void Museum::printExhibits() const
{
    int i = 1;
    for (const auto& exhibit : m_exhibits)
    {
        std::cout << i++ << ' ' << std::setprecision(2) << exhibit->Info() << std::endl;
    }
}

void Museum::place(Exhibit *exhibit, Room *room) {
    exhibit->place(room);
    auto it = std::find(m_exhibits.begin(), m_exhibits.end(), exhibit);
    if (it == m_exhibits.end()) {
        m_exhibits.push_back(exhibit);
    }
}

void Museum::place(Picture *picture, Room *room) {
    picture->place(room);
    auto it = std::find(m_exhibits.begin(), m_exhibits.end(), picture);
    if (it == m_exhibits.end()) {
        m_exhibits.push_back(picture);
    }
}

void Museum::place(VoluminousExhibit *v_exhibit, Room *room) {
    v_exhibit->place(room);
    auto it = std::find(m_exhibits.begin(), m_exhibits.end(), v_exhibit);
    if (it == m_exhibits.end()) {
        m_exhibits.push_back(v_exhibit);
    }
}

void Museum::place(Sculpture *sculpture, Room *room) {
    sculpture->place(room);
    auto it = std::find(m_exhibits.begin(), m_exhibits.end(), sculpture);
    if (it == m_exhibits.end()) {
        m_exhibits.push_back(sculpture);
    }
}

void Museum::place(Technics *technics, Room *room) {
    technics->place(room);
    auto it = std::find(m_exhibits.begin(), m_exhibits.end(), technics);
    if (it == m_exhibits.end()) {
        m_exhibits.push_back(technics);
    }
}

void Museum::place(HouseholdItem *householdItem, Room *room) {
    householdItem->place(room);
    auto it = std::find(m_exhibits.begin(), m_exhibits.end(), householdItem);
    if (it == m_exhibits.end()) {
        m_exhibits.push_back(householdItem);
    }
}
