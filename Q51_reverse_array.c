#include <stdio.h>
int main(){
    int i,n,a[10],c[10];

    printf("How many number you want to enter : ");
    scanf("%d",&n);
    
    printf("Enter number for array : ");

    for(i=0;i<n;i++){
        
        scanf("%d",&a[i]);
        
    }

    for(i=0;i<n;i++){
        
        c[i]=a[i];
        
    }

    for(i=0;i<n/2;i++){
        a[n-i-1]=a[i];
      }

    for(i=n/2;i<n;i++){
        a[n-i-1]=c[i];
      }
    
    printf("Origonal array is : ");

    for(i=0;i<n;i++){
        
        printf("%d\t ",c[i]);
         
    }      

      printf("\nAfter Reverse the array is : ");

    for(i=0;i<n;i++){
        
        printf("%d\t ",a[i]);
         
    }      
    
    return 0;
}