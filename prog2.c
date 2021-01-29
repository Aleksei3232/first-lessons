#include <stdio.h>


int main()
{
    int i;

    printf( "Введите пятизначное число:");
    scanf( "%d", &i);
    printf( "\nВы ввели:%d \n", i);

    if(i > 99999)
        return 0;
    else if (i < 9999)
        return 0;
    

    int x = i;
    while (x != 0)
    {
        printf("%d\n", x % 10);
        x /= 10;
    }
    



    return 0;
}