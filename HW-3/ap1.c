#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int list[5];
	int *plist[5] = {NULL,};

	printf("---------[이시헌]---[2017038012]-------\n\n");

	plist[0] = (int*)malloc(sizeof(int));

	list[0] = 1;
	list[1] = 100;

	*plist[0] = 200;

	printf("value of list[0] = %d\n", list[0]);	//대입 연산에 의해 1
	printf("address of list[0] = %p\n", &list[0]); //첫 원소의 주소
	printf("value of list = %p\n", list); // 배열의 이름은 배열 첫 원소 주소를 나타냄
	printf("address of list (&list) = %p\n",&list); //배열의 주소는 배열 첫 원소의 주소

	printf("---------------------------------------\n\n");
	printf("value of list[1] = %d\n", list[1]); //대입 연산에 의해 100
	printf("address of list[1] = %p\n", &list[1]); //첫 원소에서 4바이트 더해진 주소(int형이기 때문)
	printf("value of *(list+1) = %d\n", *(list+1)); //list+1은 첫 원소의 주소에 4바이트(int형 1칸)을 더한 것과 같음. 참조하면 100
	printf("address of list+1 = %p\n",list+1); ////주소 역시 list[1]과 동일한 지점을 가리키게 됨.

	printf("---------------------------------------\n\n");
	printf("value of *plist[0] = %d\n", *plist[0]); //대입에 의해 200
	printf("&plist[0] = %p\n", &plist[0]); //포인터 배열의 시작 주소.
	printf("&plist = %p\n", &plist); //위와 같은 값, 포인터 배열의 시작 주소.
	printf("plist = %p\n", plist); //배열의 이름은 배열의 시작 주소를 나타냄
	printf("plist[0] = %p\n", plist[0]); //포인터 배열이 가리키고 있는 값. 200이 들어간 곳의 주소, 힙에 존재
	printf("plist[1] = %p\n", plist[1]); //메모리를 받지 않았으므로 초기화값인 NULL, 이하 동일
	printf("plist[2] = %p\n", plist[2]);
	printf("plist[3] = %p\n", plist[3]);
	printf("plist[4] = %p\n", plist[4]);

	free(plist[0]); //동적 메모리를 해제

}
