/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlektaib <mlektaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 14:50:50 by mlektaib          #+#    #+#             */
/*   Updated: 2023/10/19 14:50:51 by mlektaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Bureaucrat.hpp"
#include "AForm.hpp"    
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    try {
        Bureaucrat b("b", 1);
        ShrubberyCreationForm f("f");
        b.signForm(f);
        b.executeForm(f);
        RobotomyRequestForm r("r");
        b.signForm(r);
        for (int i = 0; i < 5; i++)
            b.executeForm(r);
        PresidentialPardonForm p("p");
        b.signForm(p);
        b.executeForm(p);
    }
    catch (const std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}