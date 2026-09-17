/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42Porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 11:31:42 by jemustaj          #+#    #+#             */
/*   Updated: 2026/09/16 11:31:43 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"
#include "../include/Cat.hpp"
#include "../include/Dog.hpp"
#include "../include/Brain.hpp"
#include <iostream>

int    main(void)
{
    std::cout << "\n";

    std::cout << ">>>>>>> SUBJECT TEST <<<<<<<" << std::endl;

    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << "\n";

    delete j;//should not create a leak
    delete i;
    std::cout << "\n";
    std::cout << "\n";

    std::cout << ">>>>>>> ANIMAL ARRAY TEST <<<<<<<" << std::endl;

    const int a = 4;
    Animal* animals[a];
    std::cout << "\n";

    for (int k = 0; k < a / 2; k++)
        animals[k] = new Cat;
    std::cout << "\n";

    for (int k = a / 2; k < a; k++)
        animals[k] = new Dog;
    std::cout << "\n";

    for (int k = 0; k < a; k++)
        animals[k]->makeSound();
    std::cout << "\n";

    for (int k = 0; k < a; k++)
        delete animals[k];
    std::cout << "\n";
    std::cout << "\n";

    std::cout << ">>>>>>> COPY TEST CONSTRUCTOR <<<<<<<" << std::endl;

    Dog dog;
    dog.getBrain()->setIdeas(0, "never bite cats again");

    Dog copy_dog(dog);
    std::cout << "\n";

    std::cout << "dog idea: " << dog.getBrain()->getIdeas(0) << std::endl;
    std::cout << "copy_dog idea: " << copy_dog.getBrain()->getIdeas(0) << std::endl;
    std::cout << "\n";

    copy_dog.getBrain()->setIdeas(0, "I will not copy your idea");
    std::cout << "\n";

    std::cout << "dog brain address: " << dog.getBrain() << std::endl;
    std::cout << "copy_dog brain address: " << copy_dog.getBrain() << std::endl;
    std::cout << "\n";

    std::cout << "dog idea: " << dog.getBrain()->getIdeas(0) << std::endl;
    std::cout << "copy_dog idea: " << copy_dog.getBrain()->getIdeas(0) << std::endl;
    std::cout << "\n";
    std::cout << "\n";

    std::cout << ">>>>>>> COPY TEST ASSIGNMENT <<<<<<<" << std::endl;

    Cat cat;
    Cat assign_cat;
    std::cout << "\n";

    cat.getBrain()->setIdeas(0, "I will not scratch dogs");
    assign_cat.getBrain()->setIdeas(0, "I will not scratch dogs if they behave");
    std::cout << "\n";

    std::cout << "cat brain address: " << cat.getBrain() << std::endl;
    std::cout << "assign_cat brain address: " << assign_cat.getBrain() << std::endl;
    std::cout << "\n";

    std::cout << "cat idea: " << cat.getBrain()->getIdeas(0) << std::endl;
    std::cout << "assign_cat idea: " << assign_cat.getBrain()->getIdeas(0) << std::endl;
    std::cout << "\n";

    assign_cat = cat;
    std::cout << "\n";

    std::cout << "cat idea: " << cat.getBrain()->getIdeas(0) << std::endl;
    std::cout << "assign_cat idea: " << assign_cat.getBrain()->getIdeas(0) << std::endl;
    std::cout << "\n";
    std::cout << "\n";

    /*std::cout << ">>>>>>> TEST THAT ANIMAL IS ABSTRACT <<<<<<<" << std::endl;
    Animal abstract_animal;
    std::cout << "\n";*/
    return (0);
}
