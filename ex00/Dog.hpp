/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 17:12:48 by omakran           #+#    #+#             */
/*   Updated: 2024/02/22 18:24:52 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal {

public:
    /* ####################################
    #          Orthodox Style             #
    # ################################### */

    // constructor:
    Dog( void );
    // destructor:
    ~Dog( void );
    // copy constructor:
    Dog( const Dog& other);
    // assignement operator:
   Dog& operator=( const Dog& other );

   void   makeSound( void ) const;
};

#endif