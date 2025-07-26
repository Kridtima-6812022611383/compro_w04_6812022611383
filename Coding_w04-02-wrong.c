include stdio.h //Syntax ผิดตรง include กับ studio.h เพราะขาด # เเละ <>

int main(){
    int a = 10 //syntax ผิดตรงที่ int a = 10 เพราะขาด ; ปิดท้าย
    printf("a = %d", a) // syntax ผิดตรงที่ ไม่มี ; ปิดทั้าย
    return 0 //ผิดตรงที่ไม่มี ; ปิดท้ายเช่นกัน
}