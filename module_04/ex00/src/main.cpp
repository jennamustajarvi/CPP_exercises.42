/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42Porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 11:12:58 by jemustaj          #+#    #+#             */
/*   Updated: 2026/09/16 11:12:59 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"
#include "../include/Cat.hpp"
#include "../include/Dog.hpp"
#include "../include/WrongAnimal.hpp"
#include "../include/WrongCat.hpp"
#include <iostream>

int	main(void)
{
	std::cout << "\n";
	std::cout << ">>>>>>> SUBJECT EXAMPLE <<<<<<<" << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << "\n";

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << "\n";
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	std::cout << "\n";
	delete i;
	delete j;
	delete meta;
	std::cout << "\n";
	std::cout << "\n";
	
	std::cout << ">>>>>>> COPY ASSIGNMENT TEST <<<<<<<" << std::endl;
	const Animal* cat = new Cat();
	const Animal* dog = new Dog();
	const Animal* temp;
	std::cout << "\n";
	std::cout << "Should print cat's type as a cat.\nType: " << cat->getType() << std::endl;
	std::cout << "\n";
	temp = cat;
	cat = dog;
	std::cout << "Should print cat's type as a dog.\nType: " << cat->getType() << std::endl;
	std::cout << "\n";
	cat = temp;
	delete cat;
	delete dog;
	std::cout << "\n";
	std::cout << "\n";
	
	std::cout << ">>>>>>> WRONG ANIMAL TEST <<<<<<<" << std::endl;
	const WrongAnimal* wa = new WrongAnimal();
	const WrongAnimal* wc = new WrongCat();
	std::cout << "\n";

	std::cout << wa->getType() << " " << std::endl;
	std::cout << wc->getType() << " " << std::endl;
	std::cout << "\n";
	wa->makeSound();
	wc->makeSound(); //will not output the cat sound!
	std::cout << "\n";
	delete wa;
	delete wc; //might cause a memory leak becasue cat is never destructed
	std::cout << "\n";
	std::cout << "\n";

	return(0);
}
