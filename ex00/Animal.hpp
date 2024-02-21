/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 17:12:27 by omakran           #+#    #+#             */
/*   Updated: 2024/02/21 21:48:28 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
protected:
    // protected attribute.
    std::string type;
    
public:
    // constructor:
    Animal( void );
    // destructor:
    ~Animal( void );
    // copy constructor:
    Animal( const Animal& other);
    // assignement operator:
   Animal& operator=( const Animal& other );
   
    
    void    makeSound();
};

#endif