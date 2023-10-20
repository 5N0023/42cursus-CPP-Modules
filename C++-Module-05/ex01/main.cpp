/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlektaib <mlektaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 14:51:05 by mlektaib          #+#    #+#             */
/*   Updated: 2023/10/19 14:51:06 by mlektaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
        try {
            Bureaucrat b("b", 10);
            Form f("f", 5, 5);
            std::cout << b;
            std::cout << f;
            b.signForm(f);
            std::cout << f;
            std::cout << b;
        }
        catch (const std::exception &e) {
            std::cout << e.what() << std::endl;
        }
}
            