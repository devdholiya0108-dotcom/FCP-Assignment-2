#include <stdio.h>
int main(){
    int i,positive=0,negative=0,zero=0,a[10];

    printf("Enter 10 number : ");

    for(i=0;i<10;i++){
        
        scanf("%d",&a[i]);
        
    }

    for(i=0;i<10;i++){
        if(a[i]>0){
            positive++;
        }
        else if(a[i]<0){
            negative++;
        }
        else{
            zero++;
        }
    }

    printf("\nPositive numbers are : %d\n",positive);
    printf("Negative numbers are : %d\n",negative);
    printf("Zero numbers are : %d\n",zero);

    return 0;
}