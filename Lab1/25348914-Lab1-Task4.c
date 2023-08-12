#include <stdio.h>
int Addition(int first, int second);
int Subtraction(int first, int second);
int Multiplication(int first, int second);
float Division(int first, int second);

int main(){
    printf("Please enter two integer numbers(separate by space): ");
    int first, second;
    scanf("%d %d", &first, &second);
    printf("Addition result is: %d\n"
           "Subtraction result is (first-second number): %d\n"
           "Multiplication result is: %d\n"
           "Division result is (first/second number): %.2f",
           Addition(first, second),Subtraction(first, second), Multiplication(first, second), Division(first, second));
    return 0;
}

int Addition(int first, int second){
    return first+second;
}

int Subtraction(int first, int second){
    return first-second;
}

int Multiplication(int first, int second){
    return first*second;
}

float Division(int first, int second){
    return (float)first/second;
}