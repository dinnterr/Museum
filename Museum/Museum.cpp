#include "Museum.h"

Museum::~Museum() {
    for (auto exhibit: m_exhibits){
        delete exhibit;
    }
    for (auto room: m_rooms){
        delete room;
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

void Museum::removeExhibitFromRoom(Exhibit *exhibit) {
    exhibit->removeFromRoom(exhibit->getRoom());
}

void Museum::deleteExhibitFromMuseum(Exhibit* exhibit) {
    removeExhibitFromRoom(exhibit);
    auto it = std::find(m_exhibits.begin(), m_exhibits.end(), exhibit);
    if (it != m_exhibits.end()) {
        m_exhibits.erase(it);
    }
}

void Museum::placeExhibit(Exhibit *exhibit, Room *room) {
    exhibit->place(room);
}

void Museum::printExhibits() const{
    int i = 1;
    for (const auto& exhibit : m_exhibits)
    {
        std::cout << i++ << ") " << std::setprecision(2) << exhibit->Info() << std::endl;
    }
}

void Museum::printRooms() const {
    int i = 1;
    for (const auto& room : m_rooms)
    {
        std::cout << i++ << ") " << std::setprecision(2) << room->Info() << std::endl;
    }
}

Room * Museum::getRoom(int pos) const {
    return m_rooms[pos-1];
}

Exhibit * Museum::getExhibit(int pos) const {
    return m_exhibits[pos-1];
}

bool Museum::isOnlyOneRoom() const {
    return m_rooms.size() == 1;
}

bool Museum::isEmptyExhibits() const {
    return  m_exhibits.empty();
}

bool Museum::isEmptyRooms() const {
    return  m_rooms.empty();
}
