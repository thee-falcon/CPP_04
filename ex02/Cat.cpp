/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 17:12:33 by omakran           #+#    #+#             */
/*   Updated: 2024/02/26 17:27:10 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/*
-try        : The try keyword starts a block of code where an exception might be thrown. It allows you to catch and handle exceptions.
-brain      : Pointer (which is a member of the class) is assigned the address of the newly allocated Brain object.
-catch      : Block that is executed if an exception of type std::bad_alloc (which is the standard exception type thrown by the new operator on allocation failure)
              is thrown within the corresponding try block.
std::endl   : If an exception is caught, this line outputs an error message to the standard error stream (std::cerr). It indicates that memory allocation for the Dog or Cat object's brain has failed.
e.what()    : Function provides a description of the exception.
*/

Cat::Cat( void ):  AAnimal("Cat") {
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
    this->_brain = new Brain();
    *this = other;
}

Cat& Cat::operator=( const Cat& other) {
    std::cout << "Assignement Operator: " << this->type << " is called!" << std::endl;
    if (this != &other) {
        this->type = other.type;
        // this->_brain is already allocated, we need to free it, to use it again, and Free the leaks.
        if (this->_brain)
            delete this->_brain;
        // adding the Deep Copy.
        this->_brain = new Brain(*other._brain);
    }
    return (*this);
}

void    Cat::makeSound( void ) const {
    std::cout << "Meeeeeooooooooowwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww!" << std::endl;
}