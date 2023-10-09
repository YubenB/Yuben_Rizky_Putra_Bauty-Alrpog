#include <stdio.h>

int main()
{
    while (1) // A loop to keep the program running after displaying the output
    {
        char op;
        double firstNumber, secondNumber;
        double results;
        printf("Choose what type of operator/multiplication you want to use (+,-,*,/):");
        scanf(" %c", &op);
        printf("Enter the first number:");
        scanf("%lf", &firstNumber);
        printf("Enter the second number:");
        scanf("%lf", &secondNumber);

        switch (op)
        {
        case '+':
            printf("%.1lf + %.1lf = %.1lf \n\n", firstNumber, secondNumber, firstNumber + secondNumber);
            break;
        case '-':
            printf("%.1lf - %.1lf = %.1lf \n\n", firstNumber, secondNumber, firstNumber - secondNumber);
            break;
        case '*':
            printf("%.1lf * %.1lf = %.1lf \n\n", firstNumber, secondNumber, firstNumber * secondNumber);
            break;
        case '/':
            printf("%.1lf / %.1lf = %.1lf \n\n", firstNumber, secondNumber, firstNumber / secondNumber);
            break;
        // operator doesn't match any case constant
        default:
            printf("Error! operator is not correct \n");
        }
        while (getchar() != '\n')
            ;
        printf("Press enter to restart the program or press CTRL+C to exit");
        getchar();
    }
    return 0;
}
