// pattern 6
#include <stdio.h>
void print6i(int n);
void print6ii(int n);
int main() {
    int n ;
    printf("enter the number");
    scanf("%d",&n);
    print6i(n);
    print6ii(n);
    
    return 0;
}
void print6i(int n ){
       for(int i = 1; i<=n ;i++){
        for(int j = 0; j <=n-i; j++){
         printf("*\t");
        }
        for(int j = 0 ; j < 2*i - 1; j++){
            printf(" \t");
        }
        for(int j = 0; j <=n-i; j++){
         printf("*\t");
        }
        printf("\n");
    }
}
void print6ii(int n ){
    for(int i = 2 ; i<=n ; i ++){
        for(int j = 1; j<=i; j ++){
            printf("*\t");
        }
        for(int j = 1 ; j <=2*n - (2*i - 1); j ++ ){
            printf(" \t");
        }
        for(int j = 1; j<=i; j ++){
            printf("*\t");
        }
        printf("\n");
    }
}
