#include "AAnimal.hpp"

AAnimal::AAnimal(void){
	type = "null";
	std::cout << "AAnimal default constructor !" << std::endl;
}

AAnimal::AAnimal(const AAnimal &src){
	*this = src;
	std::cout << "AAnimal Copy constructor !" << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal &src){
	type = src.type;
	return (*this);
}

AAnimal::~AAnimal(void){
	std::cout << "AAnimal destructor !" << std::endl;
}

std::string AAnimal::getType(void) const{
	return (type);
}

void AAnimal::makeSound(void) const{
	std::cout << "* insert AAnimal type sound *" << std::endl;
}
