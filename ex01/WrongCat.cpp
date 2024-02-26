/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 17:13:19 by omakran           #+#    #+#             */
/*   Updated: 2024/02/26 18:19:13 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void ) : WrongAnimal("WrongCat") {
    std::cout << "Constructor: " << this->type << " is Called!" << std::endl;
}

WrongCat::~WrongCat ( void ) {
    std::cout << "Destructor: " << this->type << " is Called!" << std::endl;
}

WrongCat::WrongCat( const WrongCat& other) {
    std::cout << "Copy Constructor: " << this->type << " is Called!" << std::endl;
    *this = other;
}

WrongCat& WrongCat::operator=( const WrongCat& other) {
    std::cout << "Assignement Operator: " << this->type << " is Called!" << std::endl;
    if (this != &other) {
        this->type = other.type;
    }
    return (*this);
}

void    WrongCat::makeSound( void ) const {
    std::cout << "Meow!" << std::endl;
}