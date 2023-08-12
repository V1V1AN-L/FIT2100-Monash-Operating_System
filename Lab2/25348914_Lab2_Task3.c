/*
 * Given the following struct type called UnitCode:
Create two variables of type UnitCode and initialise them with some appropriate
values. Write a C function that determines whether these two UnitCode variables
are equal to each other.
(Note: The program should perform comparison on all members of the UnitCode
struct when checking for equality. For string comparisons, you may use the strcmp
function from the <string.h> library as described in Section 2.4.3.)
 */
#include <string.h>

typedef struct
{
    char *FacID;
    int UnitID;
} UnitCode;


int compare_unicode(UnitCode unit1, UnitCode unit2){
    if(strcmp(unit1.FacID, unit2.FacID)==0 && unit1.UnitID == unit2.UnitID){
        return 1;
    }else{
        return 0;
    }
}