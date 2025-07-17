//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//struct Person {
//	char name[20];
//	int age;
//};
//int main() {
//	struct Person person[3] = {
//	{"Alice",25},
//	{"Bob",30} ,
//	{ "Charlie",28}
//	};
//	struct Person* p[3];
//	struct Person* temp;
//	for (int i = 0; i < 3; i++) {
//		p[i] = &person[i];
//	}
//		for (int i = 0; i < 2; i++) {
//			if (p[i]->age > p[i + 1]->age) {
//				temp = p[i];
//				p[i] = p[i + 1];
//				p[i + 1] = temp;
//			}
//		}
//		for(int i=0; i<3; i++){
//		printf("%s: %d \n", p[i]->name, p[i]->age);
//	}
//}