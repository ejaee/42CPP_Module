#include "Bureaucrat.hpp"

int main() {

    try {
        Bureaucrat basic;
        std::cout << basic;

    } catch (const std::exception& e) {
        std::cout << e.what();
    }

    std::cout << std::endl;

    try {
        Bureaucrat use("User", 100);
        std::cout << use;

    } catch (const std::exception& e) {
        std::cout << e.what();
    }

    std::cout << std::endl;

    try {
        Bureaucrat over("Over_user", 0);
        std::cout << over;

    } catch (const std::exception& e) {
        std::cout << RED << e.what() << RESET;
    }

    std::cout << std::endl;

    try {
        Bureaucrat under("Under_user", 151);
        std::cout << under;

    } catch (const std::exception& e) {
        std::cout << RED << e.what() << RESET;
    }

}