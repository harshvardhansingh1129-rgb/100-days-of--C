#include <stdio.h>

struct Permission
{
    unsigned int read : 1;
    unsigned int write : 1;
    unsigned int execute : 1;
};

int main()
{
    struct Permission p;

    p.read = 1;
    p.write = 1;
    p.execute = 0;

    printf("Read Permission = %u\n", p.read);
    printf("Write Permission = %u\n", p.write);
    printf("Execute Permission = %u\n", p.execute);

    return 0;
}