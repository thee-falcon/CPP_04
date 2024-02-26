/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 17:12:21 by omakran           #+#    #+#             */
/*   Updated: 2024/02/26 16:33:08 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal( void ) : type("AAnimal") {
    std::cout << "Default Constructor: " << this->type << " is called!" << std::endl;
}

AAnimal::AAnimal( std::string type ) : type( type )
{
    std::cout << "AAnimal " << this->type << " Constructor called!" << std::endl;
}

AAnimal::~AAnimal( void ) {
    std::cout << "Destructor AAnimal is called!" << std::endl;
}

AAnimal::AAnimal( const AAnimal& other) {
    std::cout << "Copy Constructor: " << this->type << " is called!" << std::endl;
    *this = other;
}

AAnimal& AAnimal::operator=( const AAnimal& other) {
    std::cout << "Assignement Operator: " << this->type << " is called!" << std::endl;
    if (this != &other) {
        this->type = other.type;
    }
    return (*this);
}

std::string AAnimal::getType( void ) const {
    return (this->type);
}