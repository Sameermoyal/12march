// snack pattern
#include <stdio.h>

int main()
{ 
    for(int i=1;i<=5;i++){
        
        for(int j=1;j<=9;j++){
           if(j==1 || j==3 || j==5 || j==7 || j==9){
                printf("*");
           }else if(i==5 && j==2){
                 printf("*");
               
           }else if(i==1 && j==4){
                 printf("*");
               
           }else if(i==5 && j==6){
                 printf("*");
               
           }else if(i==1 && j==8){
                 printf("*");
               }else{
               printf(" ");
           }
           
           
        }
        printf("\n"); 
    }
    return 0;
}
