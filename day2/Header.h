#ifndef HEADER_H
# define HEADER_H

# include <iostream>
# include <fstream>
# include <string>

struct Product
{
    std::string key; //key
    std::string name; // name Product
    struct Product* next = NULL;
};

int ft_atoi(char* str);

#endif