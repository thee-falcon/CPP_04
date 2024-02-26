/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 17:13:00 by omakran           #+#    #+#             */
/*   Updated: 2024/02/26 18:32:01 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) : type("WrongAnimal") {
    std::cout << "Default Constructor: " << this->type << " is Called!" << std::endl;
}

WrongAnimal::WrongAnimal( std::string type ) : type( type )
{
    std::cout << "Constructor Called: " << this->type  << std::endl;
}

WrongAnimal::~WrongAnimal ( void ) {
    std::cout << "Wrong Animal Destructor is Called!" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal& other) {
    std::cout << "Copy Constructor: " << this->type << " is Called!" << std::endl;
    *this = other;
}

WrongAnimal& WrongAnimal::operator=( const WrongAnimal& other) {
    std::cout << "Assignement Operator: " << this->type << " is Called!" << std::endl;
    if (this != &other) {
        this->type = other.type;
    }
    return (*this);
}

void    WrongAnimal::makeSound( void ) const {
    std::cout << "Wrong Animal makeSound Called!" << std::endl;
}

std::string    WrongAnimal::getType( void ) const
{
    return (this->type);
}