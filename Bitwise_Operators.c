#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>

/*---------------------------------------------------------*/
void setbit(unsigned int data)
{
    data |= (1 << 5);
    printf("Data = %u\n", data);
}

/*---------------------------------------------------------*/
void clearbit(unsigned int data)
{
    data &= ~(1 << 2);
    printf("Data = %u\n", data);
}

/*---------------------------------------------------------*/
void toggle(uint8_t data)
{
    data = ~data;
    printf("Data = %u\n", (unsigned int)data);
}

/*---------------------------------------------------------*/
void readmsb(uint8_t data)
{
    printf("MSB = %d\n", (data >> 7) & 1);
}

/*---------------------------------------------------------*/
void swaptwobits(uint8_t val)
{
    uint8_t result = val;

    uint8_t bit5 = (val >> 5) & 1;
    uint8_t bit2 = (val >> 2) & 1;

    result &= ~((1 << 5) | (1 << 2));
    result |= (bit5 << 2);
    result |= (bit2 << 5);

    printf("Result = %u\n", result);
}

/*---------------------------------------------------------*/
void reverseallbits(uint8_t val)
{
    uint8_t result = 0;

    for (int i = 0; i < 8; i++)
    {
        result |= ((val >> i) & 1) << (7 - i);
    }

    printf("Reversed = %u\n", result);
}

/*---------------------------------------------------------*/
void countbits(int data)
{
    int count = 0;

    while (data != 0)
    {
        data = data & (data - 1);
        count++;
    }

    printf("Count = %d\n", count);
}

/*---------------------------------------------------------*/
bool powerof(int data)
{
    if (data <= 0)
        return false;

    return (data & (data - 1)) == 0;
}

/*---------------------------------------------------------*/
void firstbit(uint8_t data)
{
    for (int i = 0; i < 8; i++)
    {
        if ((data >> i) & 1)
        {
            printf("First Set Bit Position = %d\n", i);
            return;
        }
    }

    printf("No set bits\n");
}

/*---------------------------------------------------------*/
void lastbit(uint8_t data)
{
    for (int i = 7; i >= 0; i--)
    {
        if ((data >> i) & 1)
        {
            printf("Last Set Bit Position = %d\n", i);
            return;
        }
    }

    printf("No set bits\n");
}

/*---------------------------------------------------------*/
void countleadingzeros(uint8_t data)
{
    int count = 0;

    for (int i = 7; i >= 0; i--)
    {
        if (((data >> i) & 1) == 0)
            count++;
        else
            break;
    }

    printf("Leading Zeros = %d\n", count);
}

/*---------------------------------------------------------*/
void counttrailingzeros(uint8_t data)
{
    int count = 0;

    for (int i = 0; i < 8; i++)
    {
        if (((data >> i) & 1) == 0)
            count++;
        else
            break;
    }

    printf("Trailing Zeros = %d\n", count);
}

/*---------------------------------------------------------*/
void printbinary()
{
    while (1)
    {
        int expression;

        printf("\n1. 8-bit");
        printf("\n2. 16-bit");
        printf("\n3. 32-bit");
        printf("\n4. Exit");
        printf("\nEnter choice: ");
        scanf("%d", &expression);

        switch (expression)
        {
        case 1:
        {
            uint8_t data;
            printf("Enter data: ");
            scanf("%hhu", &data);

            printf("Binary = ");
            for (int i = 7; i >= 0; i--)
                printf("%d", (data >> i) & 1);
            printf("\n");
            break;
        }

        case 2:
        {
            uint16_t data;
            printf("Enter data: ");
            scanf("%hu", &data);

            printf("Binary = ");
            for (int i = 15; i >= 0; i--)
                printf("%d", (data >> i) & 1);
            printf("\n");
            break;
        }

        case 3:
        {
            uint32_t data;
            printf("Enter data: ");
            scanf("%u", &data);

            printf("Binary = ");
            for (int i = 31; i >= 0; i--)
                printf("%d", (data >> i) & 1);
            printf("\n");
            break;
        }

        case 4:
            return;

        default:
            printf("Invalid Choice\n");
        }
    }
}

