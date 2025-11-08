#include<stdio.h>
#define MONTHS 12

int main() { 
    int days[MONTHS] = {
        31, 28, 31, 30,
        31, 30, 31, 31,
        30, 31, 30, 31
    };

    int month = -1;
    while(month < 1 || month > 12) {
        printf("Input a month:");
        scanf("%d", &month);
    }

    printf("The number of days is %d\n", days[month - 1]);
    return 0;
}
