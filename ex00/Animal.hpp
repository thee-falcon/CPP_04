/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 17:12:27 by omakran           #+#    #+#             */
/*   Updated: 2024/02/26 16:12:41 by omakran          ###   ########.fr       */
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
    /* ####################################
    #          Orthodox Style             #
    # ################################### */

    // constructor:
    Animal( void );
    Animal( std::string type );
    // destructor:
    /*
        virtual destructor: it ensures that the destructors of both the base and derived classes are called correctly
        when deleting an object through a pointer to the base class.
        Without the virtual keyword in the base class destructor, only the base class destructor would be called,
        leading to incomplete cleanup in the case of polymorphic objects.
    */
    virtual ~Animal( void );
    // copy constructor:
    Animal( const Animal& other);
    // assignement operator:
   Animal& operator=( const Animal& other );
   
   // virtual, it allows derived classes to override that function with their own implementation.
   // it allows you to use a pointer or reference to the base class type to call the overridden function in a derived class.
    virtual void    makeSound( void ) const;
    
    // Used const in the getType function declaration to indicate that it doesn't modify the object.
    std::string     getType( void ) const;
};

#endif