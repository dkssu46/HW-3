#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

float sum(float [], int);
float input[MAX_SIZE], answer;
int i;

void main(void) {

	printf("---------[이시헌]---[2017038012]---\n");

	for(i=0; i < MAX_SIZE; i++)
		input[i] = i; //input배열은 자신의 인덱스 넘버를 원소로 가짐

	printf("address of input = %p\n", input); //input 배열의 시작 위치
	answer = sum(input, MAX_SIZE); //sum 호출
	printf("The sum is: %f\n", answer); //1부터 (100-1)까지의 합인 4950 출력
}

float sum(float list[], int n) {
	int i;
	float tempsum = 0;

	printf("value of list = %p\n", list); //인자로 넘겨받을 때 input의 주소를 받음
	printf("address of list = %p\n\n", &list); //list 자체는 다른 메모리에 생성
	for(i = 0; i < n; i++)
		tempsum += list[i]; //tempsum에 input배열의 원소를 모두 더함
	return tempsum;
}

