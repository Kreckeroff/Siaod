#include "Header.h"

int HashFunc(std::string key)
{
    int result;
    const char* cstr = key.c_str();
    int buff = ft_atoi((char*)cstr);
    result = buff % 10;
    return (result);
}

int main(int argc, char** argv)
{
    int i = 0;
    const int N = 3;
    Product* HashTable[N];
    while (i < N)
    {
        HashTable[i] = NULL;
        i++;
    }
    printf("Введите %d записей товаров", N);
    for (int i = 0; i < N; i++)
    {
        Product* newnode = new Product;
        scanf("%s", &newnode->name);
        scanf("%s", &newnode->key);
        int hashnum = HashFunc(newnode->key);
        Product* buffnode = HashTable[hashnum];
        if (buffnode != NULL)
        {
            int k = 2;
            while (buffnode->next != NULL)
            {
                buffnode = buffnode->next;
                k++;
            }
            buffnode->next = newnode;
            printf("Товар: %s, код: %s, записан по адресу %d, по счету %d\n", &newnode->name, &newnode->key, hashnum, k);
        }
        else
        {
            HashTable[hashnum] = newnode;
            printf("Товар: %s, код: %s, записан по адресу %d первым по счету\n", &HashTable[hashnum]->name, &HashTable[hashnum]->key, hashnum);
        }
    }
}