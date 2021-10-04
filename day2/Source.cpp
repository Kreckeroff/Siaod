#include "Header.h"

int ft_atoi(char* str)
{
    int flag;
    int num;
    int count;

    count = 0;
    flag = 0;
    num = 0;
    while ((*(str + count) == '\f') || (*(str + count) == '\n') || (*(str + count) == '\r')
    || (*(str + count) == '\v') || (*(str + count) == '\t') || (*(str + count) == ' '))
    count++;
    while ((*(str + count) == '-') || (*(str + count) == '+'))
    {
        if (*(str + count) == '-')
        flag++;
        count++;
    }
    while ((*(str + count) >= '0') && (*(str + count) <= '9'))
    {
        num = (num * 10) + (*(str + count) - '0');
        count++;
    }
    if (flag % 2 == 0)
        return (num);
    else
        return (num * -1);
}