#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int **x;

	printf("---------[이시헌]---[2017038012]---\n");

	printf("sizeof(x) = %lu\n", sizeof(x)); //주소를 저장하는 크기가 4바이트
	printf("sizeof(*x) = %lu\n", sizeof(*x)); //주소를 저장하고 있기 때문에 4바이트
	printf("sizeof(**x) = %lu\n", sizeof(**x)); //주소가 가리키는 값이 int형이므로 4바이트

	return 0;
}
