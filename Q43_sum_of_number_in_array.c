#include <stdio.h>
int main(){
    int i,sum=0,a[10];

    printf("Enter 10 number : ");

    for(i=0;i<10;i++){
        
        scanf("%d",&a[i]);
        
    }

    for(i=0;i<10;i++){
        sum+=a[i];
    }

    printf("Sum of 10 digits is : %d",sum);

    return 0;
}