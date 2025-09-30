#include <stdio.h>

int main() {
    char str[100];
    unsigned long long number = 0;
    int i = 0;

    printf("Enter string of numbers: ");
    scanf("%99s", str);

    while (str[i] != '\0') {
        if (str[i] >= '0' && str[i] <= '9') {
            number = number * 10 + (str[i] - '0');
        } else {
            printf("Error: non-numeric character found '%c'\n", str[i]);
            return 1;
        }
        i++;
    }

    printf("Converted number: %llu\n", number);
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
    printf("\nPress Enter to exit...");
    getchar();
    return 0;
}
