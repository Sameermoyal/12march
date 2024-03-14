//30. Pattern 
#include <stdio.h>

int main()
{ int temp=1;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            printf("%d ",temp);
            temp+=2;
            
        }
        printf("\n"); 
    }
    return 0;
}
