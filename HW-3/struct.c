#include <stdio.h>
#include <stdlib.h>

struct student1 {
	char lastname;
	int studentID;
	char grade;
};

typedef struct {
	char lastname;
	int studentID;
	char grade;
}student2;


int main(void) {

	struct student1 st1 = {'A', 200, 'A'}; // typedef를 하지 않았으므로 struct를 붙여야 함

	printf("---------[이시헌]---[2017038012]---\n");

	printf("st1.lastname = %c\n", st1.lastname);
	printf("st1.studentID = %d\n", st1.studentID);
	printf("st1.grade = %c\n", st1.grade);

	student2 st2 = {'B', 200, 'B'}; // typedef가 되어있으므로 struct를 안써도 됨

	printf("\nst2.lastname = %c\n", st2.lastname);
	printf("st2.studentID = %d\n", st2.studentID);
	printf("st2.grade = %c\n", st2.grade);

	student2 st3; //새로 만들어서
	st3 = st2; //그대로 대입한다. (구조 치환)

	printf("\nst3.lastname = %c\n", st3.lastname);
	printf("st3.studentID = %d\n", st3.studentID);
	printf("st3.grade = %c\n", st3.grade); //st2의 값이 정상적으로 st3에 복사되었다.

	return 0;
}
