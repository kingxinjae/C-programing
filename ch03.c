//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//int main() {
//	while (1) {
//		int count = 0;
//		char id[10];
//		printf("���̵� �Է��ϼ���: ");
//		scanf("%s", id);
//
//		if (!isalpha(id[0])) {
//			printf("�����ڷ� �����ؾߵ�\n");
//			count++;
//		}
//		for (int i = 0; i < strlen(id); i++) {
//			if (isalnum(id[i])) {
//				if (strlen(id) < 8) {
//					printf("�����ڿ� ���ڷθ� �����Ǹ� 8�� �̻��̾����\n");
//					count++;
//					break;
//				}
//			}
//		}
//		if (count == 0) {
//			printf("��ȿ�� ���̵� %s", id);
//			break;
//		}
//	}
//}