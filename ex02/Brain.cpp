/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 17:08:52 by omakran           #+#    #+#             */
/*   Updated: 2024/02/24 16:51:44 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

// constructor:
Brain::Brain( void ) {
    std::cout << "Brain Constructor is Called!" << std::endl;
}

// destructor:
Brain::~Brain( void ) {
    std::cout << "Brain Destructor is Called!" << std::endl;
}

// copy constructor:
Brain::Brain(const Brain& other)
{
    // Copy the ideas from 'other' to this Brain
    for (int i = 0; i < 100; ++i)
    {
        _ideas[i] = other._ideas[i];
    }
    std::cout << "Copy Constructor is called!" << std::endl;
}

// assignment operator:
Brain& Brain::operator=(const Brain& other) {
    if (this != &other)
    {
        // Copy the ideas from 'other' to this Brain
        for (int i = 0; i < 100; ++i) {
            this->_ideas[i] = other._ideas[i];
        }
    }
    return (*this);
}