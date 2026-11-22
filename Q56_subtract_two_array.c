#include <stdio.h>
int main(){
    int i,j,a[3][3],b[3][3],s[3][3];
    
    printf("Enter number for 1st 3*3 Matrix : ");

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
        printf("\nEnter value for row %d and column %d : ",i+1,j+1);
        scanf("%d",&a[i][j]);
        }        
    }

    printf("Enter number for 2nd 3*3 Matrix : ");

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
        printf("\nEnter value for row %d and column %d : ",i+1,j+1);
        scanf("%d",&b[i][j]);
        }        
    }

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            s[i][j]=a[i][j]-b[i][j];
        }        
    }

    printf("First 3*3 Matrix is :\n");

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
        printf("%d\t",a[i][j]);
        }        
        printf("\n");
    }
    
    printf("Second 3*3 Matrix is :\n");

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
        printf("%d\t",b[i][j]);
        }        
        printf("\n");
    }

    printf("Subtraction of both 3*3 Matrix is :\n");

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
        printf("%d\t",s[i][j]);
        }        
        printf("\n");
    }

    return 0;
}