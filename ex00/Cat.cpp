#include "Cat.hpp"

Cat::Cat(void) : Animal(){
	type = "Cat";
	std::cout << "Cat default constructor !" << std::endl;
}

Cat::Cat(const Cat &src) : Animal(src){
	std::cout << "Cat copy constructor !" << std::endl;
	*this = src;
}

Cat& Cat::operator=(const Cat &src){
	type = src.type;
	return (*this);
}

Cat::~Cat(void){
	std::cout << "Cat destructor !" << std::endl;
}

void Cat::makeSound(void) const{
	std::cout << "Meow, meow, meow..." << std::endl;
}
