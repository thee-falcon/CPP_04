/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 17:13:19 by omakran           #+#    #+#             */
/*   Updated: 2024/02/22 18:47:54 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void ) {
    std::cout << "Default Constructor: " << this->type << " is called!" << std::endl;
}

WrongCat::~WrongCat ( void ) {
    std::cout << "Default Constructor: " << this->type << " is called!" << std::endl;
}

WrongCat::WrongCat( const WrongCat& other) {
    std::cout << "Copy Constructor: " << this->type << " is called!" << std::endl;
    *this = other;
}

WrongCat& WrongCat::operator=( const WrongCat& other) {
    std::cout << "Assignement Operator: " << this->type << " is called!" << std::endl;
    if (this != &other) {
        this->type = other.type;
    }
    return (*this);
}

void    WrongCat::makeSound( void ) const {
    std::cout << "Meow!" << std::endl;
}