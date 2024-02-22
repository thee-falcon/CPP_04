/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 17:13:28 by omakran           #+#    #+#             */
/*   Updated: 2024/02/22 18:45:23 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WORONG_CAT
# define WORONG_CAT

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {

public:
    /* ####################################
    #          Orthodox Style             #
    # ################################### */

    // constructor:
    WrongCat( void );
    // destructor:
    ~WrongCat( void );
    // copy constructor:
    WrongCat( const WrongCat& other);
    // assignement operator:
   WrongCat& operator=( const WrongCat& other );

   void   makeSound( void ) const;
};

#endif
