//27. Pattern 
#include <stdio.h>

int main()
{
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            if(i==5 || i==1 || j==1 || j==5 ){
                printf("*");
            }else if (j==2){
                printf("%d",j);
            }else if(j==3){
                printf("%d",j);
            }
            }else if (j==4){
                printf("%d",j);
            }else{
                printf(" ");
            }
            
        }
        printf("\n"); 
    }
    
