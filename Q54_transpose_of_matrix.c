#include <stdio.h>
int main(){
    int i,j,a[3][3],t[3][3];
    
    printf("Enter number for 3*3 Matrix : ");

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
        printf("\nEnter value for row %d and column %d : ",i+1,j+1);
        scanf("%d",&a[i][j]);
        }        
    }

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            t[j][i]=a[i][j];
        }        
    }

    printf("\nOrigonal Matrix : \n");

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    printf("\nTranspose of Matrix : \n");

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",t[i][j]);
        }
        printf("\n");
    }

    return 0;
}