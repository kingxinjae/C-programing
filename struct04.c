//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//#define SIZE 3
//struct student {
//	char name[10];
//	char id[20];
//	char ymd[8];
//};
//int main() {
//	struct student s[SIZE];
//	for (int i = 0; i < SIZE; i++) {
//		printf("이름 입력>> ");
//		scanf("%s", s[i].name);
//		printf("주민번호 입력>> ");
//		scanf("%s", s[i].id);
//		while (getchar() != '\n'); //안배운거
//		printf("등록일 입력>> ");
//		gets_s(s[i].ymd, sizeof(s[i].ymd));
//	}
//	printf("===========회원정보================\n");
//	for (int i = 0; i < SIZE; i++) {
//		char* token = strtok(s[i].id,"-");
//		token = strtok(NULL, "-");
//		int y, m, d;
//		sscanf(s[i].ymd, "%02d%02d%02d", &y, &m, &d);
//
//		printf("이름 : %s \n", s[i].name);
//
//		if (token[0] == '1' || token[0] == '3') {
//			printf("성별 : male \n");
//		}
//		else if (token[0] == '2' || token[0] == '4') {
//			printf("성별 : female \n");
//		}
//		else {
//			printf("성별 : 알 수 없음");
//		}
//		
//		printf("등록일 : 20%d년 %d월 %d일\n", y,m,d);
//		printf("------------------------------\n");
//	}
//}