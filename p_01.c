//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//void fill_2d_array(int arr[3][5], int r, int n);
//int main() {
//	int data[3][5];
//	int value;
//	printf("배열의 원소에 저장할 값? :");
//	scanf("%d", &value);
//	
//	fill_2d_array(data,3,value);
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < sizeof(data[0]) / sizeof(data[0][0]); j++) {
//			printf("%d ", data[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//void fill_2d_array(int arr[3][5], int r, int v) {
//	for (int i = 0; i <r; i++ ) {
//		for (int j = 0; j < sizeof(arr[0])/sizeof(arr[0][0]); j++) {
//			arr[i][j] = v;
//		}
//	}
//}