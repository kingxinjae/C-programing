#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 3

struct movie {
	char title[20];
	double rating;
	int viewers;
};
void input_movies(struct movie* movies[], int size);
int total_viewers(struct movie* movies[], int size);

int main() {
	struct movie movies[SIZE];
	struct movie* m_ptrs[SIZE];
	//������ �迭 �ʱ�ȭ 
	for (int i = 0; i < SIZE; i++) {
		m_ptrs[i] = &movies[i];
	}

	//����ڷκ���	��ȭ����	�Է�	�޾�	�ʱ�ȭ�ϴ�	�Լ�	ȣ��
	input_movies(m_ptrs, SIZE);

	//	��	������	����ϴ�	�Լ�	 ȣ��
	int total = total_viewers(m_ptrs, SIZE);
	printf("�� ���� ��: %d �� �� \n", total);
	return 0;
}

void input_movies(struct movie* movies[], int size) {
	for (int i = 0; i < size; i++) {
		printf("����, ����, ������(����) �Է�: ");
		scanf("%s %lf %d", movies[i]->title, &movies[i]->rating, &movies[i]->viewers);
	}
}
int total_viewers(struct movie* movies[], int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += movies[i]->viewers;
	}
	return sum;
}