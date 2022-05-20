#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 친절한 문제 설명은 1차까지만 주어집니다.
// COS PRO 빈칸채우기의 
// main에서 사용되는 solution 함수의 빈칸에 무엇이 들어갈지 곰곰히 생각해서 넣습니다.
// 어떠한 값을 매개변수로 전달 받아서 어떤식으로 사용 되는지
// 문제에서 말하고자 하는 부분이 빈칸에서 어떤 부분인지를 파악하셔야 합니다.
// 전달받은 매개변수(배열)의 양쪽에서부터 한칸씩 이동하면서 교환해주는 함수네요
// 한칸 한칸 이동하며 서로 교환을 한다면 가 나올 수 있지만
// 그이상 끝까지 간다면 다시 원위치로 되돌아가는 일이 발생될 수 있겠네요

int* solution(int arr[], int arr_len) {
    int left = 0;
    int right = arr_len - 1;
    while (left < right) {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left += 1;
        right -= 1;
    }
    return arr;
}

int main() {
    int arr[4] = { 1, 4, 2, 3 };
    int arr_len = 4;
    int* ret = solution(arr, arr_len);

    printf("solution 함수의 반환 값은 {");
    for (int i = 0; i < 4; i++) {
        if (i != 0) printf(", ");
        printf("%d", ret[i]);
    }
    printf("} 입니다.\n");
}

