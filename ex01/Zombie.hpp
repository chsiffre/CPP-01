/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 10:56:21 by charles           #+#    #+#             */
/*   Updated: 2023/12/06 12:04:39 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie {
    
    private :
        std::string _name;

    public :
        Zombie();
        ~Zombie();
        void announce();
        Zombie* zombieHorde( int N, std::string name );
        void    setName(std::string name);
        
};

        Zombie* newZombie(std::string name);
        Zombie* zombieHorde( int N, std::string name );

#endif