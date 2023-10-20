/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlektaib <mlektaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 14:51:21 by mlektaib          #+#    #+#             */
/*   Updated: 2023/10/19 14:51:22 by mlektaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Bureaucrat.hpp"

int main()
{
        try {
            Bureaucrat b("b", 1);
            std::cout << b;
            b.increment();
            std::cout << b;
            b.increment();
            b.increment();
        }
        catch (const Bureaucrat::GradeTooHighException &e) {
            std::cout << e.what() << std::endl;
        }

}