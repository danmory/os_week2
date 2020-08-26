#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(){
    int a;
    float b;
    double c;

    a = INT_MAX;
    b = FLT_MAX;
    c = DBL_MAX;

    printf("int: size %lu, max %d \n", sizeof(a), a);
    printf("float: size %lu, max %f \n", sizeof(b), b);
    printf("double: size %lu, max %f", sizeof(c), c);

    return 0;
}
