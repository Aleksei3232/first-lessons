#include <stdio.h>

void divider(int N, int div);
int main()
{

    int N = 256;
    divider(N, 2);
    return 0;
}

void divider(int N, int div)
{
    if (N == div){
        printf("%d \n", div);
        return;
    }

    if (N % div == 0){
        printf("%d \n", div);
        return divider ( N / div, div);
    }
    else { // N % div != 0
        return divider(N, ++div);
    }
}
    


