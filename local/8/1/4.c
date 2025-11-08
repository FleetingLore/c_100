#include<stdio.h>

int main() {
    int a = 1,
        c = 2,
        b[5] = {0};
    

    int i;
    printf("%p, %p, %p\n", b, &c, &a);
    for (i = 0; i <= 8; i++) {
        b[i] = i;
        printf("%d  ", b[i]);
    }

    printf("\n");
    printf("c = %d,\n", c);
    printf("a = %d,\n", a);
    
    printf("i = %d,\n", i);
    
    return 0;
}