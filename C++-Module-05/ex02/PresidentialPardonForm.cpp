/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlektaib <mlektaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 14:50:47 by mlektaib          #+#    #+#             */
/*   Updated: 2023/10/19 14:50:48 by mlektaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm():AForm("PresidentialPardonForm", 25, 5)
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string target):AForm("PresidentialPardonForm", 25,5),target(target)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& src):AForm(src),target(src.target)
{
}

void PresidentialPardonForm::operator=(const PresidentialPardonForm& src)
{
    target = src.target;
}

std::string PresidentialPardonForm::getTarget(void) const
{
    return(target);
}


void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    if(getSign() == false)
        throw PresidentialPardonForm::FormNotSignedException();
    if (executor.getGrade() > getRequiredGradeToExecute())
        throw PresidentialPardonForm::ExecuterGradeTooLowException();
    std::cout <<  target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}