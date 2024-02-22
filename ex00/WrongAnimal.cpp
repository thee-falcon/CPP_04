/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 17:13:00 by omakran           #+#    #+#             */
/*   Updated: 2024/02/22 18:52:45 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) : type("Wrong Animal") {
    std::cout << "Default Constructor: " << this->type << " is called!" << std::endl;
}

WrongAnimal::WrongAnimal( std::string type ) : type( type )
{
    std::cout << "WrongAnimal " << this->type << " Constructor called!" << std::endl;
}

WrongAnimal::~WrongAnimal ( void ) {
    std::cout << "Default Constructor: " << this->type << " is called!" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal& other) {
    std::cout << "Copy Constructor: " << this->type << " is called!" << std::endl;
    *this = other;
}

WrongAnimal& WrongAnimal::operator=( const WrongAnimal& other) {
    std::cout << "Assignement Operator: " << this->type << " is called!" << std::endl;
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