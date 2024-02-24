/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 17:12:33 by omakran           #+#    #+#             */
/*   Updated: 2024/02/24 18:57:44 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ):  Animal("Cat") {
    std::cout << "Constructor: " << this->type << " is called!" << std::endl;
    try {
        this->_brain = new Brain();
    }
    catch (const std::bad_alloc& e) {
        std::cerr << "Failed to allocate memory for Dog's brain: " << e.what() << std::endl;
    }
}

Cat::~Cat ( void ) {
    std::cout << "Destructor: " << this->type << " is called!" << std::endl;
    delete  this->_brain;
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