#include <stdio.h>

int main() {
    char nameInitial = 'K';            //Data type ที่ใช้ในบรรทัดนี้คือ char       
    int age = 20;                      //Data type ที่ใช้ในบรรทัดนี้คือ int    
    float weight =60.5;                 //Data type ที่ใช้ในบรรทัดนี้คือ float    
    char gender[] = "Male";           //Data type ที่ใช้ในบรรทัดนี้ก็คือ char []   
    printf("nameInitial = %c\n", nameInitial);
    printf("age = %d\n", age);
    printf("weight = %.1f\n", weight);
    printf("gender = %s\n", gender);
    return 0;
}