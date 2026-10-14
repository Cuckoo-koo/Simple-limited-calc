#include <stdio.h>
int main()
{
    char op; float result,num;
    printf("Enter wat to calculate (e.g. 9 + 4-3 or so): ");
    printf("Enter Your first Number");
    scanf("%f \n",&result);
        while (1)
        {
            printf("Enter operator (i.e +,-,*,/,= ): ");
            scanf("%c",&op);
           if(op == '=')
                break;
            printf("enter next number");
            scanf("%f",&num);
            switch (op)
            {
                case '+': result += num; 
                break;
                case '-': result -= num; 
                break;
                case '*': result *= num; 
                break;
                case '/':
                    if (num != 0) result /= num;
                    else 
                        printf("Division by zero! not possible baka!\n");
                    break;
                default: printf("unknown request\n");
            }
        }
        
    printf("Result = %.2f\n", result);
    return 0;
}