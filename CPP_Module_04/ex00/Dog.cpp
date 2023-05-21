#include "Dog.hpp"

/* ================= Orthodox Canonical Class Form ================= */

Dog::Dog() : Animal() {
    m_type = "Dog";
    std::cout << BLUE << "[ " << m_type << " ] " << RESET
                << GREEN << "Default constructed" << RESET << std::endl;   
}

Dog::Dog(const Dog& dog) {
    m_type = dog.getType();
    std::cout << BLUE << "[ " << m_type << " ] " << RESET
                << "Copy constructed" << std::endl;   
}

Dog&    Dog::operator=(const Dog& dog) {
    if (this != &dog)
        m_type = dog.getType();
    std::cout << BLUE << "[ " << m_type << " ] " << RESET
                << "Assigned" << std::endl;
    return *this;
}

Dog::~Dog() {
    std::cout << BLUE << "[ " << m_type << " ] " << RESET
                << RED << "Destructed" << RESET << std::endl;   
}

/* ================================================================= */

void    Dog::makeSound() const{
    std::cout << BLUE << "[ " << m_type << " ] " << RESET
                << YELLOW << "Woof! Woof" << RESET << std::endl;
}