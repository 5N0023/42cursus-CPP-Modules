/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlektaib <mlektaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 14:50:12 by mlektaib          #+#    #+#             */
/*   Updated: 2023/10/22 13:19:55 by mlektaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::~Intern()
{
}

Intern::Intern(const Intern &src)
{
    *this = src;
}

void Intern::operator=(const Intern &src)
{
    (void)src;
}

const char *Intern::UnknownFormException::what(void) const throw()
{
    return ("Unknown Form");
}

AForm *Intern::makeForm(std::string formName, std::string target)
{
    AForm *form;
    std::string forms[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};
    if(std::find(forms, forms + 3, formName) == forms + 3)
        throw UnknownFormException();
    switch (formName[0])
    {
    case 'r':
        form = new RobotomyRequestForm(target);
        break;
    case 'p':
        form = new PresidentialPardonForm(target);
        break;
    case 's':
        form = new ShrubberyCreationForm(target);
        break;
    default:
        throw UnknownFormException();
        break;
    }
    std::cout << "Intern creates " << formName << std::endl;
    return (form);
}