//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//struct customer_info {
//	char name[20];
//	char id[20];
//	int ymd;
//};
//int main() {
//	struct customer_info ci[3];
//	//struct customer_info* p = &ci;
//	int num = 0;
//	while (num<3) {
//		printf("이름 입력>> ");
//		scanf("%s", ci[num].name);
//		printf("주민번호 입력>> ");
//		scanf("%s", ci[num].id);
//		printf("등록일 입력>> ");
//		scanf("%d", &ci[num].ymd);
//		num++;
//	}
//
//	printf("--------회원 정보--------\n");
//	for (int i = 0; i < 3; i++) {
//		printf("이름 : %s \n", ci[i].name);
//		printf("전 \n");
//		char* token = strtok(ci[i].id,"-");
//		token = strtok(NULL, "-");
//		printf("후 %c \n", token[0]);
//		if (token[0] == '1' || token[0] == '3') {
//			printf("성별 : male \n");
//		}
//		else if(token[0] == '2' || token[0] == '4') {
//			printf("성별 : female \n");
//		}
//		else {
//			printf("성별 : 알수없음 \n");
//		}
//		printf("등록일 : %d \n", ci[i].ymd);
//		printf("---------------------\n");
//	}
//}