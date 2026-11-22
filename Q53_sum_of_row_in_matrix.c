#include <stdio.h>
int main(){
    int i,j,a[3][3],sum;
    
    printf("Enter number for 3*3 Matrix : ");

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
        printf("\nEnter value for row %d and column %d : ",i+1,j+1);
        scanf("%d",&a[i][j]);
        }        
    }

    for(i=0;i<3;i++){
        sum=0;
        for(j=0;j<3;j++){
            sum+=a[i][j];
        }        
        printf("\nSum of Row %d is %d ",i+1,sum);
    }

    return 0;
}