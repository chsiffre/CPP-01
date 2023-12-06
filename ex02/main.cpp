/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 12:06:24 by charles           #+#    #+#             */
/*   Updated: 2023/12/06 12:10:11 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main ()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *str_ptr = &str;
    std::string &str_ref = str;

    std::cout << &str << ": " << str << std::endl;
    std::cout << str_ptr << ": " << *str_ptr << std::endl;
    std::cout << &str_ref << ": " << str_ref << std::endl;
    return 0;
}