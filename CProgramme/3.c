#include <conio.h>

int main(){
    /* Variable declation */
    int firstNumber, secondNumber,amp;
    int sum, difference, product, modulo;
    float quotient;

    /* Taking input from user and storing it in firstNumber and secondNumber */
    printf("Enter First Number: ");
    scanf("%d", &firstNumber);
    printf("Enter Second Number: ");
    scanf("%d", &secondNumber);

    /* Adding two numbers */
    sum = firstNumber + secondNumber;
    /* Subtracting two numbers */
    difference = firstNumber - secondNumber;
    /* Multiplying two numbers*/
    product = firstNumber * secondNumber;
    /* Dividing two numbers by typecasting one operand to float*/
    quotient = (float)firstNumber / secondNumber;
    /* returns remainder of after an integer division */
    modulo = firstNumber % secondNumber;

    printf("\nSum = %d", sum);
    printf("\nDifference  = %d", difference);
    printf("\nMultiplication = %d", product);
    printf("\nDivision = %.3f", quotient);
    printf("\nRemainder = %d", modulo);

    getch();
    return 0;
}

