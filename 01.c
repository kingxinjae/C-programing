//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <ctype.h>
//#include <stdlib.h>
//
//int main() {
//	int n;
//	printf("입력받을 정수의 개수를 입력: ");
//	scanf("%d", &n);
//	int* p = (int*)malloc(sizeof(int) * n);
//	if (p == NULL) {
//		printf("할당 실패");
//		return 1;
//	}
//
//	printf("%d 개의 정수 입력: ",n);
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &p[i]);
//	}
//	for (int i = n; i > 0; i--) {
//		printf("%d ", i);
//	}
//	free(p);
//}