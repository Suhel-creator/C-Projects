#include <stdio.h>
int main()
           // A number guessing game made by Suhel
{
   int secret = 73;
   int guess;
   int found = 0;

   for(int i = 1; i <= 6; i++)
   {
      printf("Attempt %d -- Enter your %d number: ",i,i);
      scanf("%d",&guess);

      if(guess == secret)
      {
         printf("Wow ! your found the number %d",secret);
         found = 1;
         break;
      }

      else if(guess > secret)
      {
         printf("Your number is large \n");
      }

      else
      {
         printf("Your number is small\n");
      }
   }

   if(found == 0)
   {
      printf("Game Over! Secret number tha: %d\n", secret);
   }
   return 0;
}