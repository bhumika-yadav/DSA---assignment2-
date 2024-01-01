// pattern 2
#include <stdio.h>
void print(int n);
int main() {
    int n ;
    printf("enter the number");
    scanf("%d",&n);
    print(n);
    // take n = 5 to get the required the pattern.
    return 0;
}
void print(int n ){
 for (int i = 0; i < n ; i ++){
        for(int j = 0; j< n-i; j ++){
            printf("*\t");
        }
        printf("\n");
    }
}
