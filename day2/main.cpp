
#include <iostream>
#include <fstream>
#include <string>

using namespace std;



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

struct Product
{
    std::string key; //key
    std::string name; // name Product
    struct Product* next = NULL;
};

int HashFunc(string key)
{
    int result;
    const char* cstr = key.c_str();
    int buff = ft_atoi((char*)cstr);
    result = buff % 10;
    return (result);
}

/*Node* creator(int count)
{
if (count == 0)
return (0);
Node* node = new Node;
node->next = creator(count - 1);
return node;
}*/
class HashTable
{
private:
   const int N = 3;
public:
    int i = 0;
    HashTable()
    {
        Product* product[N];
        while (i < N)
        {
             product[i] = NULL;
             i++;
        }
        printf("Введите %d записей товаров", N);
        for (int i = 0; i < N; i++)
        {
            Product* newnode = new Product;
            scanf("%s", &newnode->name);
            scanf("%s", &newnode->key);
            int hashnum = HashFunc(newnode->key);
            Product* buffnode = product[hashnum];
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
                product[hashnum] = newnode;
                printf("Товар: %s, код: %s, записан по адресу %d первым по счету\n", &product[hashnum]->name, &product[hashnum]->key, hashnum);
                printf("%s", &product[hashnum]->name);
            }
        }
    }
};

int main(int argc, char** argv)
{
   HashTable();
}