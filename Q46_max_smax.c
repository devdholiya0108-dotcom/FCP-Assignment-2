#include <stdio.h>
int main(){
    int i,n,max,smax,a[15];

    printf("Enter How many numbers you want to Enter : ");
    scanf("%d",&n);

    printf("Enter Numbers : ");

    for(i=0;i<n;i++){
        
        scanf("%d",&a[i]);
        
    }

    max=a[0];
    smax=a[0];

    for(i=0;i<n;i++){
        if(a[i]>max){
            smax=max;
            max=a[i];
        }
        else if(smax<a[i] && smax!=max){
            smax=a[i];
        }
    }

    printf("Max Number is : %d\n",max);
    printf("Second Max Number is : %d",smax);
    return 0;
}