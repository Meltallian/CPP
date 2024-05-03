#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
	const Animal *schlag = new Dog;
	const Animal *schlong = new Cat;

	schlag->makeSound();
	schlong->makeSound();

	// running this line isn't allowed since Animal is an abstract class;
	// const Animal *schling = new Animal; 

	delete schlag;
	delete schlong;
	return 0;
}

// int main()
// {
// 	int	n = 5;
// 	const Animal *animalArray[n];
// 	for (int i = 0; i < n; i++)
// 	{
// 		if (i < n/2)
// 			animalArray[i] = new Dog;
// 		if (i >= n/2)
// 			animalArray[i] = new Cat;
// 	}

// 	animalArray[0]->makeSound();
// 	animalArray[n - 1]->makeSound();

// 	for (int i = 0; i < n; i++)
// 	{
// 		delete animalArray[i];
// 	}
// 	return 0;
// }