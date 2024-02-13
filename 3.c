#include <stdio.h>
int main() {
    int n1, n2, n3;
    printf("Enter digits: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    if (n2 < n1 && n2 < n3) {
        printf("Smallest no: %d\n", n2);
    } else if (n3 < n1 && n3 < n2) {
        printf("Smallest no: %d\n", n3);
    } else {
        printf("Smallest no: %d\n", n1);
    }
    if (n2 > n1 && n2 > n3) {
        printf("Greatest no: %d\n", n2);
    } else if (n3 > n1 && n3 > n2) {
        printf("Greatest no: %d\n", n3);
    } else {
        printf("Greatest no: %d\n", n1);
    }
    return 0;
}