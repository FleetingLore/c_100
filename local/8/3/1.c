#include <stdio.h>
#define N 40
int Average(int score[], int n);
void ReadScore(int score[], int n);

int main() {
    int score[N];
    int average;
    
    int n;
    printf("Input n:");
    scanf("%d", &n);
    
    ReadScore(score, n);
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

void ReadScore(int score[], int n) {
    printf("Input score: ");

    for (int i = 0; i < n; i++) {
        scanf("%d", &score[i]);
    }
}
