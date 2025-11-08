#include <stdio.h>
#define N 40
int Average(int score[], int n);
void ReadScore(int score[], int n);

int main() {
    int score[N];
    int average;
    
    int n;
    n = ReadScore(score, n);
    
    average = Average(score, n);

    printf("Average score is %d\n", average);

    return 0;
}

int Average(int score[], int n) {
    if (n < 1) {
        return -1;
    }

    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += score[i];
    }

    return sum / n;
}

int ReadScore(int score[], int n) {
    printf("Input score: ");

    int i = 0;
    while (score[i] >= 0) {
        i += 1;
        printf("Input score:");
        scanf("%d", &score[i]);
    }

    return i;
}
