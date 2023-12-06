/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 10:56:16 by charles           #+#    #+#             */
/*   Updated: 2023/12/06 11:10:05 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main ()
{
    std::string name;
    
    std::cout << "Creating Zombie on stack" << std::endl;
    std::cout << "Enter a name : " << std::flush;
    std::cin >> name;
    Zombie zombie1(name);

    std::cout << "Creating Zombie on the heap" << std::endl;
    std::cout << "Enter a name : " << std::flush;
    std::cin >> name;
    Zombie *zombie2 = newZombie(name);
    zombie2->announce();
    delete zombie2;

    std::cout << "Calling randomChump()" << std::endl;
    randomChump("random");
    
    return 0;
}