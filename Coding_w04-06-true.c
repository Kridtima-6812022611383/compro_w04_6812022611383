#include <stdio.h>

const int GLOBAL_RATE = 10;
const int LOCAL_BONUS = 50;  

void calculate() {
    printf("GLOBAL_RATE = %d\n", GLOBAL_RATE);
    printf("LOCAL_BONUS = %d\n", LOCAL_BONUS);
}

int main() {
    calculate();
    printf("GLOBAL_RATE = %d\n", GLOBAL_RATE);
    printf("LOCAL_BONUS in main = %d\n", LOCAL_BONUS);  
    return 0;
}

//ค่าคงที่ GLOBAL_RATE ต่างจาก LOCAL_BONUS ตรงที่ GLOBAL_RATE ใช้เป็นค่าคงที่ที่ใช้ซ้ำหลายจุดในโปรแกรม ส่วน LOCAL_BONUS ใช้เฉพาะในฟังก์ชันเท่านั้น
//ถ้าเขียน GLOBAL_RATE=20; เเละ LOCAL_BONUS=80; จะทำให้เกิด error เพราะค่าคงที่ไม่สามารถเปลี่ยนเเปลงได้
//จาก คำถามข้อที่สาม ที่LOCAL_Bounus ไม่สามารถใช้ใน main ได้เพราะมันเป็นตัวเเปรที่ถูกประกาศในฟังก์ชัน calculate() เท่านั้น ดูได้จากCode_w04-06-wrong.c ที่ผมได้ทำการเขียนไว้
//สรุปได้ว่าดังนี้
//GLOBAL_RATE เป็นค่าคงเเบบ global ใช้ได้ทั่วทั้งโปรเเกรม
//ส่วน LOCAL_BONUS เป็นค่าคงที่ local ใช้ได้เฉพาะในฟังก์ชั่น calculate() เท่านั้น