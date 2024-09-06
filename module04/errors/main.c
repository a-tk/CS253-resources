#include<stdio.h>
#include <string.h>

int main(void) {
   char serviceWord1[50];
   char serviceWord2[50];
   
   // Prompt user for desired auto service, grab both strings
   printf("Enter desired auto service:\n");
   scanf("%s", serviceWord1);
   scanf("%s", serviceWord2);
   
   printf("You entered: %s %s\n", serviceWord1, serviceWord2);
   
   if ((strcmp(serviceWord1, "Oil") == 0) && (strcmp(serviceWord2, "change") == 0)) {
      printf("Cost of oil change: $35\n");
   }
   
   else if ((strcmp(serviceWord1, "Tire") == 0) && (strcmp(serviceWord2, "rotation") == 0)) {
      printf("Cost of tire rotation: $19\n");
   }
   
   else if ((strcmp(serviceWord1, "Car") == 0) && (strcmp(serviceWord2, "wash") == 0)) {
      printf("Cost of car wash: $7\n");
   }
   
   else {
      printf("Error: Requested service is not recognized\n");
   }
   
   return 0;
}