/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 17:12:38 by omakran           #+#    #+#             */
/*   Updated: 2024/02/22 17:15:03 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{

public:
    /* ####################################
    #          Orthodox Style             #
    # ################################### */

    // constructor:
    Cat( void );
    // destructor:
    ~Cat( void );
    // copy constructor:
    Cat( const Cat& other);
    // assignement operator:
   Cat& operator=( const Cat& other );

   void   makeSound( void ) const;
};


#endif