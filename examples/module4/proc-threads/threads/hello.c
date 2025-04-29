#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void *print_message_function(void *ptr);

int main(void) {
   pthread_t thread1, thread2;
   char *message1 = "Goodbye";
   char *message2 = "World";
   pthread_create(&thread1, NULL, print_message_function, (void*) message1);
   pthread_create(&thread2, NULL, print_message_function, (void*) message2);
   exit(0);
}
void *print_message_function(void *ptr) {
   printf("%s ", (char *)ptr);
   return NULL;

}
