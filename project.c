#include <stdio.h>

/* Function to convert seconds into hours, minutes, seconds
   and count total iterations */
void convertTime(int total_seconds, int *h, int *m, int *s, int *iterations) {
    int temp_seconds = total_seconds;

    *h = 0;
    *m = 0;
    *s = 0;
    *iterations = 0;

    // Calculate hours
    while (temp_seconds >= 3600) {
        temp_seconds -= 3600;
        (*h)++;
        (*iterations)++;
    }

    // Calculate minutes
    while (temp_seconds >= 60) {
        temp_seconds -= 60;
        (*m)++;
        (*iterations)++;
    }

    // Remaining seconds
    *s = temp_seconds;
}

int main() {
    int total_seconds;
    int h, m, s;
    int iteration_count;

    printf("Loop Optimization Demo (Function-Based)\n");
    printf("--------------------------------------\n");
    printf("Enter the total number of seconds: ");

    if (scanf("%d", &total_seconds) != 1 || total_seconds < 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    // Call the function
    convertTime(total_seconds, &h, &m, &s, &iteration_count);

    // Display result
    printf("\nResult:\n");
    printf("%02d hours, %02d minutes, %02d seconds\n", h, m, s);
    printf("Total Iterations: %d\n", iteration_count);

    return 0; 
}
 