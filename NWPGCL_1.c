
#include <stdio.h>

int main()
{
    int i,j;
    for(i=4;i<=7;i++){
        for(j=i+1;j<=7;j++){
            printf("{%d,%d},",i,j);
        }
    }

    return 0;
}
