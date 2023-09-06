#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain* _brain;
public:
	Cat(void);
	Cat(const Cat &src);
	Cat& operator=(const Cat &src);
	virtual ~Cat(void);
	
	virtual void makeSound(void) const;
	Brain* getBrain(void) const;
};
