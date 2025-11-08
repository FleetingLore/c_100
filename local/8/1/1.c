// rust开发者的入乡随俗。

#include<stdio.h>

int _input_n;

int main() {
    int score[5];
    int total_score = 0;

    printf("Input the scores of five students:\n");
    for (int i = 0; i < 5; i++) {
        _input_n = scanf("%d", &score[i]);
        total_score += score[i];
    }

    printf("The average score is %f\n", ((float)total_score) / 5.0);

    return 0;
}
