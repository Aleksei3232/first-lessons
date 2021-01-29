#include <stdio.h>

int calculator_v1();
int calculator_v2();

int main() {
    calculator_v2();

    return 0;
}

int calculator_v1()
{
    int x = 0;
    int y = 0;
    char operator = 0;
    int answer = 0;


    printf("Калькулятор.\nВведите первое число:\n");
    scanf("%d", &x);
    
    printf("Введите второе число:\n");
    scanf("%d", &y);
    
    printf("Введите оператор:\n");
    scanf(" %c", &operator);


    switch (operator)
        {
        case '+' :
            answer = x + y;
            break;
        case '-' :
            answer = x - y;
            break;
        case '/' :
            answer = x / y;
            break;
        case '*' :
            answer = x * y;
            break;
            
    default:
        break;
    }
    
    printf ("Ответ: %d\n", answer);

    return 0;
}

int calculator_v2()
{
    int x = 0;
    int y = 0;
    char operator = 0;
    int answer = 0;


    printf("Калькулятор.\nВведите выражение:\n");
    scanf("%d %c %d", &x, &operator, &y);

    switch (operator)
        {
        case '+' :
            answer = x + y;
            break;
        case '-' :
            answer = x - y;
            break;
        case '/' :
            //answer = x / y;
            printf ("Ответ: %f\n", x / (float)y);
            return 0;
        case '*' :
            answer = x * y;
            break;
            
    default:
        break;
    }
    
    printf ("Ответ: %d\n", answer);

    return 0;
}