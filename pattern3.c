// pattern 3
#include <stdio.h>

void print3(int n);

int main() {
    int n ;
    printf("enter the number");
    scanf("%d",&n);
    print3(n);
    return 0;
}

void print3(int n){
    for(int i = n-1; i >= 0; i --){
        for (int j = 0; j<=i ; j++){
            printf(" \t");
        }
            for( int j = 1; j<=n-i; j ++){
            printf("*\t");
        }
        printf("\n");
    }
}
