#include <stdio.h>
int main()
{
    int i,j,k,w,y,z;
    i=4;
    j=-1;
    k=0;
    w=i||j&&k;
    y= i||(j&&k);
    z=i&&j||k;
    printf("value for y = %d\n",y);
    printf("value for z = %d",z);
}