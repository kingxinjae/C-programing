//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//int main() {
//	while (1) {
//		int count = 0;
//		char id[10];
//		printf("아이디를 입력하세요: ");
//		scanf("%s", id);
//
//		if (!isalpha(id[0])) {
//			printf("영문자로 시작해야됨\n");
//			count++;
//		}
//		for (int i = 0; i < strlen(id); i++) {
//			if (isalnum(id[i])) {
//				if (strlen(id) < 8) {
//					printf("영문자와 숫자로만 구성되면 8자 이상이어야함\n");
//					count++;
//					break;
//				}
//			}
//		}
//		if (count == 0) {
//			printf("유효한 아이디 %s", id);
//			break;
//		}
//	}
//}