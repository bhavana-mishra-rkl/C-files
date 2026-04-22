#include <stdio.h>
#include <string.h>

int main() {
    const char *text = "Hello, how are you?";
    const char *find = "are";
    
    char *result = strstr(text, find);

    if (result) {
        // Prints: Found at: are you?
        printf("Found at: %s\n", result);
        // To get the index: result - text
        printf("Index: %ld\n", result - text); 
    } else {
        printf("Not found.\n");
    }

    return 0;
}

