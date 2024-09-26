#include <stdio.h>

#define TEAM_SIZE 5

int main(void) {

   double totalWeight = 0.0;
   double maxWeight = 0.0;
   /* Declare array of 5 doubles */
   double teamWeights[TEAM_SIZE];
   char c;
   int rc;

   /* Read weights and store in array */
   for (int i = 0; i < TEAM_SIZE; i++) { 
      rc = 0;
      while (rc == 0 || teamWeights[i] < 0) {
         printf("Enter weight %d: ", (i + 1) );
         rc = scanf("%lf", &teamWeights[i]);

         /* Consume all remaining characters in input buffer */
         while((c = getchar()) != '\n' && c != EOF);
      }
   }

   /* Display weights on a single line */
   printf("You entered: ");
   for (int i = 0; i < TEAM_SIZE; i++) {
      printf("%0.2lf ", teamWeights[i]);
   }
   printf("\n\n");

   /* Total weight */
   for (int i = 0; i < TEAM_SIZE; i++) {
      totalWeight += teamWeights[i];
   }

   /* Calculate maxWeight */
   for (int i = 0; i < TEAM_SIZE; i++) {
      maxWeight = (teamWeights[i] > maxWeight)?teamWeights[i]:maxWeight;
   }

   printf("Total weight: %0.2lf\n", totalWeight);
   printf("Average weight: %0.2lf\n", totalWeight/TEAM_SIZE);
   printf("Max weight: %0.2lf\n", maxWeight);



   return 0;
}