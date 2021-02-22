#include <stdio.h>
void lol(int N, int prev_2);

int main()
{
    int N = 2048;
    lol(N, 1);
    return 0;
}

void lol(int N, int prev_2)
{
    if (N == prev_2) {
        printf("Yes\n");
        return;
    }
    if (N < prev_2){
        printf("No\n");
        return;
    }
    if (N > prev_2){
        return lol( N, prev_2 * 2);
    }
}

