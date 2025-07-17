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
//	printf("총 매출액: %d", sum);
//}
//void add_product(struct product* p[], int size) {
//	for (int i = 0; i < size; i++) {
//		printf("[%d번째 상품 정보 입력]\n", i+1);
//		printf("상품 이름: ");
//		scanf("%s", p[i]->name);
//		printf("가격: ");
//		scanf("%d", &p[i]->price);
//		printf("판매수량: ");
//		scanf("%d", &p[i]->sold);
//		printf("재고수량: ");
//		scanf("%d", &p[i]->rest);
//		printf("\n");
//	}
//}
//void print(struct product pro[], int size) {
//	printf("=== 상품 정보 출력 ===\n");
//	for (int i = 0; i < size; i++) {
//		printf("%s | 가격: %d | 판매: %d | 재고: %d \n",pro[i].name, pro[i].price, pro[i].sold, pro[i].rest);
//	}
//}
//void get_money(struct product pro[], int size, int* sum) {
//	for (int i = 0; i < size; i++) {
//		*sum += pro[i].price * pro[i].sold;
//	}
//}