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
//		printf("�̸� �Է�>> ");
//		scanf("%s", s[i].name);
//		printf("�ֹι�ȣ �Է�>> ");
//		scanf("%s", s[i].id);
//		while (getchar() != '\n'); //�ȹ���
//		printf("����� �Է�>> ");
//		gets_s(s[i].ymd, sizeof(s[i].ymd));
//	}
//	printf("===========ȸ������================\n");
//	for (int i = 0; i < SIZE; i++) {
//		char* token = strtok(s[i].id,"-");
//		token = strtok(NULL, "-");
//		int y, m, d;
//		sscanf(s[i].ymd, "%02d%02d%02d", &y, &m, &d);
//
//		printf("�̸� : %s \n", s[i].name);
//
//		if (token[0] == '1' || token[0] == '3') {
//			printf("���� : male \n");
//		}
//		else if (token[0] == '2' || token[0] == '4') {
//			printf("���� : female \n");
//		}
//		else {
//			printf("���� : �� �� ����");
//		}
//		
//		printf("����� : 20%d�� %d�� %d��\n", y,m,d);
//		printf("------------------------------\n");
//	}
//}