#include <stdio.h>
int FindNextPowerOfTwo(int n){
    n = n-1;
    while((n) & (n-1)){
        n = n & n-1;
    }
    return n<<1;
}
int main()
{
    //printf("Hello World");
    int n = 2047;
    printf("The next poer of 2 is: %d",FindNextPowerOfTwo(n));
    

    return 0;
}
