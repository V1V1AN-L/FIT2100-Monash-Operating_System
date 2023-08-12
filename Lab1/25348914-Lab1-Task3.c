
#include <stdio.h>
int main(){
    float length, width, height;
    printf("Please enter the length, width, height in sequence(separated by spaces): ");
    scanf("%f %f %f", &length, &width, &height);
    float surfaceArea = width*length;
    float volume = surfaceArea*height;
    printf("The rectangular surface area is: %.2f\n The rectangular volume is: %.2f", surfaceArea, volume);
    return 0;
}
