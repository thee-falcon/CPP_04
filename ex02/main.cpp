/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 17:08:59 by omakran           #+#    #+#             */
/*   Updated: 2024/02/24 20:50:02 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    const AAnimal* j = new Dog();
    const AAnimal* i = new Cat();
    // AAnimal A;we can't create an instance of AAnimal because it's a absaract class

    delete j; // deallocate memorey
    delete i; // deallocate memorey

    const AAnimal* animals[4];
    animals[0] = new Dog();
    animals[1] = new Dog();
    animals[2] = new Cat();
    animals[3] = new Cat();

    for (int i = 0; i < 4; ++i)
    {
        animals[i]->makeSound();
        delete animals[i];
    }

    return (0);
}