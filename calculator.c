#include <stdio.h>
int main()        // Calculator made by Suhel
{
    int a;
    int b;
    char op;

    printf("Enter your first number: ");
    scanf("%d",&a);

    printf("Enter your second number: ");
    scanf("%d",&b);

    printf("Enter your operator( +,-,*,/ ): ");
    scanf(" %c",&op);

    switch(op)
    {
        case '+':
        printf("Summation = %d",a+b);
        break;

        case '-':
        printf("Difference = %d",a-b);
        break;

        case '*':
        printf("Multiplication = %d", a*b);
        break;

        case '/':
        if(b == 0)
        {
            printf("We can't divide a by zero ");
            break;
        }
        else
        {
            printf("Division = %d",a/b);
            break;
        }

        default:
        printf("invailid op");
    }
    return 0;
}