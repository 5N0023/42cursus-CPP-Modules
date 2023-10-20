/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlektaib <mlektaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 14:51:08 by mlektaib          #+#    #+#             */
/*   Updated: 2023/10/19 14:51:09 by mlektaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once



#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {


    private:
        const std::string   name;
        bool                sign;
        const int           requiredGradeToSign;
        const int           requiredGradeToExecute;
    public:
        Form();
        ~Form();
        Form(const std::string name,int requiredGradeToSign,int requiredGradeToExecute);
        Form(const Form& src);
        void operator=(const Form& src);
        const std::string getName(void) const;
        void beSigned(Bureaucrat const &brct);
        bool getSign(void) const;
        int getRequiredGradeToSign(void) const;
        int getRequiredGradeToExecute(void) const;
    class GradeTooHighException : public std::exception
        {
            public:
                const char *what(void) const throw();
            
        };
    class GradeTooLowException  : public std::exception
        {
            public:
                const char *what(void) const throw();
        };



};


std::ostream &operator<<(std::ostream &out, Form const &src);