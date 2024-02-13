#include <stdio.h>
int main() {
    int a, b, c;
    int small, large;
    printf("Enter digits: ");
    scanf("%d %d %d", &a, &b, &c);
    small = large = a;
    if(b < small)
        small = b;
    if(b > large)
        large = b;
    if(c < small)
        small = c;
    if(c > large)
        large = c;
    printf("Smallest no: %d\n", small);
    printf("Greatest no: %d\n", large);
    return 0;
}