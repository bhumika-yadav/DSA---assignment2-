//pattern 7
#include <stdio.h>
void print7(int n);

int main() {
    int n ;
    printf("enter the number");
    scanf("%d",&n);
    print7(n);

    return 0 ;
}
void print7(int n){
    for(int i = 0 ; i <n ;i ++){
        for (int j = 0; j<i; j++){
            printf("\t");
        }
        printf("*\n");
    }
}
