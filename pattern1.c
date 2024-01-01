// pattern 1
#include <stdio.h>

void print(int n);

int main() {
    int n ;
    printf("enter the number");
    scanf("%d",&n);
    print(n);

    return 0;
}
void print(int n ){
    for(int i = 0; i <= n; i ++){
        for(int j =0; j <=i; j++){
            printf("*\t");
        }
        printf("\n");
    }
    }
    
