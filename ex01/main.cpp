/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 10:56:16 by charles           #+#    #+#             */
/*   Updated: 2023/12/06 12:03:37 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main ()
{
    int N = 6;
    Zombie *zombi = zombieHorde(N, "zombi");

    for (int i = 0; i < N; i++)
        zombi[i].announce();
    
    delete [] zombi;

    return 0;
}