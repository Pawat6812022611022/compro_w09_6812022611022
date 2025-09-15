#include <stdio.h>

int main() {
    int i = 1;  //กำหนดค่า i
    while (i <= 10) //ใช้ while loop + continue เงือนไข  i <= 10
    {
        if(i == 6){ //ถ้า i == 6 
            i++;  // เพิ่ม ค่า i 
            continue;  // แล้วข้าม printf
        }
        
        printf("%d ",i); //แสดงค่า i โดย 6 จะไม่แสดง เพราะเกิดจากการ continue
        i++; //เพิ่มค่า i แล้วกลับไปเช็คเงื่อนไขจนกว่าจะหลุดเงื่อนไข
    }
}