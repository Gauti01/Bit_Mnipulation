#include <stdio.h>

int main()
{
    //printf("Hello World");
    int n=0;
    printf("Enter the value you want to check for even odd:\t");
    scanf("%d",&n);
    if(n&1)
    printf("\n %d is odd",n);
    else
    printf("\n %d is even",n);

    return 0;
}
