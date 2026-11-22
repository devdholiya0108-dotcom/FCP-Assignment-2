#include <stdio.h>
int main(){
    int i,sum[10],a[10],b[10];

    printf("Enter 10 number for first array : ");

    for(i=0;i<10;i++){
        
        scanf("%d",&a[i]);
        
    }

    printf("\nEnter 10 number for second array : ");

    for(i=0;i<10;i++){
        
        scanf("%d\t",&b[i]);
        
    }

    for(i=0;i<10;i++){
        sum[i] = a[i]  + b[i];
      }

    printf("\nSum array is : ");

        for(i=0;i<10;i++){
        
        printf("%d\t",sum[i]);
        
    }
    
    return 0;
}