#include <stdio.h>
int main(){
    int i,j,a[10],temp,min,n;

    printf("Enter how many number for array : ");
    scanf("%d",&n);

    printf("Enter numbers : ");
    for(i=0;i<n;i++){
        
        scanf("%d",&a[i]);
        
    }

    for(i=0;i<n-1;i++){
        min=i;
        for(j=i+1;j<n;j++){
            if(a[j]<a[min]){
                min=j;
            }
        }
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }

    printf("Array with selection sorting.\n");
    for(i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
   
    return 0;

}