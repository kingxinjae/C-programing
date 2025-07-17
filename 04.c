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
	//포인터 배열 초기화 
	for (int i = 0; i < SIZE; i++) {
		m_ptrs[i] = &movies[i];
	}

	//사용자로부터	영화정보	입력	받아	초기화하는	함수	호출
	input_movies(m_ptrs, SIZE);

	//	총	관객수	계산하는	함수	 호출
	int total = total_viewers(m_ptrs, SIZE);
	printf("총 관객 수: %d 만 명 \n", total);
	return 0;
}

void input_movies(struct movie* movies[], int size) {
	for (int i = 0; i < size; i++) {
		printf("제목, 평점, 관객수(만명) 입력: ");
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