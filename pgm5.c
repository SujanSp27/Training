#include <stdio.h>

int main() {
    // List of assignments and exams with their scores
    struct Grade {
        char name[50];
        int score;
    };

    // Create an array of grade structures
    struct Grade gradebook[] = {
        {"Assignment 1", 80},
        {"Assignment 2", 90},
        {"Exam 1", 85}
    };

    int total_score = 0;
    int count = sizeof(gradebook) / sizeof(gradebook[0]);

    // Loop to calculate total score
    for (int i = 0; i < count; i++) {
        total_score += gradebook[i].score;
    }

    // Calculate the average grade
    float average_grade = (float)total_score / count;

    // Display gradebook details
    printf("Gradebook Details:\n");
    for (int i = 0; i < count; i++) {
        printf("%s: %d\n", gradebook[i].name, gradebook[i].score);
    }

    // Display total score and average grade
    printf("\nTotal Score: %d\n", total_score);
    printf("Average Grade: %.2f\n", average_grade);

    return 0;
}
