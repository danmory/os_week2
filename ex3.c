#include <stdio.h>


void printTriangle(int n){
    int whitespace = n - 1; // number of blank symbols in the start of a row
    for (int i = 1; i <= n; ++i) {
        for (int k = 0; k < whitespace; ++k) {
            printf(" ");
        }
        for (int j = 1; j <= 2*i-1; ++j) {
            printf("*");
        }
        printf("\n");
        whitespace--;
    }
}

/* additional figure (5th task) */
void printSquare(int n){
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("*");
        }
        printf("\n");
    }
}

int main(int argc, char *argv[]){

    int n, figureNumber = 0; // figureNumber tells which figure to print(0 - triangle(by def), 1 - square)

    /* if only argument N was passed then print triangle
     * else there are also figureNumber which determine which figure should be printed
     * */
    if (argc == 2) {
        if (sscanf(argv[1], "%d", &n) != 1) {
            return -1;
        }
    }
    if (argc > 2) {
        if (sscanf(argv[1], "%d", &n) != 1) {
            return -1;
        }
        if (sscanf(argv[2], "%d", &figureNumber) != 1) {
            return -1;
        }
    }

    if (figureNumber == 0) printTriangle(n);
    else if (figureNumber == 1) printSquare(n);
}
