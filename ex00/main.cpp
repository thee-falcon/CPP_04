/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 17:12:54 by omakran           #+#    #+#             */
/*   Updated: 2024/02/23 17:04:00 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    // use a pointer or reference to the base class type to call the overridden function in a derived class.
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound(); // output the dog sound!
    meta->makeSound();

    // deallocation
    delete  meta;
    delete  j;
    delete  i;

    std::cout << "\n################################### More Tests ####################################\n" << std::endl;

    const WrongAnimal* k = new WrongAnimal();
    const WrongAnimal* l = new WrongCat();
    std::cout << k->getType() << " " << std::endl;
    std::cout << l->getType() << " " << std::endl;
    k->makeSound();
    l->makeSound();

    // deallocation
    delete  k;
    delete  l;
    
    
    return (0);
}