#include "Cat.hpp"

/* ================= Orthodox Canonical Class Form ================= */

Cat::Cat() : Animal() {
    m_type = "Cat";
    std::cout << BLUE << "[ " << m_type << " ] " << RESET
                << GREEN << "Default constructed" << RESET << std::endl;   
}

Cat::Cat(const Cat& cat) : Animal() {
    m_type = cat.getType();
    std::cout << BLUE << "[ " << m_type << " ] " << RESET
                << "Copy constructed" << std::endl;   
}

Cat&    Cat::operator=(const Cat& cat) {
    if (this != &cat)
        m_type = cat.getType();
    std::cout << BLUE << "[ " << m_type << " ] " << RESET
                << "Assigned" << std::endl;
    return *this;
}

Cat::~Cat() {
    std::cout << BLUE << "[ " << m_type << " ] " << RESET
                << RED << "Destructed" << RESET << std::endl;   
}

/* ================================================================= */

void    Cat::makeSound() const{
    std::cout << BLUE << "[ " << m_type << " ] " << RESET
                << YELLOW << "meow! meow!" << RESET << std::endl;
}