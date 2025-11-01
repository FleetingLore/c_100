#include <stdio.h>

int main() {

    int count = 0;

    for(int i = 1; i <= 4; i++) {
        for(int j = 1; j <= 4; j++) {
            for(int k = 1; k <= 4; k++) {
                if (i != j && i != k && i != k) {
                    printf("%d%d%d\n", i, j, k);
                    count++;
                }
            }
        }
    }

    printf("count: %d\n", count);

    return 0;
}


