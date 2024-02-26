/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 17:12:21 by omakran           #+#    #+#             */
/*   Updated: 2024/02/26 17:40:24 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ) : type("Animal") {
    std::cout << "Default Constructor: " << this->type << " is Called!" << std::endl;
}

Animal::Animal( std::string type ) : type( type )
{
    std::cout << "Animal " << this->type << " Constructor Called!" << std::endl;
}

Animal::~Animal( void ) {
    std::cout << "Destructor Animal is Called!" << std::endl;
}

Animal::Animal( const Animal& other) {
    std::cout << "Copy Constructor: " << this->type << " is Called!" << std::endl;
    *this = other;
}

Animal& Animal::operator=( const Animal& other) {
    std::cout << "Assignement Operator: " << this->type << " is Called!" << std::endl;
    if (this != &other) {
        this->type = other.type;
    }
    return (*this);
}

void    Animal::makeSound( void ) const {
    std::cout << "makeSound Animal Called " << this->type << std::endl;
}

std::string Animal::getType( void ) const {
    return (this->type);
}