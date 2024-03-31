#include <stdio.h> 

struct student {  // 구조체를 정의
    char lastName[13];  // 13byte 크기의 문자 배열 선언 
    int studentId;      // 4byte 크기의 정수 선언
    short grade;        // 2byte 크기의 정수 선언
};

int main() {  
    printf("[----- [박조현] [2021053017] -----]");
    struct student pst;  // student 구조체 타입의 변수인 pst 선언

    printf("size of student = %ld\n", sizeof(struct student));  // student 구조체의 크기를 출력 = 24byte (13 + 4 + 2 + 5(padding) = 24)
    printf("size of int = %ld\n", sizeof(int));  // int 타입의 크기를 출력 = 4byte
    printf("size of short = %ld\n", sizeof(short));  // short 타입의 크기를 출력 = 2byte

    return 0;  
}