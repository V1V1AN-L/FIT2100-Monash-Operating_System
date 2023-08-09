#include "25348914_Lab2_Task1.c"
#include "25348914_Lab2_Task2.c"
#include "25348914_Lab2_Task3.c"
#include "25348914_Lab2_Task4.c"
#include <stdio.h>

int main(){
//    int res = find_lcm(12,78);
//    printf("%d", res);


//    int array[] = {1,2,3,4,5};
//    int* res = find_closest_to_average(array, 5);
//    printf("%d", *res);


    UnitCode unit1 = {"FIT", 2100};
    UnitCode unit2 = {"FIT", 2100};
    int res = compare_unicode(unit1, unit2);
    printf("%d", res);

    return 0;
}
