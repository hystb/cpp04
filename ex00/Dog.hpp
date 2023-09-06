#pragma once
#include "Animal.hpp"

class Dog : public Animal
{
public:
	Dog(void);
	Dog(const Dog &src);
	Dog& operator=(const Dog &src);
	~Dog(void);

	virtual void makeSound(void) const;
};
