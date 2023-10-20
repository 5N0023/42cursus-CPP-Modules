/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlektaib <mlektaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 14:51:27 by mlektaib          #+#    #+#             */
/*   Updated: 2023/10/20 17:28:12 by mlektaib         ###   ########.fr       */
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

int Bureaucrat::getGrade(void)const
{
    return(grade);
}

const char *Bureaucrat::GradeTooHighException::what(void) const throw()
{
    return("Grade too high");
}

const char *Bureaucrat::GradeTooLowException::what(void) const throw()
{
    return("Grade too low");
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &src)
{
    out << src.getName() << ", bureaucrat grade " << src.getGrade() << std::endl;
    return(out);
}