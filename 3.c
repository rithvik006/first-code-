/**
 * @file project3
 * @brief This file contains if-else statements to generate grades based on the given score.
 * @details The program prompts the user to enter a score and then determines the corresponding grade based on predefined ranges.
 * @author Rithvik
 * @date 2024-10-10
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int score; // Variable to store the score entered by the user
    printf("Enter the score: ");

    // Check if the input is a valid integer
    if (scanf("%d", &score) != 1) {
        printf("Enter a correct value.\n");
        return 1;
    }

    // Determine the grade based on the score
    if (score >= 90 && score <= 100) {
        printf("Your grade is A\n");
    } else if (score >= 80 && score < 90) {
        printf("Your grade is B\n");
    } else if (score >= 70 && score < 80) {
        printf("Your grade is C\n");
    } else if (score >= 60 && score < 70) {
        printf("Your grade is D\n");
    } else if (score < 60) {
        printf("Your grade is F (fail)\n");
    } else {
        printf("Invalid score.\n");
    }

    return 0;
}
