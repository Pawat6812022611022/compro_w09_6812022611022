#include <stdio.h>

int main() {
    int i = 1; //กำหนดค่าตัวแปร i 
    do {                            // ใช้ do while loop + continue
        if (i == 6) {    //ถ้า i == 6 
            i++;       // บวก i เพิ่ม 1
            continue;  // ถ้า i == 6 ให้ข้าม printf
        }
        printf("%d ", i); //แสดงค่า i โดย 6 จะไม่แสดง เพราะเกิดจากการ continue
        i++;  // บวก i เพิ่ม 1 
    } while (i <= 10); //เช็คเงื่อนไข ถ้ายังไม่หลุดให้วนกลับไปทำซ้ำอีกจนกว่าจะหลุด
    return 0;
}