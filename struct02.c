//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <ctype.h>
//#define SIZE 3
//struct student {
//	char name[20];
//	int id;
//	int subject[SIZE];
//};
//int main() {
//	struct student s1[SIZE] = {
//		{"ȫ�浿", 234436, {80, 80, 80}},
//		{"������", 234561, {80, 90, 90}},
//		{"�̼���", 248976, {85, 90, 93}}
//	};
//	printf("--------------�л� ��� ����-------------\n");
//	for (int i = 0; i < SIZE; i++) {
//		double avg=0;
//		int sum =0;
//		for (int j = 0; j < 3; j++) {
//			sum += s1[i].subject[j];
//		}
//		avg = sum / 3.0;
//		printf("�̸� : %s, �й� : %d, ��� ���� : %.2lf\n", s1[i].name, s1[i].id, avg);
//	}
//}