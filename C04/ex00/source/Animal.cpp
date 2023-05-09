#include "../include/Animal.hpp"

// Constructors & Destructor
Animal::Animal( void ) {
    std::cout << "A new animal is born" << std::endl;
    this->_type = "No race";
}

Animal::Animal(std::string type) {
    std::cout << "A new animal is born" << std::endl;
    this->_type = type;
}

Animal::Animal(const Animal& other) {
    std::cout << "A new animal is cloned" << std::endl;
    *this = other;
}

Animal::~Animal ( void ) {
    std::cout << "The animal just died" << std::endl;
}

// Opeartor
Animal& Animal::operator=(const Animal& other) {
    std::cout << "A new animal is cloned" << std::endl;
    this->_type = other._type;
}

std::string const& getType( void ) {
    return (this->_type);
}

void    Animal::makeSound( void ) {
    std::cout << "The noise of some animal" << std::endl;
}