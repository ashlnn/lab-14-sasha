#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int maxLength = 0, currentLength = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && str[i] != '\n') {
            currentLength++; 
        } else {
            if (currentLength > maxLength) {
                maxLength = currentLength; 
            }
            currentLength = 0; 
        }
    }
    
    if (currentLength > maxLength) {
        maxLength = currentLength;
    }

    printf("Length of the longest word: %d\n", maxLength);

    return 0;
}
