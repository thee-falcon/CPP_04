/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 17:08:56 by omakran           #+#    #+#             */
/*   Updated: 2024/02/23 17:17:30 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
private:
    std::string _ideas[100];
public:
    /* ####################################
    #          Orthodox Style             #
    # ################################### */

    // constructor:
    Brain( void );
    // destructor:
    ~Brain( void );
    // copy constructor:
    Brain( const Brain& other);
    // assignement operator:
   Brain& operator=( const Brain& other );
};

#endif