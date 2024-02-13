#include <stdio.h>
int main() {
    int totalClasses, attendedClasses;
    char hasMedicalCause;
    printf("Enter the total number of classes held: ");
    scanf("%d", &totalClasses);
    printf("Enter the number of classes attended: ");
    scanf("%d", &attendedClasses);
    printf("Do you have a medical cause? (Y/N): ");
    scanf(" %c", &hasMedicalCause);  
    float attendancePercentage = (float)attendedClasses / totalClasses * 100;
    if (attendancePercentage >= 75 || hasMedicalCause == 'Y' || hasMedicalCause == 'y') {
        printf("Attendance: %.2f%%\n", attendancePercentage);
        printf("You are allowed to sit in the exam.\n");
    } else {
        printf("Attendance: %.2f%%\n", attendancePercentage);
        printf("You are not allowed to sit in the exam due to low attendance.\n");
    }
    return 0;
}