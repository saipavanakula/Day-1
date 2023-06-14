#include <stdio.h>

int main() {
    int rollNo, physicsMarks, mathMarks, chemistryMarks;
    char name[100];

    // Read student details
    printf("Enter Roll No: ");
    scanf("%d", &rollNo);
    printf("Enter Name: ");
    scanf(" %[^\n]", name);
    printf("Enter Marks in Physics: ");
    scanf("%d", &physicsMarks);
    printf("Enter Marks in Math: ");
    scanf("%d", &mathMarks);
    printf("Enter Marks in Chemistry: ");
    scanf("%d", &chemistryMarks);

    // Calculate total marks and percentage
    int totalMarks = physicsMarks + mathMarks + chemistryMarks;
    float percentage = (float)totalMarks / 3;

    // Print student summary
    printf("\nStudent Summary\n");
    printf("Roll No: %d\n", rollNo);
    printf("Name: %s\n", name);
    printf("Physics Marks: %d\n", physicsMarks);
    printf("Math Marks: %d\n", mathMarks);
    printf("Chemistry Marks: %d\n", chemistryMarks);
    printf("Total Marks: %d\n", totalMarks);
    printf("Percentage: %.2f\n", percentage);

    return 0;
}