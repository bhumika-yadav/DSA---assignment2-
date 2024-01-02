// pattern 5
#include <stdio.h>

void print5i(int n);
void print5ii(int n);

int main() {
    int n ;
    printf("enter the number");
    scanf("%d",&n);
    print5i(n);
    print5ii(n);
    return 0;
}

void print5i(int n ){
    for(int i = 0; i<=n ;i++){
        for(int j = 0; j <=n-i; j++){
            printf(" ");
        }
        for(int j = 0 ; j < 2*i - 1; j++){
            printf("*");
        }
        printf("\n");
    }
}
void print5ii(int n ){
    for(int i = n-1; i<=n ; i ++){
        for(int j = 1; j<=i; j ++){
            printf(" ");
        }
        for(int j = 1 ; j <=2*n - (2*i - 1); j ++ ){
            printf("*");
        }
        printf("\n");
    }
}
