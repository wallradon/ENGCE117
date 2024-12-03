#include <stdio.h>

int GetMatrix( int row, intcol ) ;

int main() {

    int data, m, n, i, j ;

    GetMatrix( &m, &n ) ;

    data = new int[m n]; // จองหน่วยความจำสำหรับอาเรย์ 1 มิติ

    // รับค่าจากผู้ใช้
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("a[%d][%d]: ", i, j);
            scanf("%d", &data[i * n + j]); // เข้าถึงตำแหน่งในอาเรย์
        }
    }
    printf("\nMatrix values:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", data[i * n + j]); 
        }
        printf("\n"); // ขึ้นบรรทัดใหม่หลังจากพิมพ์ค่าของแต่ละแถว
    }

    // ลบหน่วยความจำ
    delete[] data ;

    return 0 ;
}//end function

int GetMatrix( int row, intcol ) {
    // รับค่าจำนวนแถวและคอลัมน์
        printf("How many rows, cols? ") ;
        scanf("%d %d", row, col ) ;
        return 0 ;
}//end function
