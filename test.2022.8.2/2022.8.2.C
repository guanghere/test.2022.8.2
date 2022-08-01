#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int MAX(int x, int y) {
//	if (x > y) 
//		return x;
//	else 
//		return y;
//}
//
//int main() {
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int c = MAX(a, b);			//重点
//	printf("%d\n",c);
//	return 0;
//}


//int main() {
//	int a = 0;
//	scanf("%d", &a);
//	if (a % 5 == 0) {
//		printf("YES !\n");
//	}
//	else {
//		printf("NO !\n");
//	}
//	return 0;
//}


//int main() {
//
//	int a = 0;
//	
//	while (1)
//	{
//		scanf("%d", &a);
//		if (a >= 140)
//		{
//			printf("天才 !");
//			//break;
//		}
//	}
//
//	return 0;
//}

int main() {
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	printf("%d %d\n", a/b, a%b);


	return 0;
}