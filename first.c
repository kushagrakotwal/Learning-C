#include <stdio.h>

int main() {
    int n, i;
    char name[50];
    float marks, total = 0, highest = 0;
    char topper[50];

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("\nEnter name of student %d: ", i);
        scanf("%s", name);

        printf("Enter marks: ");
        scanf("%f", &marks);

        total += marks;

        if (marks > highest) {
            highest = marks;
            sprintf(topper, "%s", name);
        }
    }

    printf("\n===== RESULT =====\n");
    printf("Average Marks: %.2f\n", total / n);
    printf("Topper: %s (%.2f marks)\n", topper, highest);

    return 0;
}