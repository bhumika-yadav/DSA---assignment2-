//pattern 8
#include <stdio.h>
void print8(int n);

int main() {
    int n ;
    printf("enter the number");
    scanf("%d",&n);
    print8(n);
    return 0 ;
}

void print8(int n){
    for(int i = 0 ; i <n ;i ++){
        for (int j = 0; j<n-i; j++){
            printf("\t");
        }
        printf("*\n");
    }
}
