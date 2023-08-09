/**
 * Write a C program that accept 2 integers input as command line arguments then computes
the least common multiple (LCM) between two positive integers. For example, the LCM for
integers 12 and 78 is 156.
Hints: The command-line arguments in page 12
 */

int gcd(int a, int b){
    if(b == 0){
        return a;
    }
    return gcd(b, a % b);
}

int find_lcm(int number1, int number2){
    return (number1*number2)/gcd(number1,number2);
};

