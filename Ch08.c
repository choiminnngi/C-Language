//01 함수 기본  

//함수 사용이유
//- Main함수코드 간결화(가독성 증가)
//- 코드의 재사용성(자주사용하는 코드의 활용성 증가)

//InValue() 함수 정의
//void InValue()
//{
//	int n1, n2;
//	printf("정수 2 개 입력 :");
//	scanf_s("%d%d", &n1, &n2);
//	printf("정수1 %d 정수2 %d\n", n1, n2);
//}
//#include <stdio.h>
//int main()
//{	
//	printf("1번째 함수 사용\n");
//	InValue(); //함수사용
//	printf("2번째 함수 사용\n");
//	InValue(); //함수사용
//	printf("3번째 함수 사용\n");
//	InValue(); //함수사용
//	return 0;
//}

//02 함수의 선언과 정의 

//void InValue();
//#include <stdio.h>
//int main()
//{
//	printf("1번째 함수 사용\n");
//	InValue(); //함수사용
//	printf("2번째 함수 사용\n");
//	InValue(); //함수사용
//	printf("3번째 함수 사용\n");
//	InValue(); //함수사용
//	return 0;
//}
//void InValue()
//{
//	int n1, n2;
//	printf("정수 2 개 입력 :");
//	scanf_s("%d%d", &n1, &n2);
//	printf("정수1 %d 정수2 %d\n", n1, n2);
//}

//03 함수의 4가지 형태01 - 반환형이있고 매개변수가 있는경우

//int sum(int x, int y);	//sum함수의 선언
//
//#include <stdio.h>
//int main()
//{
//	int n1, n2;
//	printf("두 수입력 :");
//	scanf_s("%d%d", &n1, &n2);
//	int result = sum(n1,n2);
//	printf("두수의 합 : %d\n", result);
//	return 0;
//}
//int sum(int x, int y)	//sum함수의 정의
//{
//	return x+y;
//}


//03 함수의 4가지 형태02 - 반환형이있고 매개변수가 없는경우

//#include <stdio.h>
//int sum();
//int main()
//{
//	int result = sum();
//	printf("두수의 합 : %d\n", result);
//	return 0;
//}
//int sum()
//{
//	int n1, n2;
//	printf("두수를 입력 : ");
//	scanf_s("%d%d", &n1, &n2);
//	return n1 + n2;
//}



//03 함수의 4가지 형태03 - 반환형이없고 매개변수가 있는경우

//void sum(int x ,int y);
//#include <stdio.h>
//int main()
//{
//	printf("함수 호출 전\n");
//	sum(10,20);
//	printf("함수 호출 후\n");
//	return 0;
//}
//void sum(int x, int y)
//{
//	int result = x + y;
//	printf("두수의 합 : %d\n", result);
//}

//03 함수의 4가지 형태04 - 반환형이없고 매개변수가 없는경우

//void sum();
//#include <stdio.h>
//int main()
//{
//	sum();
//	return 0;
//}
//void sum()
//{
//	int n1, n2,result;
//	printf("두수 입력 : ");
//	scanf_s("%d%d", &n1, &n2);
//	result = n1 + n2;
//	printf("두수의 합 : %d\n", result);
//}

//문제
//
//두수를 입력 받아 큰 수를 출력하는 함수를 만드세요
//함수 헤더  : void Max(int x , int y)

//#include <stdio.h>
//
//void Max(int x, int y);	//선언
//int main()
//{
//	printf("함수 호출 전 코드\n");
//	Max(10, 20);
//	printf("함수 호출 후 코드\n");
//	return 0;
//}
//void Max(int x, int y)
//{
//	if (x > y)
//		printf("큰수 : %d\n", x);
//	else
//		printf("큰수 : %d\n", y);
//}


//입력 받은 값이 짝수 인지 홀수 인지 판별하는 함수를 만드세요
//함수 헤더 : void IsOdd(void)

//#include <stdio.h>
//void IsOdd(void);
//int main()
//{
//	IsOdd(); 
//	IsOdd();
//	IsOdd();
//	return 0;
//}
//void IsOdd(void)
//{
//	int num=0;
//	printf("수 입력 : ");
//	scanf_s("%d", &num);
//	if (num % 2 == 0)//짝수냐?
//	{
//		printf("%d는 짝수입니다\n", num);
//	}
//	else
//	{
//		printf("%d는 홀수입니다\n", num);
//	}
//
//}


//1-입력받은 숫자까지 중에서 3의 배수만 출력해보세요
//함수 헤더 : int IsThreeMulti(int num)
//#include <stdio.h>
//int IsThreeMulti(int num);
//int main()
//{
//	IsThreeMulti(20);
//	return 0;
//}
//int IsThreeMulti(int num)
//{
//	int i=1;
//	while (i <= num)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//		i++;
//	}
//	printf("\n");
//
//}
//별찍기 함수 만들기 
//   *
//  ***
// *****
//*******
//#include <stdio.h>
//void star(int num);
//void ReverseStar(int num);
//int main()
//{
//	
//	//star(15);
//	ReverseStar(10);
//	return 0;
//}
//void ReverseStar(int num)
//{
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	while (i < num)
//	{
//		j = 0;
//		while (j < i)
//		{
//			printf(" ");
//			j++;
//		}
//		k = 0;
//		while (k <= (num - 1) * 2 - 2 * i)
//		{
//			printf("*");
//			k++;
//		}
//		printf("\n");
//		i++;
//	}
//}
//void star(int num)
//{
//	int i = 0;//줄바꿈
//	int j = 0;//공백
//	int k = 0;//Star
//
//	while (i < num)
//	{
//		j = 0;
//		while (j <= (num-2) - i)
//		{
//			printf(" ");
//			j++;
//		}
//		k = 0;
//		while (k <= 2 * i)
//		{
//			printf("*");
//			k++;
//		}
//		printf("\n");
//		i++;
//	}
//}


