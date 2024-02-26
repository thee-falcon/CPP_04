/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 17:12:43 by omakran           #+#    #+#             */
/*   Updated: 2024/02/26 17:40:47 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) : Animal("Dog") {
    std::cout << "Constructor: " << this->type << " is Called!" << std::endl;
}

Dog::~Dog ( void ) {
    std::cout << "Destructor : " << this->type << " is Called!" << std::endl;
}

Dog::Dog( const Dog& other) {
    std::cout << "Copy Constructor: " << this->type << " is Called!" << std::endl;
    *this = other;
}

Dog& Dog::operator=( const Dog& other) {
    std::cout << "Assignement Operator: " << this->type << " is Called!" << std::endl;
    if (this != &other) {
        this->type = other.type;
    }
    return (*this);
}

void    Dog::makeSound( void ) const {
    std::cout << "woof ruff ruff arf!" << std::endl;
}
