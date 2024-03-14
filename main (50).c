// second last
#include <stdio.h>

int main()
{ 
    for(int i=1;i<=5;i++){
        int temp=0;
        for(int j=1;j<=5;j++){
            printf("%d ",i+temp);
            temp=temp+5;
            
        }
        printf("\n"); 
    }
    return 0;
}
