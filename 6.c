#include<stdio.h>
void main()
{
    int i;
    printf("Enter the no. :");
    scanf("%d",&i);
    int c;
    c=++i + i/i++;
    printf("%d",c); 
}