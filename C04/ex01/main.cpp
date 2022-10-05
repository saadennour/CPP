#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    Animal **meta = new Animal*[20];

    for(int i = 0; i < 10; i++)
        meta[i] = new Dog();
	for (int i = 10 ; i < 20; i++)
		meta[i] = new Cat();
	for (int i = 0; i < 20; i++){
		std::cout << meta[i]->getType() << std::endl;
		delete meta[i];
	}
    return 0;
}