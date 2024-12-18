#include <stdio.h>

void GetMatrix(int value[], int *row, int *col);

int main() {
    int m = 0, n = 0;
    int data[100]; // กำหนดอาร์เรย์ขนาดใหญ่พอสำหรับข้อมูลเมทริกซ์

    // รับจำนวนแถวและคอลัมน์
    GetMatrix(NULL, &m, &n);

    // รับค่าของเมทริกซ์
    GetMatrix(data, &m, &n);

    // แสดงค่าที่รับมา
    printf("Matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", data[i * n + j]);
        }
        printf("\n");
    }

    return 0;
}

void GetMatrix(int value[], int *row, int *col) {
    if (value == NULL) {
        // รับจำนวนแถวและคอลัมน์
        printf("How many rows and cols: ");
        scanf("%d %d", row, col);
    } else {
        // รับค่าของเมทริกซ์
        printf("Enter matrix values:\n");
        for (int i = 0; i < (*row) * (*col); i++) {
            scanf("%d", &value[i]);
        }
    }
}
