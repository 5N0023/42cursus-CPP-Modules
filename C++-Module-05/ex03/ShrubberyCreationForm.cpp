/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlektaib <mlektaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 14:49:32 by mlektaib          #+#    #+#             */
/*   Updated: 2023/10/19 14:49:33 by mlektaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm():AForm("ShrubberyCreationForm", 145, 137),target("default")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):AForm("ShrubberyCreationForm", 145, 137),target(target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& src):AForm(src),target(src.target)
{
}

void ShrubberyCreationForm::operator=(const ShrubberyCreationForm& src)
{
    target = src.target;
}

std::string ShrubberyCreationForm::getTarget(void) const
{
    return(target);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    if(getSign() == false)
        throw ShrubberyCreationForm::FormNotSignedException();
    if (executor.getGrade() > getRequiredGradeToExecute())
        throw ShrubberyCreationForm::ExecuterGradeTooLowException();
    std::ofstream outFile(target + "_shrubbery");
    if(outFile.is_open() == false)
        throw ShrubberyCreationForm::OpenFileException();
    outFile << "   o x o x o o    o o x o o" << std::endl;
    outFile << " o o x o x o o  o o x o o o o" << std::endl;
    outFile << " o o o o x x o o o o o o x" << std::endl;
    outFile << " o x o   o x o x o x o" << std::endl;
    outFile << "   o x o   o o x o o o o o" << std::endl;
    outFile << "    o o o \\ o o \\  / o / o" << std::endl;
    outFile << "        \\  /   \\/" << std::endl;
    outFile << "         |   /" << std::endl;
    outFile << "         |  |" << std::endl;
    outFile << "         |  D|" << std::endl;
    outFile << "         |  |" << std::endl;
    outFile << "  ______/____\\____" << std::endl;
    outFile.close();
    if (outFile.is_open() == false)
        throw ShrubberyCreationForm::OpenFileException();
}

