// pattern 4
#include <stdio.h>

void print4(int n);

int main() {
    int n ;
    printf("enter the number");
    scanf("%d",&n);
    print4(n);
    return 0;
}

void print4(int n){
    for(int i = 0; i <=n; i++){
        for (int j = 0 ; j<=i; j++){
            printf(" \t");
        }
        for(int j = 1; j<=n-i; j++){
            printf("*\t");
        }
        printf("\n");
    }
}






