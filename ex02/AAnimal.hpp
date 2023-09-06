#pragma once
#include <iostream>

class AAnimal
{
protected:
	std::string type;

public:
	AAnimal(void);
	AAnimal(const AAnimal &src);
	AAnimal& operator=(const AAnimal &src);
	virtual ~AAnimal(void) = 0;

	std::string getType(void) const;
	virtual void makeSound(void) const = 0;
};
