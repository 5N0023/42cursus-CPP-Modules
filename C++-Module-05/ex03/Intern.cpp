/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlektaib <mlektaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 14:50:12 by mlektaib          #+#    #+#             */
/*   Updated: 2023/10/19 14:50:14 by mlektaib         ###   ########.fr       */
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

    if (formName == "robotomy request")
        form = new RobotomyRequestForm(target);
    else if (formName == "presidential pardon")
        form = new PresidentialPardonForm(target);
    else if (formName == "shrubbery creation")
        form = new ShrubberyCreationForm(target);
    else
        throw Intern::UnknownFormException();
    std::cout << "Intern creates " << formName << std::endl;
    return (form);
}