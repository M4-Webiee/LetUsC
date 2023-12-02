#include <stdio.h>

int main() {
    int subjectMarks[5];
    int totalMarks = 500;
    float aggregateMarks, percentageMarks;

    printf("Enter marks:\n");
    
    for (int i = 0; i < 5; ++i) {
        scanf("%d", &subjectMarks[i]);
    }

    aggregateMarks = 0;
    for (int i = 0; i < 5; ++i) {
        aggregateMarks += subjectMarks[i];
    }

    percentageMarks = (aggregateMarks / totalMarks) * 100;

    printf("Aggregate marks: %.2f\n", aggregateMarks);
    printf("Percentage marks: %.2f%%\n", percentageMarks);

    return 0;
}

