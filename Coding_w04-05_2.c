#include <stdio.h>

void countCall() {
    int counter = 0;
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

// code นี้ counter ไม่มี static เลยทำให้ถูกสร้างใหม่ทุกครั้งที่เรียกฟังก์ชัน
// ความเเตกต่kงของ non-static variable คือ มันจะถูกรีเซ็ตเป็น 0 ทุกครั้งที่ฟังก์ชันถูกเรียกใช้
// สรุปได้ว่า code เเรก counter ถูกประกาศเป็น static เลยทำให้ค่านั้นไม่หายไปหลังจากจบฟังชัน เเต่ code ที่สอง counter ไม่มี static เลยทำให้นั้นถูกสร้างใหม่ทุกครั้งที่เรียกใช้ฟังก์ชัน