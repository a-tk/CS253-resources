#include <stdio.h>

#define TEAM_SIZE 5

int main(void) {

   double totalHeight = 0.0;
   double maxHeight = 0.0;
   /* Declare array of 5 doubles */
   double teamHeights[TEAM_SIZE];
   char c;
   int rc;

   /* Read Heights and store in array */
   for (int i = 0; i < TEAM_SIZE; i++) { 
      rc = 0;
      while (rc == 0 || teamHeights[i] < 0) {
         printf("Enter Height %d: ", (i + 1) );
         rc = scanf("%lf", &teamHeights[i]);

         /* Consume all remaining characters in input buffer */
         while((c = getchar()) != '\n' && c != EOF);
      }
   }

   /* Display Heights on a single line */
   printf("You entered: ");
   for (int i = 0; i < TEAM_SIZE; i++) {
      printf("%0.2lf ", teamHeights[i]);
   }
   printf("\n\n");

   /* Total Height */
   for (int i = 0; i < TEAM_SIZE; i++) {
      totalHeight += teamHeights[i];
   }

   /* Calculate maxHeight */
   for (int i = 0; i < TEAM_SIZE; i++) {
      maxHeight = (teamHeights[i] > maxHeight)?teamHeights[i]:maxHeight;
   }

   printf("Total Height: %0.2lf\n", totalHeight);
   printf("Average Height: %0.2lf\n", totalHeight/TEAM_SIZE);
   printf("Max Height: %0.2lf\n", maxHeight);



   return 0;
}