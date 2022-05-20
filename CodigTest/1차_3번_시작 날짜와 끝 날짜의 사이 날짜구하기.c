#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 친절한 문제 설명은 1차까지만 주어집니다.
// COS PRO 빈칸채우기의 
// 위에서 미리 만들어지는 하나의 func_a가 만들어집니다.
// 각각의 함수에서 전달받는 매개변수는 무엇인지, 어떠한 역할을 하고 있는지 리턴값이 어떤타입인지를 확인하셔야 합니다.
// 만들어진 한수가 solution 함수에서 어떻게 사용되는지 곰곰히 생각해서 넣습니다.
// 어떠한 값을 매개변수로 전달 받아서 어떤식으로 사용 되는지
// 문제에서 말하고자 하는 부분이 빈칸에서 어떤 부분인지를 파악하셔야 합니다.
// func_a는 1월 1일부터 전달 받는 매개변수 월, 일 까지의 일 수를 파악하여 리턴해줍니다.
// 1월 2일은 어떻게 숫자를 세야할까요?
// munth_list인 각 월의 일수가 있지만 들어가면 안되고 2월 2일이라면 1월이 들어가야 합니다.
// 
// 이것을 참고하여 반복문의 빈칸을 넣으시고
// 마지막 빈칸은 위에서 월을 누적하였으니 전달받은 일 수를 더하면되겠지요?

int func_a(int month, int day) {
	int month_list[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int total = 0;
	for (int i = 0; i <= month; i++)
		total += month_list[i];
	total += day;
	return total - 1;
}

int solution(int start_month, int start_day, int end_month, int end_day) {
	int start_total = func_a(start_month, start_day);
	int end_total = func_a(end_month, end_day);
	return end_total - start_total;
}

int main() {
	int start_month = 1;
	int start_day = 2;
	int end_month = 2;
	int end_day = 2;
	int ret = solution(start_month, start_day, end_month, end_day);

	printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}