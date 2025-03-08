## ข้อบังคับ
1. ต้องกรอกรายละเอียดของตนเองในไฟล์ `student_info.txt` โดยมีข้อมูลสำคัญที่ต้องกรอกคือ
   - รหัสนักศึกษา เช่น 678888888-8
   - รหัสวิชา เช่น ENGCE117
   - เทอมที่เรียน เช่น 2/2567
2. นักศึกษาต้องทำการเขียนโค้ดโปรแกรมที่ไฟล์ `student_program.cpp`
   
## โจทย์
จงเรียนโปรแกรมดังต่อไปนี้
### ส่วนที่ 1 : Greedy algorithm - Shortest Path
เขียนโปรแกรมหาค่า Shortest Path ตามทฤษฏีที่ได้เรียนในห้องเรียน โดยการรับค่าจำนวนเมืองที่มีทั้งหมด จากนั้นรับค่าระยะทางในการเดินทางไปในแต่ละเมือง

### ส่วนที่ 2 : Greedy algorithm - Knapsack Problem
เขียนโปรแกรมในการแก้ไขปัญหา Knapsack โดยใช้หลักการของ Greedy algorithm โดยการรับค่าจำนวนเพชรทั้งหมดที่อยู่ในถ้ำเพื่อใส่ในเป้ พร้อมทั้งระบุน้ำหนัก และมูลค่าของเพชรทั้งหมด (ตามที่ได้เรียนมาในห้องเรียน)

## FIX CODE
```c++
#include <stdio.h>

//----| Greedy Algorithm : Shortest Path
void SetWeight( int *Town, int n, int i, int j, int Weight ) ;
int *Dijkstra( int *L, int n ) ;
void InitializeGraph( int *g, int n, int value ) ;
void PrintGraph( int *g, int n ) ;
void PrintArrayAndMax(int *arr, int size) ;

//----| Greedy Algorithm : Knapsack Problem
int *KnapsackGreedy( int *w, int *v, int n, int wx ) ;

int main() {
    printf( "Greedy Algorithm : Shortest Path\n" ) ;
    int n = 5, i, j, *d, *g, km ;
    g = new int[ n * n ] ;
    
    printf( "Enter town : " ) ;
    scanf( "%d", &n ) ;
    
    InitializeGraph( g, n, -1) ;
    for( i = 0 ; i < n ; i++ ) {
        for( j = 0 ; j < n ; j++ ) {
            printf( "Enter km [%d, %d] : ", i, j ) ;
            scanf( "%d", &km ) ;
            SetWeight( g, n, i, j, km ) ;    
        }
    }
    
    PrintGraph(g, n);
    
    d = Dijkstra( g, n ) ;
    PrintArrayAndMax(d, n - 1);
    
    printf( "\nGreedy Algorithm : Knapsack Problem\n" ) ;
    int wx = 11, ans = 0 ;
    n = 5 ;
    
    printf( "Enter n : " ) ;
    scanf( "%d", &n ) ;
    printf( "Enter wx : " ) ;
    scanf( "%d", &wx ) ;
    
    int *w = new int[ n ] ;
    int *v = new int[ n ] ;
    
    for( i = 0 ; i < n ; i++ ) {
        printf( "weight for item %d : ", i ) ;
        scanf( "%d", &w[ i ] ) ;
    }
    for( i = 0 ; i < n ; i++ ) {
        printf( "value for item %d : ", i ) ;
        scanf( "%d", &v[ i ] ) ;
    }
    
    int *x = KnapsackGreedy( w, v, n, wx ) ;
    for( int i = 0 ; i < n ; i++ ) printf( "%d ", x[ i ] ) ;
    for( int i = 0 ; i < n ; i++ ) if( x[ i ] == 1 ) ans += v[ i ] ;
    printf( "\nValue = %d", ans ) ;
    return 0 ;
}
```

## TEST CASE
### Input
```bash
Enter town : 5
Enter km [0, 0] : -1
Enter km [0, 1] : 100
Enter km [0, 2] : 80
Enter km [0, 3] : 30
Enter km [0, 4] : 10
Enter km [1, 0] : -1
Enter km [1, 1] : -1
Enter km [1, 2] : 20
Enter km [1, 3] : -1
Enter km [1, 4] : -1
Enter km [2, 0] : -1
Enter km [2, 1] : -1
Enter km [2, 2] : -1
Enter km [2, 3] : -1
Enter km [2, 4] : -1
Enter km [3, 0] : -1
Enter km [3, 1] : 20
Enter km [3, 2] : 40
Enter km [3, 3] : -1
Enter km [3, 4] : -1
Enter km [4, 0] : -1
Enter km [4, 1] : -1
Enter km [4, 2] : -1
Enter km [4, 3] : 20
Enter km [4, 4] : -1

Enter n : 5
Enter wx : 11
weight for item 0 : 1
weight for item 1 : 2
weight for item 2 : 5
weight for item 3 : 6
weight for item 4 : 7
value for item 0 : 1
value for item 1 : 6
value for item 2 : 18
value for item 3 : 22
value for item 4 : 28
```
### Output
```bash
Greedy Algorithm : Shortest Path
  -1  100   80   30   10 
  -1   -1   20   -1   -1 
  -1   -1   -1   -1   -1 
  -1   20   40   -1   -1 
  -1   -1   -1   20   -1 
50 70 30 10 
Total Range = 70
Greedy Algorithm : Knapsack Problem
1 1 0 0 1 
Value = 35
```
