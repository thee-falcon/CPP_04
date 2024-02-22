/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 17:12:43 by omakran           #+#    #+#             */
/*   Updated: 2024/02/22 20:47:11 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) {
    std::cout << "Default Constructor: " << this->type << " is called!" << std::endl;
}

Dog::~Dog ( void ) {
    std::cout << "Destructor : " << this->type << " is called!" << std::endl;
}

Dog::Dog( const Dog& other) {
    std::cout << "Copy Constructor: " << this->type << " is called!" << std::endl;
    *this = other;
}

Dog& Dog::operator=( const Dog& other) {
    std::cout << "Assignement Operator: " << this->type << " is called!" << std::endl;
    if (this != &other) {
        this->type = other.type;
    }
    return (*this);
}

void    Dog::makeSound( void ) const {
    std::cout << "woof ruff ruff arf!" << std::endl;
}
