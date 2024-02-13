#include <stdio.h>

void main(){
    int unitsConsumed;
    int charge;
    int chargeUnder200 = 3;
    int chargeUnder300 = 4;
    int chargeUnder400 = 5;
    int chargeGreater400 = 6;
    int minimumCharge = 400;
    printf("Enter the units consumed: ");
    scanf("%d", &unitsConsumed);
    if (unitsConsumed < 0){
        printf("Invalid Units, Try Again!");
    }
    else if (unitsConsumed <= 200){
        charge = unitsConsumed * chargeUnder200;
        if (charge < 400){
            charge = minimumCharge;
        }
    }
    else if (unitsConsumed > 200 && unitsConsumed <= 300){
        charge = unitsConsumed * chargeUnder300;
    }
    else if (unitsConsumed > 300 && unitsConsumed <= 400){
        charge = unitsConsumed * chargeUnder400;
    }
    else if (unitsConsumed > 400){
        charge = unitsConsumed * chargeGreater400;
    }
    else{
        printf("Kuch to gadbad hai daya");
    }
    if (charge >= 2500){
        charge += charge * 5 / 100;
    }
    printf("%d", charge);
}