#include <stdio.h>
int main()
          // ATM Machine made by Suhel
{
    const int pin = 8040;
    int balance = 28000;
    int userpin , choice , amount;

    printf("Enter your pin here : ");
    scanf("%d",&userpin);

    if(userpin != pin)
    {
        printf("Your pin is wrong");
        return 0;
    }
    
    printf("Your pin correct ! Welcome!\n");
    
    while(1)
    {
        printf("\n----ATM----\n");
        printf("1. Check Balance: \n");
        printf("2. Deposit: \n");
        printf("3. Withdraw: \n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
            printf("Your balance is %d\n\n",balance);
            break;

            case 2:
            printf("Enter the amount: ");
            scanf("%d",&amount);
            if(amount <= 0)
            {
                printf("Invailid amount\n");
            }
            else 
            {balance = amount + balance;
            printf("Your balance is %d\n\n",balance);
            }
            break;

            case 3:
            printf("Enter the amount: ");
            scanf("%d",&amount);
            if(amount > balance)
            {
                printf("Insufficient balance\n\n");
            }
            else
            {
                balance = balance - amount;
                printf("Your balance is %d\n\n",balance);
            }
            break;

            case 4:
            printf("Thank you for visit, come again!\n\n");
            return 0;

            default :
            printf("Invailid choice\n");
        }
    }
    return 0;
}