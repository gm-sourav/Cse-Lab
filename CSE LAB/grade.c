#include <stdio.h>

int main() {
    int marks;

    printf("Enter your marks: ");
    scanf("%d", &marks);

    if (marks >= 0 && marks <= 39) {
        printf("Grade: F\n");
    } else if (marks >= 40 && marks <= 44) {
        printf("Grade: D\n");
    } else if (marks >= 45 && marks <= 49) {
        printf("Grade: C\n");
    } else if (marks >= 50 && marks <= 54) {
        printf("Grade: C+\n");
    } else if (marks >= 55 && marks <= 59) {
        printf("Grade: B\n");
    } else if (marks >= 60 && marks <= 69) {
        printf("Grade: B+\n");
    } else if (marks >= 70 && marks <= 79) {
        printf("Grade: A\n");
    } else if (marks >= 80 && marks <= 100) {
        printf("Grade: A+\n");
    } else {
        printf("Invalid marks!\n");
    }

    return 0;
}