#include<stdio.h>

int main(){
    int n;
    printf("Enter a no. of rows  : ");
    scanf("%d",&n);

    // printf("Enter a no. of Columns  : ");
    // scanf("%d",&m);

    for(int i = 1;i <=n;i++){           // outer loop no of lines  
        for(int j=1;j<=n+1-i;j++){          // no. of columns 
            printf("* ");
        }
        printf("\n");                   // after each line enter.
    }
}