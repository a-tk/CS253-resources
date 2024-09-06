#include <stdio.h>

int main(void) {
   char triangleChar;
   int triangleHeight;

   printf("Enter a character:\n");
   scanf("%c", &triangleChar);
   
   printf("Enter triangle height:\n");
   scanf("%d", &triangleHeight);
   printf("\n");
       
   printf("* \n");
   printf("* * \n");
   printf("* * * \n");
   
   return 0;
}