/*---------------------------------------------------------*/
void findparity(uint8_t data)
{
    int count = 0;

    while (data)
    {
        data &= (data - 1);
        count++;
    }

    if (count % 2 == 0)
        printf("Even Parity\n");
    else
        printf("Odd Parity\n");
}

/*---------------------------------------------------------*/
void longestsequence(unsigned int n)
{
    int count = 0;
    int max = 0;

    while (n)
    {
        if (n & 1)
        {
            count++;
            if (count > max)
                max = count;
        }
        else
        {
            count = 0;
        }

        n >>= 1;
    }

    printf("Longest Sequence = %d\n", max);
}

/*=========================================================*/
int main()
{
    while (1)
    {
        int choice;

        printf("\n========== Bit Manipulation Menu ==========\n");
        printf("1. Set Bit\n");
        printf("2. Clear Bit\n");
        printf("3. Toggle Bit\n");
        printf("4. Read MSB\n");
        printf("5. Swap Two Bits\n");
        printf("6. Reverse All Bits\n");
        printf("7. Count Set Bits\n");
        printf("8. Check Power of Two\n");
        printf("9. Find First Set Bit\n");
        printf("10. Find Last Set Bit\n");
        printf("11. Count Leading Zeros\n");
        printf("12. Count Trailing Zeros\n");
        printf("13. Print Binary\n");
        printf("14. Find Parity\n");
        printf("15. Longest Sequence of 1s\n");
        printf("16. Exit\n");

        printf("\nEnter Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
        {
            unsigned int data;
            printf("Enter data: ");
            scanf("%u", &data);
            setbit(data);
            break;
        }

        case 2:
        {
            unsigned int data;
            printf("Enter data: ");
            scanf("%u", &data);
            clearbit(data);
            break;
        }

        case 3:
        {
            uint8_t data;
            printf("Enter data: ");
            scanf("%hhu", &data);
            toggle(data);
            break;
        }

        case 4:
        {
            uint8_t data;
            printf("Enter data: ");
            scanf("%hhu", &data);
            readmsb(data);
            break;
        }

        case 5:
        {
            uint8_t data;
            printf("Enter data: ");
            scanf("%hhu", &data);
            swaptwobits(data);
            break;
        }

        case 6:
        {
            uint8_t data;
            printf("Enter data: ");
            scanf("%hhu", &data);
            reverseallbits(data);
            break;
        }

        case 7:
        {
            int data;
            printf("Enter data: ");
            scanf("%d", &data);
            countbits(data);
            break;
        }

        case 8:
        {
            int data;
            printf("Enter data: ");
            scanf("%d", &data);

            if (powerof(data))
                printf("True\n");
            else
                printf("False\n");
            break;
        }

        case 9:
        {
            uint8_t data;
            printf("Enter data: ");
            scanf("%hhu", &data);
            firstbit(data);
            break;
        }

        case 10:
        {
            uint8_t data;
            printf("Enter data: ");
            scanf("%hhu", &data);
            lastbit(data);
            break;
        }

        case 11:
        {
            uint8_t data;
            printf("Enter data: ");
            scanf("%hhu", &data);
            countleadingzeros(data);
            break;
        }

        case 12:
        {
            uint8_t data;
            printf("Enter data: ");
            scanf("%hhu", &data);
            counttrailingzeros(data);
            break;
        }

        case 13:
        {
            printbinary();
            break;
        }

        case 14:
        {
            uint8_t data;
            printf("Enter data: ");
            scanf("%hhu", &data);
            findparity(data);
            break;
        }

        case 15:
        {
            unsigned int data;
            printf("Enter data: ");
            scanf("%u", &data);
            longestsequence(data);
            break;
        }

        case 16:
            printf("Exiting...\n");
            return 0;

        default:
            printf("Invalid Choice!\n");
        }
    }
}
