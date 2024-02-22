/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 17:12:21 by omakran           #+#    #+#             */
/*   Updated: 2024/02/22 21:06:26 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ) : type("Animal") {
    std::cout << "Default Constructor: " << this->type << " is called!" << std::endl;
}

Animal::Animal( std::string type ) : type( type )
{
    std::cout << "Animal " << this->type << " Constructor called!" << std::endl;
}

Animal::~Animal( void ) {
    std::cout << "Destructor: " << this->type << " is called!" << std::endl;
}

Animal::Animal( const Animal& other) {
    std::cout << "Copy Constructor: " << this->type << " is called!" << std::endl;
    *this = other;
}

Animal& Animal::operator=( const Animal& other) {
    std::cout << "Assignement Operator: " << this->type << " is called!" << std::endl;
    if (this != &other) {
        this->type = other.type;
    }
    return (*this);
}

void    Animal::makeSound( void ) const {
    std::cout << "makeSound Called " << this->type << std::endl;
}

std::string Animal::getType( void ) const {
    return (this->type);
}