#include "Animal.hpp"

Animal::Animal(void){
	type = "null";
	std::cout << "Animal default constructor !" << std::endl;
}

Animal::Animal(const Animal &src){
	*this = src;
	std::cout << "Animal Copy constructor !" << std::endl;
}

Animal& Animal::operator=(const Animal &src){
	type = src.type;
	return (*this);
}

Animal::~Animal(void){
	std::cout << "Animal destructor !" << std::endl;
}

std::string Animal::getType(void) const{
	return (type);
}

void Animal::makeSound(void) const{
	std::cout << "* insert animal type sound *" << std::endl;
}
