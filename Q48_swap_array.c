#include <stdio.h>
int main(){
    int i,c[10],a[10],b[10];

    printf("Enter 10 number for first array : ");

    for(i=0;i<10;i++){
        
        scanf("%d",&a[i]);
        
    }

    printf("\nEnter 10 number for second array : ");

    for(i=0;i<10;i++){
        
        scanf("%d\t",&b[i]);
        
    }

    for(i=0;i<10;i++){
        c[i] = a[i];
        a[i] = b[i];
        b[i] = c[i];
      }

    printf("\nAfter swaping the array first array is : ");

        for(i=0;i<10;i++){
        
        printf("%d\t",a[i]);
        
    }

    printf("\nAfter swaping the array second array is : ");

        for(i=0;i<10;i++){
        
        printf("%d\t",b[i]);
        
    }    
    
    return 0;
}