#include<stdio.h>

int main (){
    int x,n;
    printf("input the ending number : ");
    scanf("%d",&n);
    printf("the odd numbers from 1 to 10 : \n");
        for (x=1;x<n;x=x+2){
            printf("%d\n",x);
        }
    return 0;
}

