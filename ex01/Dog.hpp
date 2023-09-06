#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain* _brain;
public:
	Dog(void);
	Dog(const Dog &src);
	Dog& operator=(const Dog &src);
	~Dog(void);

	virtual void makeSound(void) const;
	Brain* getBrain(void) const;
};
