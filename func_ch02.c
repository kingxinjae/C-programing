//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <ctype.h>
//void test(char arr[], char* security[]);
//int main() {
//	printf("***********************\n");
//	printf("패스워드 안정성 테스트\n");
//	printf("***********************\n");
//
//	char passwd[20];
//	int count = 0;
//	printf("패스워드를 입력하시오>> ");
//	scanf("%s", passwd);
//	char secu[20];
//	/*char* secu = (char*)malloc(sizeof(char) * strlen(passwd));*/
//	test(passwd, secu);
//	printf("Your Password: %s", secu);
//}
//void test(char arr[], char *security) {
//	int count = 0;
//	for (int i = 0; i < strlen(arr); i++) {
//		if (isdigit(arr[i])) {
//			count++;
//		}
//		
//		else if (isupper(arr[i])) {
//			count++;
//		}
//		else if (islower(arr[i])) {
//			count++;
//		}
//		else if (!isalnum(arr[i])) {
//			count++;
//		}
//	}
//	switch (count) {
//	case(2):
//		strcpy(security, "Weak");
//		break;
//	case(3):
//		strcpy(security, "Strong");
//		break;
//	case(4):
//		strcpy(security, "Very Strong");
//		break;
//	default:
//		strcpy(security, "Very Weak");
//	}
//}