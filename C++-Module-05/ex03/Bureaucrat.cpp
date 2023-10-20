/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlektaib <mlektaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 14:50:18 by mlektaib          #+#    #+#             */
/*   Updated: 2023/10/19 14:50:19 by mlektaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"



Bureaucrat::Bureaucrat():name("a Bureaucrat"),grade(150)
{
}

Bureaucrat::Bureaucrat(std::string name, int grade):name(name),grade(grade)
{
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();

}

Bureaucrat::Bureaucrat(Bureaucrat const  &src):name(src.name),grade(src.grade)
{
}

void Bureaucrat::operator=(Bureaucrat const  &src)
{
    grade = src.grade;
}

Bureaucrat::~Bureaucrat()
{
}

void   Bureaucrat::signForm(AForm &aform)
{
    try
    {
        aform.beSigned(*this);
        std::cout << name << " signs " << aform.getName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << name << " cannot sign " << aform.getName() << " because " << e.what() << " for grade : " << grade << std::endl;
    }
    
}

void  Bureaucrat::executeForm(AForm const &form)
{
    try
    {
        form.execute(*this);
        std::cout << name << " executed " << form.getName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << name << " cannot execute " << form.getName() << " because " << e.what() << std::endl;
    }
    
}

void    Bureaucrat::decrement(void)
{
    if(grade == 150)
        throw Bureaucrat::GradeTooLowException();
    grade++;
}

void    Bureaucrat::increment(void)
{
    if(grade == 1)
        throw Bureaucrat::GradeTooHighException();
    grade--;
}

const std::string Bureaucrat::getName(void) const
{
    return(name);
}

const int Bureaucrat::getGrade(void)const
{
    return(grade);
}

const char *Bureaucrat::GradeTooHighException::what(void) const throw()
{
    return("Bureaucrat grade too high");
}

const char *Bureaucrat::GradeTooLowException::what(void) const throw()
{
    return("Bureaucrat grade too low");
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &src)
{
    out << src.getName() << ", bureaucrat grade " << src.getGrade() << std::endl;
    return(out);
}