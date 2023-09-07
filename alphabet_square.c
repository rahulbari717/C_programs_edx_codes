#include<stdio.h>

int main(){
    int n;
    printf("Enter a no. of rows  : ");
    scanf("%d",&n);

    for(int i = 1;i<=n;i++){           // outer loop no of lines  
        int a = 1;
        for(int j=1;j<=n;j++){          // no. of columns // if i/n is there then it becomes traingle.
            int d = a+64;
            char ch = (char)d;
            printf("%c ",d);
            a++;
        }
        printf("\n");                   // after each line enter.
    }
}