#include <stdio.h>

void countCall() {
    static int counter = 0;
    counter++;
    printf("Call Function: Counter = %d\n", counter);
}
int main() {
    printf("Starting function calls...\n");
    countCall();
    printf("After first call:\n");
    countCall();
    return 0;
}

// Code นี้ counter ถูกประกาศเป็น static เลยทำให้ค่าไม่หายไปหลังจากฟังก์ชันจบ ถ้าค่าเป็น 0 จะนับจาก 1 ไปเรื่อยๆ