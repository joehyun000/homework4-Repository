#include<stdio.h>
#include<stdlib.h>

void main() {
    printf("[----- [박조현] [2021053017] -----]");
    int **x;  //이중 포인터 x정의
    printf("sizeof(x) = %lu\n", sizeof(x));   //x의 크기 출력. 이때 x는 이중 포인터이기 때문에, 포인터의 크기인 8바이트 출력
    printf("sizeof(*x) = %lu\n", sizeof(*x)); //*x의 크기 출력. 이떄 *x는 포인터이기 때문에, 포인터의 크기인 8바이트 출력
    printf("sizeof(**x) = %lu\n", sizeof(**x));  //**x의 크기 출력. 이때 **x는 int형 변수이기 때문에, int형 변수의 크기인 4바이트 출력
}
