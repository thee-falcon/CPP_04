/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 17:13:07 by omakran           #+#    #+#             */
/*   Updated: 2024/02/22 18:52:13 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

# include <iostream>

class WrongAnimal
{
protected:
    // protected attribute.
    std::string type;
    
public:
    /* ####################################
    #          Orthodox Style             #
    # ################################### */

    // constructor:
    WrongAnimal( void );
    WrongAnimal( std::string type );
    // destructor:
    ~WrongAnimal( void );
    // copy constructor:
    WrongAnimal( const WrongAnimal& other);
    // assignement operator:
   WrongAnimal& operator=( const WrongAnimal& other );

    void        makeSound( void ) const;
    std::string getType( void ) const;
};

#endif