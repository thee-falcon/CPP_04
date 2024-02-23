/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 17:08:59 by omakran           #+#    #+#             */
/*   Updated: 2024/02/23 17:39:50 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"
#include "dog.hpp"
#include "cat.hpp"

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    delete j; // deallocate memorey
    delete i; // deallocate memorey

    const Animal* animals[4];
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