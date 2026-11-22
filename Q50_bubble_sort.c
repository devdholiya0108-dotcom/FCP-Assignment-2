#include <stdio.h>
int main(){
    int i,j,a[10],temp,n;

    printf("Enter how many number for array : ");
    scanf("%d",&n);

    printf("Enter numbers : ");
    for(i=0;i<n;i++){
        
        scanf("%d",&a[i]);
        
    }

    for(i=0;i<n;i++){
        for(j=0;j<n-i;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("Array with bubble sorting.\n");
    for(i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
   
    return 0;
}