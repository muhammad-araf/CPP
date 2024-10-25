#include <stdio.h>

int main() {
    char studentName[50];
    int marks1, marks2, marks3;

    printf("Enter student name: ");
    scanf("%s", studentName);

    printf("Enter English marks: ");
    scanf("%d", &marks1);

    printf("Enter Maths marks: ");
    scanf("%d", &marks2);

    printf("Enter Physics marks: ");
    scanf("%d", &marks3);
    
printf("=============================\n");
    printf("Welcome %s, \n\tYour English score:%d, \n\tYour Math score: %d \n\tYour Physics score: %d", studentName, marks1, marks2, marks3);

    printf("\nFinal average Marks : %.2f", (marks1 + marks2 + marks3) / 3.0);
    return 0;
}