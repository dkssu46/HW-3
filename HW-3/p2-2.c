#include <stdio.h>
#include <stdlib.h>

void print1 (int *ptr, int rows);

int main(void) {

	int one[] = {0,1,2,3,4}; //크기를 입력 안해도 선언 시 값을 넣으면 자동으로 5칸으로 생성

	printf("---------[이시헌]---[2017038012]---\n");

	printf("one = %p\n", one); //배열 이름은 시작주소
	printf("&one = %p\n", &one); //배열의 주소는 시작주소
	printf("&one[0] = %p\n", &one[0]); //배열의 첫 원소의 주소는 배열의 시작주소
	printf("\n");

	print1(&one[0], 5);

	return 0;
}

void print1 (int *ptr, int rows) {
	int i;
	printf("Address Contents\n");
	for(i=0;i<rows;i++)
		printf("%p  %5d\n",ptr+i,*(ptr+i)); //주소를 1칸씩 늘려가며 찍고, 그 주소의 값을 찍음. 인덱스가 하나씩 늘어나는 것과 같음
	printf("\n");
}
