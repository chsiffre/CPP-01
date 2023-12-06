/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 10:56:21 by charles           #+#    #+#             */
/*   Updated: 2023/12/06 11:11:43 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie {
    
    private :
        std::string _name;

    public :
        Zombie(std::string name);
        ~Zombie();
        void announce();
        Zombie* newZombie(std::string name);
        void randomChump(std::string name);
        
};

        Zombie* newZombie(std::string name);
        void randomChump(std::string name);

#endif