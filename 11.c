#include <stdio.h>
int main() {
    char c;
    char small, large;
    printf("Enter an alphabet: ");
    scanf("%c", &c);

    small = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    large = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    if (small || large)
        printf("%c is a vowel.", c);
    else
        printf("%c is a consonant.", c);
    return 0;
}