/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlektaib <mlektaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 20:58:29 by mlektaib          #+#    #+#             */
/*   Updated: 2023/08/11 21:03:17 by mlektaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>


int main(int argc, char **argv)
{
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        for (int i = 1; i < argc; i++)
        {
            std::string stringarg(argv[i]);
            for (std::size_t j; j < stringarg.lenght(); j++)
                std::cout << (char)std::toupper(stringarg[j]);
        }
        std::cout << std::endl;
    }
    return (0);
}