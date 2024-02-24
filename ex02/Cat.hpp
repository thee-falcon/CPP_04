/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 17:12:38 by omakran           #+#    #+#             */
/*   Updated: 2024/02/24 19:36:24 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"

class Cat : public AAnimal {
    Brain*  _brain;
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