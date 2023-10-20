/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlektaib <mlektaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 14:51:11 by mlektaib          #+#    #+#             */
/*   Updated: 2023/10/20 17:30:04 by mlektaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"



Form::Form():name("a Form"),sign(false),requiredGradeToSign(150),requiredGradeToExecute(150)
{
}

Form::Form(const std::string name,int requiredGradeToSign,int requiredGradeToExecute): name(name),sign(false),requiredGradeToSign(requiredGradeToSign),requiredGradeToExecute(requiredGradeToExecute)
{
    if (requiredGradeToSign < 1 || requiredGradeToExecute < 1)
        throw Form::GradeTooHighException();
    if (requiredGradeToSign > 150 || requiredGradeToExecute > 150)
        throw Form::GradeTooLowException();
}

Form::Form(const Form& src) : name(src.name), sign(src.sign), requiredGradeToSign(src.requiredGradeToSign), requiredGradeToExecute(src.requiredGradeToExecute) {
}


void Form::beSigned(Bureaucrat const &brct)
{
    if (brct.getGrade() > requiredGradeToSign)
        throw Form::GradeTooHighException();
    sign = true;
}
bool Form::getSign(void) const
{
    return(sign);
}

int Form::getRequiredGradeToSign(void) const
{
    return(requiredGradeToSign);
}

int Form::getRequiredGradeToExecute(void) const
{
    return(requiredGradeToExecute);
}


void Form::operator=(Form const  &src)
{
    sign = src.sign;
}

Form::~Form()
{
}


const std::string Form::getName(void) const
{
    return(name);
}


const char *Form::GradeTooHighException::what(void) const throw()
{
    return("Form grade too high");
}

const char *Form::GradeTooLowException::what(void) const throw()
{
    return("Form grade too low");
}

std::ostream &operator<<(std::ostream &out, Form const &src)
{
    out << src.getName() << (src.getSign() ? " is signed" : " is not signed") << " and requires a grade " << src.getRequiredGradeToSign() << " to sign , a grade " << src.getRequiredGradeToExecute() << " to execute";
    return(out);
}