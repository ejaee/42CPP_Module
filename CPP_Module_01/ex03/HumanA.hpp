#ifndef HUMAN_HPP
# define HUMAN_HPP

#include "Weapon.hpp"

class HumanA {

    private:
        std::string m_name;
        Weapon& m_weapon;

    public:
        HumanA();
        HumanA(std::string name, Weapon &weapon);
        ~HumanA();

        void    attack();
        void    setType(std::string type);

};

#endif