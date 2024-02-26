/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 17:12:27 by omakran           #+#    #+#             */
/*   Updated: 2024/02/26 17:28:34 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>
# include "Brain.hpp"

/*
- An abstract a class that cannot be instantiated on its own and is meant to serve as a base class for other classes.
- Abstract classes are designed to be inherited by derived classes, and they often contain one or more pure virtual functions.

=>  Cannot be Instantiated: You cannot create an object of an abstract class. It is meant to serve as a blueprint for other classes.
=>  May Have Abstract Methods: An abstract class can have pure virtual functions (abstract methods) that are declared with the virtual keyword and have no implementation in the abstract class.
    These pure virtual functions must be implemented by any concrete subclass.
=> 
*/

//abstract class
class AAnimal
{
protected:
    // protected attribute.
    std::string type;
    
public:
    /* ####################################
    #          Orthodox Style             #
    # ################################### */

    // constructor:
    AAnimal( void );
    AAnimal( std::string type );
    // destructor:
    /*
    virtual destructor: it ensures that the destructors of both the base and derived classes are called correctly
    when deleting an object through a pointer to the base class.
    Without the virtual keyword in the base class destructor, only the base class destructor would be called,
    leading to incomplete cleanup in the case of polymorphic objects.
    */
    virtual ~AAnimal( void );
    // copy constructor:
    AAnimal( const AAnimal& other);
    // assignement operator:
   AAnimal& operator=( const AAnimal& other );
   
   // virtual, it allows derived classes to override that function with their own implementation.
   // it allows you to use a pointer or reference to the base class type to call the overridden function in a derived class.
    virtual void    makeSound( void ) const = 0; //pure virtual function
    //we call a class have only pure virtual functions INTERFACE
    
    // Used const in the getType function declaration to indicate that it doesn't modify the object.
    std::string     getType( void ) const;
};

#endif