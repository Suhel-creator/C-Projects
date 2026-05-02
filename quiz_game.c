#include <stdio.h>
int main()
{
           // Quiz game by suhel
    int ques = 5;
    int Tscore = 5;
    int score = 0;

    char ans;

    printf("Q1. Who was the 1st Guru of Sikhs?\n A. Guru Angad dev Ji\n B. Guru Nanak Dev Ji\n C. Guru Gobind Singh Ji\n D. Guru Arjan Dev Ji \n");
    scanf(" %c",&ans);
    
    if(ans == 'b' || ans == 'B')
    {
        printf("Your answer is correct! \n");
        score++;
    }
    else
    {
        printf("Your answer is incorrect, correct answer is (B)Guru Nanak Dev ji\n");
    }

    printf("Q2. In which year Guru Nanak Dev Ji born?\n A. 1469\n B. 1499\n C. 1450\n D. 1526\n");
    scanf(" %c",&ans);

    if(ans == 'a' || ans == 'A')
    {
        printf("Your answer is correct! \n");
        score++;
    }
    else
    {
        printf("Your answer is incorrect, correct answer is (A)1499\n");
    }

    printf("Q3. Where was Guru Nanak De Ji born?\n A. Amritsar\n B. Anandpur sahib\n C. Nankana Sahib\n D. Patna Sahib\n");
    scanf(" %c",&ans);

    if(ans == 'c' || ans == 'C')
    {
        printf("Your answer is correct! \n");
        score++;
    }
    else
    {
        printf("Your answer is incorrect, correct answer is (C)Nankana Sahib\n");
    }

    printf("Q4. Who build the golden Temple (Harmandir sahib)?\n A. Guru Nanak Dev Ji\n B. Guru Arjan Dev Ji\n C. Guru Ram Das ji\n D. Guru Gobind Singh Ji\n");
    scanf(" %c",&ans);

    if(ans == 'b' || ans == 'B')
    {
        printf("Your answer is correct! \n");
        score++;
    }
    else
    {
        printf("Your answer is incorrect, correct answer is (B)Guru Arjan Dev Ji\n");
    }

    printf("Q5. How many gurus are there in Sikhism?\n A. 8\n B. 12\n C. 10\n D. 11\n");
    scanf(" %c",&ans);

    if(ans == 'c' || ans == 'C')
    {
        printf("Your answer is correct! \n");
        score++;
    }
    else
    {
        printf("Your answer is incorrect, correct answer is (C)10\n");
    }

    printf("Your total score is %d/%d\n",score, Tscore);
    printf("Thanks for playing and visit again!");
    return 0;
}