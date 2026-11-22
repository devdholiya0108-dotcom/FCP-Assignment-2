#include <stdio.h>
int main(){
    int i,j,a[3][3],max,min;
    
    printf("Enter number for 3*3 Matrix : ");

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
        printf("\nEnter value for row %d and column %d : ",i+1,j+1);
        scanf("%d",&a[i][j]);
        }        
    }
    
    max=a[0][0];
    min=a[0][0];

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(max<a[i][j]){
                max=a[i][j];
            }
        }        
    }
    
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(min>a[i][j]){
                min=a[i][j];
            }
        }        
    }

    printf("\nMaximum Number in Matrix is : %d",max);
    printf("\nMinimum Number in Matrix is : %d",min);

    return 0;
}