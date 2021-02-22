#include <stdio.h>

void divider(int N, int div);
void divider2(int N, int div);
int main()
{
    int N = 0;
    printf("Введите целое число:\n");
    scanf("%d", &N);
    divider2(N, 2);
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

void divider2(int N, int div){
    while (N != div)
    {
        if (N % div == 0 ){
            printf("%d\n", div);
            //N = N / div;
            N /= div;
        }
        else div++;
    }
    printf("%d\n", div);

    return;
}
