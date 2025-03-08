#include <stdio.h>
#include <string.h>

void explode( char str1[], char splitters[], char str2[][20], int *count );

int main() {
    char out[20][20];  // อาร์เรย์เก็บคำที่แยกได้
    int num;           // เก็บจำนวนคำที่แยกได้
    
    char text[50] = "fruit_apple fruit_orange fruit_banana";  
    char splitters[10] = " ,!:-*/ ";
    explode(text, splitters, out, &num);

    for (int i = 0; i < num; i++) {
        printf("str2[%d] = \"%s\"\n", i, out[i]);
    }
    printf("count = %d\n", num);
    return 0;
}

void explode( char str1[], char splitters[], char str2[][20], int *count ) {
    int index = 0, pos = 0, splitter_check = 0;
    *count = 0;
    int splitter_count = strlen(splitters);

    for (int i = 0; str1[i] != '\0'; i++) {
        splitter_check = 0;
        for (int s = 0; s < splitter_count; s++) {
            if (str1[i] == splitters[s]) {
                splitter_check = 1;
                break;
            }
        }

        if (splitter_check == 1) {
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
