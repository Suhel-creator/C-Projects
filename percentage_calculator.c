#include <stdio.h>
float percent(int a , int b , int c , int d , int e)
{
    int total = 500;
    int marks = a + b + c + d + e;
    float percen = (float)marks / total * 100;
    return percen;
}

int main()    // Percentage Calculator 
{
    char name[20];
    char class[20];
    int roll_no; 
    int Physics , Chemistry , Mathematics , English , Computer;

    printf("Enter your name: ");
    scanf("%s",&name);

    printf("Enter your class: ");
    scanf("%s",&class);

    printf("Enter your roll no. : ");
    scanf("%d",&roll_no);

    printf("Enter your Physics marks: ");
    scanf("%d",&Physics);

    printf("Enter your Chemistry marks: ");
    scanf("%d",&Chemistry);

    printf("Enter your Mathematics marks: ");
    scanf("%d",&Mathematics);

    printf("Enter your English marks: ");
    scanf("%d",&English);

    printf("Enter your Computer marks: ");
    scanf("%d",&Computer);

    printf("Name = %s\n",name);
    printf("Class = %s\n",class);
    printf("Roll.no = %d\n",roll_no);

    float percentage = percent(Physics , Chemistry , Mathematics , English , Computer);

    printf("Percentage = %.2f", percentage);

    return 0;
}