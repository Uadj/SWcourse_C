#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1 = 15;
    int num2 = 20;

    int num3 = num1 & num2;
    printf("AND operation : %d \n", num3);
    num3 = num1 | num2;
    printf("OR operation : %d \n", num3);
    return 0;

}
