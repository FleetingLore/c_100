#include<stdio.h>

int main() {
    printf("%zd", strlen("abc\0def"));
}