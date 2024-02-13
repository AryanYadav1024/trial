#include <stdio.h>
int main()
{
 int x;
 printf("number: ");
 scanf("%d",&x);
 if(x==1){
    printf("sunday");
 }else if(x==2){
printf("monday");
 }else if(x==3){
printf("tuesday");}
else if(x==4){
    printf("wednesday");
}else if (x==5){
    printf("thursday");
}else if(x==6){
    printf("friday");
}else if(x==7){
    printf("saturday");
}else{
    printf("invalid number");
}
 

}