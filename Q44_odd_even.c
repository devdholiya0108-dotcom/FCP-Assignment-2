#include <stdio.h>
int main(){
    int i,even=0,odd=0,a[10];

    printf("Enter 10 number : ");

    for(i=0;i<10;i++){
        
        scanf("%d",&a[i]);
        
    }

    for(i=0;i<10;i++){
        if(a[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }

    printf("\nOdd numbers are : %d\n",odd);
    printf("Even numbers are : %d\n",even);

    return 0;
}