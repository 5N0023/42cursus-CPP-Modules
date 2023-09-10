/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlektaib <mlektaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 15:30:35 by mlektaib          #+#    #+#             */
/*   Updated: 2023/09/10 15:37:58 by mlektaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

bool readFile(std::ifstream &inputFile, std::string &fileContent)
{
    if(std::getline(inputFile,fileContent,'\0'))
    {
        inputFile.close();
        return true;
    }
    else
        return false;
}

void replace(std::string &fileContent,std::string orignalString,std::string newString)
{
    size_t found;
    std::string tmp;
    (void)newString;
    while(true)
    {
        found = fileContent.find(orignalString);
        if (found != std::string::npos)
        {
            tmp = fileContent;
            fileContent = fileContent.substr(0,found);
            fileContent += newString;
            fileContent += tmp.substr(found + orignalString.length() , tmp.length());
        }
        else
            break;
    }

}

bool openFiles(std::ifstream &inputFile, std::ofstream &outputFile, std::string inputFileName)
{
    std::string outfileFileName;
    outfileFileName = inputFileName + ".replace";

    inputFile.open(inputFileName.c_str());
    if(!inputFile.is_open())
    {
        std::cout << "can't open file" << std::endl;
        return 1;
    }
    outputFile.open(outfileFileName.c_str());
    if(!outputFile.is_open())
    {
        std::cout << "can't create file" << std::endl;
        inputFile.close();
        return 1;
    }
    return 0;
}

int main(int c, char **argc)
{
    if (c != 4)
    {
        std::cout << "invalid numbers of args" << std::endl;
        return 1;
    }
    std::string inputFileName(argc[1]);
    std::string orignalString(argc[2]);
    std::string newString(argc[3]);
    std::ifstream inputFile;
    std::ofstream outputFile;
    if(openFiles(inputFile,outputFile,inputFileName))
        return 1;
    std::string fileContent;
    if(!readFile(inputFile,fileContent))
    {
        inputFile.close();
        outputFile.close();
        return 1;
    }
    replace(fileContent,orignalString,newString);
    outputFile << fileContent;
    outputFile.close();
    return 0;
}