/**
 * hello world but more confusing
*/

#include <stdio.h>
#include <stdint.h>

uint8_t message[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', ' ', ':', '3'};
message_size = sizeof(message)

int main(void) {
  for (size_t i = 1; i <= message_size; i++) {
      for (size_t j = 0; j < i; i++) {
          printf("%c", message[j]);
      }
      printf("\n");
  }
  
  return 0;
}
