/**
 * hello world but more confusing
*/

#include <stdio.h>
#include <stdint.h>
#include <string.h>

int main(void) {
    char message[] = "Hello World :3";
    char buffer[16];
    int length = strlen(message);

    for (int i = 0; i < length; i++) {
        buffer[i] = message[i];
        buffer[i+1] = '\0';
        printf("%s\n", buffer);
    }

    return 0;
}

