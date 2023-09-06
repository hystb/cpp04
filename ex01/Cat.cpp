#include "Cat.hpp"

Cat::Cat(void) : Animal(){
	type = "Cat";
	_brain = new Brain();
	std::cout << "Cat default constructor !" << std::endl;
}

Cat::Cat(const Cat &src) : Animal(src){
	*this = src;
	std::cout << "Cat copy constructor !" << std::endl;
}

Cat& Cat::operator=(const Cat &src){
	_brain = new Brain(*(src._brain));
	type = src.type;
	return (*this);
}

Cat::~Cat(void){
	delete _brain;
	std::cout << "Cat destructor !" << std::endl;
}

void Cat::makeSound(void) const{
	std::cout << "Meow, meow, meow..." << std::endl;
}

Brain* Cat::getBrain(void) const{
	return (_brain);
}
