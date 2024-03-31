#include <stdio.h>

// student1 구조체 선언
struct student1 {
    char lastName;
    int studentId;
    char grade;
};

// student2 구조체 typedef로 선언
typedef struct {
    char lastName;
    int studentId;
    char grade;
} student2;

int main() {

    // student1 타입의 st1 변수 선언 및 초기화
    struct student1 st1 = {'A', 100, 'A'};
    printf("st1.lastName = %c\n", st1.lastName);  // st1의 lastName인 'A'를 출력
    printf("st1.studentId = %d\n", st1.studentId);  // st1의 studentId인 100을 출력
    printf("st1.grade = %c\n", st1.grade);  // st1의 grade 'A'를 출력

    // student2 타입의 st2 변수 선언 및 초기화
    student2 st2 = {'B', 200, 'B'};
    printf("\nst2.lastName = %c\n", st2.lastName);  // st2의 lastName인 'B'를 출력합니다.
    printf("st2.studentId = %d\n", st2.studentId);  // st2의 studentId인 200을 출력합니다.
    printf("st2.grade = %c\n", st2.grade);  // st2의 grade인 'B'를 출력합니다.

    // student2 타입의 st3 변수 선언
    student2 st3;
    st3 = st2;  // st2의 값을 st3에 복사
    printf("\nst3.lastName = %c\n", st3.lastName);  // st3의 lastName을 출력
    printf("st3.studentId = %d\n", st3.studentId);  // st3의 studentId를 출력
    printf("st3.grade = %c\n", st3.grade);  // st3의 grade를 출력

    /* equality test */
    // st3와 st2의 모든 대응하는 값들이 같은지 확인하기위해 if문 사용
    if(st3.lastName == st2.lastName && st3.studentId == st2.studentId && st3.grade == st2.grade)
        printf("equal\n");  // 대응하는 값들이 모두 같다면 equal을 출력
    else
        printf("not equal\n");  // 하나라도 다르면 not equal을 출력

    return 0;  
}
