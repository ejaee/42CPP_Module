#include "Weapon.hpp"

Weapon::Weapon() {}

Weapon::Weapon(std::string const type) {
    m_type = type;
}

Weapon::~Weapon() {
    std::cout << m_type << " is destroy" << std::endl;
}

const std::string &Weapon::getType() const{
    return m_type;
}

void        Weapon::setType(std::string const type) {
    m_type = type;
}