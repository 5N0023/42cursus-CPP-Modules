/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlektaib <mlektaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 14:50:58 by mlektaib          #+#    #+#             */
/*   Updated: 2023/10/19 14:50:59 by mlektaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once



#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {


    private:
        const std::string   name;
        bool                sign;
        const int           requiredGradeToSign;
        const int           requiredGradeToExecute;
    public:
        AForm();
        virtual ~AForm();
        AForm(const std::string name,int requiredGradeToSign,int requiredGradeToExecute);
        AForm(const AForm& src);
        void operator=(const AForm& src);
        const std::string getName(void) const;
        void beSigned(Bureaucrat const &brct);
        bool getSign(void) const;
        int getRequiredGradeToSign(void) const;
        int getRequiredGradeToExecute(void) const;
        virtual void execute(Bureaucrat const &executor) const = 0;
    class FormNotSignedException  : public std::exception
    {
        public:
            const char *what(void) const throw();
    };
    class ExecuterGradeTooLowException  : public std::exception
        {
            public:
                const char *what(void) const throw();
        };
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

    class OpenFileException  : public std::exception
        {
            public:
                const char *what(void) const throw();
        };
};


std::ostream &operator<<(std::ostream &out, AForm const &src);