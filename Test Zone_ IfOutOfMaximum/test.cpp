#include <stdio.h>
#include <math.h>

int main(){
    char n1;
    int n2;

    n1 = 100;
    n2 = 100;
    printf("%d\n", n1);
    printf("%d\n", n2);

    n1 = 256;
    n2 = 256;
    printf("%d\n", n1);
    printf("%d\n", n2);

    n1 = 2147483648;
    n2 = 2147483648;
    printf("%d\n", n1);
    printf("%d\n", n2);

    for(int i=0; i<6; i++){
        for(int j=0; j<10; j++){
            n1 = pow(i, j);
            n2 = pow(i, j);
            printf("%d %d %15d %15d %15d\n", i, j, n1, n2, pow(i, j));
        }
    }
    return 0;
}