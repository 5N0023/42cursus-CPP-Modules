/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlektaib <mlektaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 14:49:12 by mlektaib          #+#    #+#             */
/*   Updated: 2023/10/22 13:20:39 by mlektaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"    
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
    try {
        
    Bureaucrat b("b", 1);
    Intern someRandomIntern;
    AForm* scf;
    scf = someRandomIntern.makeForm("shrubbery creaation", "target");
    std::cout << *scf << std::endl;
    b.signForm(*scf);
    b.executeForm(*scf);
    
    delete scf;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    
}