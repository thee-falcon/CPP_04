/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 17:12:33 by omakran           #+#    #+#             */
/*   Updated: 2024/02/22 21:06:58 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ):  Animal("Cat") {
    std::cout << "Default Constructor: " << this->type << " is called!" << std::endl;
}

Cat::~Cat ( void ) {
    std::cout << "Destructor: " << this->type << " is called!" << std::endl;
}

Cat::Cat( const Cat& other) {
    std::cout << "Copy Constructor: " << this->type << " is called!" << std::endl;
    *this = other;
}

Cat& Cat::operator=( const Cat& other) {
    std::cout << "Assignement Operator: " << this->type << " is called!" << std::endl;
    if (this != &other) {
        this->type = other.type;
    }
    return (*this);
}

void    Cat::makeSound( void ) const {
    std::cout << "Meeeeeooooooooowwww!" << std::endl;
}