/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlektaib <mlektaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 14:51:01 by mlektaib          #+#    #+#             */
/*   Updated: 2023/10/19 14:51:02 by mlektaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"



AForm::AForm():name("a AForm"),requiredGradeToSign(150),requiredGradeToExecute(150),sign(false)
{
}

AForm::AForm(const std::string name,int requiredGradeToSign,int requiredGradeToExecute): name(name),requiredGradeToSign(requiredGradeToSign),requiredGradeToExecute(requiredGradeToExecute),sign(false)
{
    if (requiredGradeToSign < 1 || requiredGradeToExecute < 1)
        throw AForm::GradeTooHighException();
    if (requiredGradeToSign > 150 || requiredGradeToExecute > 150)
        throw AForm::GradeTooLowException();
}

AForm::AForm(const AForm& src) : name(src.name), sign(src.sign), requiredGradeToSign(src.requiredGradeToSign), requiredGradeToExecute(src.requiredGradeToExecute) {
}


void AForm::beSigned(Bureaucrat const &brct)
{
    if (brct.getGrade() > requiredGradeToSign)
        throw AForm::GradeTooHighException();
    sign = true;
}
bool AForm::getSign(void) const
{
    return(sign);
}

int AForm::getRequiredGradeToSign(void) const
{
    return(requiredGradeToSign);
}

int AForm::getRequiredGradeToExecute(void) const
{
    return(requiredGradeToExecute);
}


void AForm::operator=(AForm const  &src)
{
    sign = src.sign;
}

AForm::~AForm()
{
}


const std::string AForm::getName(void) const
{
    return(name);
}

std::ostream &operator<<(std::ostream &out, AForm const &src)
{
    out << src.getName() << (src.getSign() ? " is signed" : " is not signed") << " and requires a grade " << src.getRequiredGradeToSign() << " to sign , a grade " << src.getRequiredGradeToExecute() << " to execute";
    return(out);
}

const char  *AForm::GradeTooHighException::what(void) const throw()
{
    return("Form grade too high");
}

const char  *AForm::GradeTooLowException::what(void) const throw()
{
    return("Form grade too low");
}

const char  * AForm::FormNotSignedException::what(void) const throw()
{
    return("Form not signed");
}

const char  *AForm::ExecuterGradeTooLowException::what(void) const throw()
{
    return("Executer grade too low");
}



const char  *AForm::OpenFileException::what(void) const throw()
{
    return("Can't open file");
}


