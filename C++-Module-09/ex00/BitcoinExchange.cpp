#include "BitcoinExchange.hpp"


std::map<int,float> readDATA()
{
    std::map<int,float> data;
    std::ifstream file("data.csv");
    if(file.fail())
    {
        std::cerr << "Error opening file" << std::endl;
        exit(1);
    }
    std::string line;
    std::string exchange_rate;
    std::string firstLine;
    std::getline(file,firstLine);
    while(std::getline(file,line))
    {
        std::string date;
        std::string year;
        std::string month;
        std::string day;
        std::stringstream ss(line);
        std::getline(ss,year,'-');
        std::getline(ss,month,'-');
        std::getline(ss,day,',');
        std::getline(ss,exchange_rate);
        date = year + month + day;
        data[std::atoi(date.c_str())] = std::atof(exchange_rate.c_str());
    }
    file.close();
    return(data);
}

std::string readInputFile(std::string &inputFileName){
    std::ifstream file(inputFileName);
    if(file.fail())
    {
        std::cerr << "Error opening file" << std::endl;
        exit(1);
    }
    std::string line;
    std::string input;
    std::getline(file,line);
    if(line != "date | value")
    {
        std::cerr << "Error: bad input file ." << std::endl;
        file.close();
        exit(1);
    }
    while (std::getline(file,line))
    {
        input += line + "\n";
    }
    input.pop_back();
    file.close();
    return(input);
    
}

void showResult(std::string &inputFile, std::map<int,float> &data)
{
    std::string line;
    std::stringstream ss(inputFile);
    std::string date;
    std::string year;
    std::string month;
    std::string day;
    std::string value;
    while(std::getline(ss,line))
    {
        int dateInt;
        std::stringstream ss2(line);
        std::getline(ss2,year,'-');
        std::getline(ss2,month,'-');
        std::getline(ss2,day,'|');
        std::getline(ss2,value);
        date = year + month + day;
        dateInt = std::atoi(date.c_str());
        float result = 0;
        if(line.length() < 14 || (line.length() > 14 && line[11] != '|') || !checkDate(year,month,day) || !checkValue(value))
        {
            std::cout << "Error: bad input" " => " << line << std::endl;
            continue;
        }
        if(value[1] == '-')
        {
            std::cout << "Error: not a positive number." << std::endl;
            continue;
        }
        if(std::atoi(value.c_str()) < 0 || std::atof(value.c_str()) > 1000)
        {
            std::cout << "Error: too large a number." << std::endl;
            continue;
        }
        std::map<int,float>::iterator it = data.begin();
        while(it != data.end())
        {
            if(it->first <= dateInt)
                result = it->second * std::atoi(value.c_str());
            else if (it->first > dateInt)
                break;
            it++;
        }
        std::cout << year << "-" << month << "-" << day << " => " << value << " = " << result << std::endl;
    }
}

bool checkDate(std::string year, std::string month, std::string day)
{
    int yearInt = std::atoi(year.c_str());
    int monthInt = std::atoi(month.c_str());
    int dayInt = std::atoi(day.c_str());
    //2022-03-29
    if(yearInt >= 2022)
    {
        if(monthInt >=  3 && dayInt >= 29)
            return(false);
        if(monthInt > 3)
            return(false);
        if(yearInt > 2022)
            return(false);
    }
    //2009-01-02,0
    if (yearInt <= 2009)
    {
        if(monthInt <= 1 && dayInt < 2)
            return(false);
        if(monthInt < 1)
            return(false);
        if(yearInt < 2009)
            return(false);
    }
    if(monthInt > 12 || dayInt > 31)
        return(false);
    if(monthInt % 2 == 0 && dayInt > 30)
        return(false);
    if(yearInt % 4 == 0 && monthInt == 2 && dayInt > 29)
        return(false);
    if(yearInt % 4 != 0 && monthInt == 2 && dayInt > 28)
        return(false);
    if(dayInt < 1)
        return(false);
    if(monthInt < 1)
        return(false);
    return(true);

}

bool checkValue(std::string value)
{
    size_t i = 0;
    int count = 0;
    if(value[0] != ' ')
        return(false);
    i++;
    if(value.length() < 2)
        return(false);
    if(value[i] == '-')
        i++;
    while(i < value.size())
    {
        if(std::isdigit(value[i]) == 0 && value[i] != '.')
            return(false);
        if(value[i] == '.')
            count++;
        if (count > 1)
            return(false);
        i++;
    }
    return(true);
}