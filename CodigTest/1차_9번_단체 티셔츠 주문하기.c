#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
// 여기에 include문을 추가할 수 있습니다.

// 친절한 문제 설명은 1차까지만 주어집니다.
// COS PRO 
// 해석할 필요없고 눈크게 뜨고 찾을 필요없이
// 자유롭게 코딩이 가능한 부분입니다.
// 마음편히 코딩하시면됩니다.
// 가끔 int answer = 0; 위에 //여기에 코드를 작성해주세요
// 라고 표시되어 있는 것을 보고 int answer = 0 은 그대로 둬야 하는 질문을 하십니다.
// solution 함수를 자유롭게 아무곳이나 작성해도 괜찮습니다.
// 추가적으로 위에 include 를 추가하셔도 됩니다.


int* solution(char* shirt_size[], int shirt_size_len) {
	int* answer = (int*)malloc(sizeof(int)* shirt_size_len);
	// 여기에 코드를 작성해주세요.
	for (int i = 0; i < shirt_size_len; i++) {
		answer[i]=0;

	}
	for (int i = 0; i < shirt_size_len; i++) {
		if (strcmp(shirt_size[i], "XS") == 0) answer[0]++;
		else if (strcmp(shirt_size[i], "S") == 0) answer[1]++;
		else if (strcmp(shirt_size[i], "M") == 0) answer[2]++;
		else if (strcmp(shirt_size[i], "L") == 0) answer[3]++;
		else if (strcmp(shirt_size[i], "XL") == 0) answer[4]++;
		else answer[5]++;
	}
	return answer;
}

int main() {
	char* shirt_size[] = { "XS", "S", "L", "L", "XL", "S" };
	int shirt_size_len = 6;
	int* ret = solution(shirt_size, shirt_size_len);

	printf("solution 함수의 반환 값은 {");
	for (int i = 0; i < 6; i++) {
		if (i != 0) printf(", ");
		printf("%d", ret[i]);
	}
	printf("} 입니다.\n");
}
