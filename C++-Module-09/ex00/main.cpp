#include "BitcoinExchange.hpp"



int main(int argc, char **args)
{
    if(argc != 2)
    {
        std::cerr << "Error: could not open file." << std::endl;
        return(1);
    }
    std::map<int,float> data = readDATA();
    std::string inputFileName = args[1];
    std::string inputFile = readInputFile(inputFileName);
    showResult(inputFile,data);
    data.clear();
    return(0);
}