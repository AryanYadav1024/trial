// #include<stdio.h>
// void main()
// {
//     int a;
//     printf("Enter the first no.: ");
//     scanf("%d",&a);
//     int b;
//     printf("Enter the second no.:");
//     scanf("%d",&b);
//     printf("Enter the third no. :");
//     int c;
//     scanf("%d",&c);
//     int d=(a>b && a>c)?a:(b>a && b>c)?b:(c>a && c>b)?c:printf("they are equal");
//     printf("The greatest no. is %d",d);
// }

#include<stdio.h>
void main()
{
    char a;
    printf("Enter the first no.: ");
    scanf("%d",&a);
    char b;
    printf("Enter the second no.:");
    scanf("%d",&b);
    printf("Enter the third no. :");
    char c;
    scanf("%d",&c);
    char d=(a>b && a>c)?a:(b>a && b>c)?b:(c>a && c>b)?c:printf("they are equal");
    printf("The greatest no. is %d",d);
}