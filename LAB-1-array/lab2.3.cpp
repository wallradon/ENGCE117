#include <stdio.h>
#include <string.h>

void explode(char str1[], char splitter, char str2[][10], int *count);

int main() {
    char out[20][10];  // อาร์เรย์เก็บคำที่แยกได้
    int num;           // เก็บจำนวนคำที่แยกได้

    char text[] = "Hello World From Me";  // ใช้ตัวแปchar[ ] แทนค่าคงที่
    explode(text, ' ', out, &num);

    // แสดงผลลัพธ์
    for (int i = 0; i < num; i++) {
        printf("str2[%d] = \"%s\"\n", i, out[i]);
    }
    printf("count = %d\n", num);

    return 0;
}

void explode(char str1[], char splitter, char str2[][10], int *count) {
    int index = 0;   // ตำแหน่งคำใน str2
    int pos = 0;     // ตำแหน่งในคำปัจจุบันของ str2[index]

    *count = 0;  // เริ่มต้นจำนวนคำที่แยกได้เป็น 0

    for (int i = 0; str1[i] != '\0'; i++) {
        if (str1[i] == splitter) {
            if (pos > 0) {
                str2[index][pos] = '\0';
                index++;
                pos = 0;
            }
        } else {
            str2[index][pos++] = str1[i];
        }
    }

    if (pos > 0) {
        str2[index][pos] = '\0';
        index++;
    }

    *count = index;
}