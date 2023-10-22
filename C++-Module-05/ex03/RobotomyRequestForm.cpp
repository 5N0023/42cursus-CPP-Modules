/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlektaib <mlektaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 14:49:42 by mlektaib          #+#    #+#             */
/*   Updated: 2023/10/22 13:29:41 by mlektaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

#include <cstdlib>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm():AForm("RobotomyRequestForm", 72, 45),target("default")
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string target):AForm("RobotomyRequestForm", 72, 45),target(target)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& src):AForm(src),target(src.target)
{
}

void RobotomyRequestForm::operator=(const RobotomyRequestForm& src)
{
    target = src.target;
}

std::string RobotomyRequestForm::getTarget(void) const
{
    return(target);
}


void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    if(getSign() == false)
        throw RobotomyRequestForm::FormNotSignedException();
    if (executor.getGrade() > getRequiredGradeToExecute())
        throw RobotomyRequestForm::ExecuterGradeTooLowException();
    srand(time(NULL));
    if(rand() % 2)
        std::cout <<  target << " has been robotomized successfully by " << executor.getName() << std::endl;
    else
        std::cout <<  target << " has not been robotomized by " << executor.getName() << std::endl;
}