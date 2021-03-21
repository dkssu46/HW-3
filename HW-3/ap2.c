#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int list[5];
	int *plist[5];

	printf("---------[이시헌]---[2017038012]-------\n\n");

	list[0] = 10;
	list[1] = 11;

	plist[0] = (int*)malloc(sizeof(int)); //동적 할당
	printf("list[0] = %d\n", list[0]); // 대입에 의해 10
	printf("address of list = %p\n", list); //배열의 이름은 배열의 시작 주소
	printf("address of list[0] = %p\n", &list[0]); // 배열의 첫 원소의 주소는 배열의 시작 주소
	printf("address of list + 0 = %p\n", list+0); //0을 더해도 그냥 list이므로 배열의 시작 주소
	printf("address of list + 1 = %p\n", list+1); //1을 더하면 int만큼의 4바이트가 이동. list[1]의 주소와 동일
	printf("address of list + 2 = %p\n", list+2); //2를 더하는 것 역시 동일
	printf("address of list + 3 = %p\n", list+3);
	printf("address of list + 4 = %p\n", list+4);
	printf("address of list[4] + 0 = %p\n", &list[4]); //그래서 list+4 == &list[4]가 됨.

	free(plist[0]); //메모리 해제
}
