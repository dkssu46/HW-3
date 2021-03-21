#include <stdio.h>
#include <stdlib.h>

struct student {
	char lastname[13]; //13바이트 -> 패딩 후 16바이트
	int studentID; //4바이트
	short grade; //2바이트 -> 패딩 후 4바이트
};		//총합 19바이트 -> 패딩 후 24바이트


int main(void) {
	printf("---------[이시헌]---[2017038012]---\n");

	struct student pst;

	printf("size of student = %ld\n", sizeof(struct student)); //실제 24바이트 (패딩을 했기 때문)
	printf("size of int = %ld\n", sizeof(int));
	printf("size of short = %ld\n", sizeof(short));

	return 0;
}
