#include <stdio.h>

int main()
{
    unsigned int data = 10;
    int bitPosition = 2;

    data |= (1U << bitPosition);

    printf("%u\n", data);

    return 0;
}
