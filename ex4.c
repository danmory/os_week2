#include <stdio.h>

void swap(int *a,int *b){
    int temp;
    temp = *b;
    *b = *a;
    *a = temp;
}

int main(void){
    int a, b;
    printf("Write two numbers separated by space: \n");
    scanf("%d %d", &a, &b);
    swap(&a, &b);
    printf("After swapping: \n%d %d", a, b);

    return 0;
}
