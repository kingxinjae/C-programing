//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#define SIZE 5
//
//struct product {
//	char name[20];
//	int price;
//	int sold;
//	int rest;
//};
//
//void add_product(struct product* p[], int size);
//void print(struct product pro[], int size);
//void get_money(struct product pro[], int size, int* sum);
//
//int main() {
//	struct product product[SIZE];
//	struct product* p[SIZE];
//	for (int i = 0; i < SIZE; i++) {
//		p[i] = &product[i];
//	}
//	int sum =0;
//	add_product(p, SIZE);
//	print(product, SIZE);
//	get_money(product,SIZE, &sum);
//	printf("�� �����: %d", sum);
//}
//void add_product(struct product* p[], int size) {
//	for (int i = 0; i < size; i++) {
//		printf("[%d��° ��ǰ ���� �Է�]\n", i+1);
//		printf("��ǰ �̸�: ");
//		scanf("%s", p[i]->name);
//		printf("����: ");
//		scanf("%d", &p[i]->price);
//		printf("�Ǹż���: ");
//		scanf("%d", &p[i]->sold);
//		printf("������: ");
//		scanf("%d", &p[i]->rest);
//		printf("\n");
//	}
//}
//void print(struct product pro[], int size) {
//	printf("=== ��ǰ ���� ��� ===\n");
//	for (int i = 0; i < size; i++) {
//		printf("%s | ����: %d | �Ǹ�: %d | ���: %d \n",pro[i].name, pro[i].price, pro[i].sold, pro[i].rest);
//	}
//}
//void get_money(struct product pro[], int size, int* sum) {
//	for (int i = 0; i < size; i++) {
//		*sum += pro[i].price * pro[i].sold;
//	}
//}