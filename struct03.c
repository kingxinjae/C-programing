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
//		printf("�̸� �Է�>> ");
//		scanf("%s", ci[num].name);
//		printf("�ֹι�ȣ �Է�>> ");
//		scanf("%s", ci[num].id);
//		printf("����� �Է�>> ");
//		scanf("%d", &ci[num].ymd);
//		num++;
//	}
//
//	printf("--------ȸ�� ����--------\n");
//	for (int i = 0; i < 3; i++) {
//		printf("�̸� : %s \n", ci[i].name);
//		printf("�� \n");
//		char* token = strtok(ci[i].id,"-");
//		token = strtok(NULL, "-");
//		printf("�� %c \n", token[0]);
//		if (token[0] == '1' || token[0] == '3') {
//			printf("���� : male \n");
//		}
//		else if(token[0] == '2' || token[0] == '4') {
//			printf("���� : female \n");
//		}
//		else {
//			printf("���� : �˼����� \n");
//		}
//		printf("����� : %d \n", ci[i].ymd);
//		printf("---------------------\n");
//	}
//}