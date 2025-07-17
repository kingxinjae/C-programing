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
//		{"홍길동", 234436, {80, 80, 80}},
//		{"김유신", 234561, {80, 90, 90}},
//		{"이순신", 248976, {85, 90, 93}}
//	};
//	printf("--------------학생 평균 점수-------------\n");
//	for (int i = 0; i < SIZE; i++) {
//		double avg=0;
//		int sum =0;
//		for (int j = 0; j < 3; j++) {
//			sum += s1[i].subject[j];
//		}
//		avg = sum / 3.0;
//		printf("이름 : %s, 학번 : %d, 평균 점수 : %.2lf\n", s1[i].name, s1[i].id, avg);
//	}
//}