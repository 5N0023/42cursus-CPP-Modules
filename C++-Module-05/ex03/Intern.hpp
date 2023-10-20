/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlektaib <mlektaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 14:50:10 by mlektaib          #+#    #+#             */
/*   Updated: 2023/10/19 14:50:11 by mlektaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include <iostream>
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
class Intern {

    public:
        Intern();
        ~Intern();
        Intern(const Intern &src);
        void operator=(const Intern &src);
        AForm *makeForm(std::string formName, std::string target);
    class UnknownFormException  : public std::exception
        {
            public:
                const char *what(void) const throw();
        };
    
};

