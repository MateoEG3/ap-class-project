#include <stdio.h>
#include <stdbool.h>

int main()
{

    int firstNumber;
    int secondNumber;

    printf("ingrese primer valor: ");
    scanf("%d",&firstNumber);
    printf("ingrese segundo valor: ");
    scanf("%d",&secondNumber);


    int result =firstNumber / secondNumber;

    printf("resultado:%d\n", result);

    return 0;
}