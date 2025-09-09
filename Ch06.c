//예제01 while 기본 

//#include <stdio.h>
//int main()
//{
//	int i=0;		//반복문 탈출에 사용되는 변수 초기화
//	while (i<5)	//반복문 탈출에 사용되는 조건식 지정, i가 0,1,2,3,4 까지 반복
//	{
//		printf("Hello World\n");
//		i++;	// i의 값 증가 
//	}
//	return 0;
//}

//예제02 while - 1부터 10까지의 합

//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	int sum = 0;
//	while (i<=10)	//1,2,3,4,5,6,7,8,9,10 까지 반복
//	{
//		sum = sum + i; 
//		i++;
//	}
//	printf("1 부터 10까지의 합 :%d\n", sum);
//	return 0;
//}


//예제03 - 1 부터 입력한 수까지의 합

//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	int sum = 0;
//	int n1 = 0;	
//	printf("수 입력: ");
//	scanf_s("%d", &n1);
//
//	while (i <= n1)	
//	{
//		sum = sum + i;
//		i++;
//	}
//	printf("1 부터 %d까지의 합 :%d\n", n1,sum);
//	return 0;
//}

//예제 4 - n부터 m까지의 합 

//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	int sum = 0;
//	int n1 = 0,n2=0;
//	printf("두 수 입력: ");
//	scanf_s("%d%d", &n1,&n2);
//
//	i = n1;
//	while (i <= n2)
//	{
//		sum = sum + i;
//		i++;
//	}
//	printf("%d 부터 %d까지의 합 :%d\n", n1,n2, sum);
//	return 0;
//}


//예제05

// 정수를 반복하여 입력받아  입력받은 정수들의 합계를 구하세요
//(0 을 입력 받을 때까지 계속해서 입력 받게 만들 것)


//#include <stdio.h>
//int main()
//{
//	int n1=1;
//	int sum = 0;
//	while (n1!=0)
//	{
//		printf("수 입력: ");
//		scanf_s("%d", &n1);
//		sum = sum + n1;
//	}
//	printf("총합계 :%d\n", sum);
//
//	return 0;
//}


//예제06

//1부터 n까지의 수중에 3의 배수의 합만 출력

//#include <stdio.h>
//int main()
//{
//
//	int n1 = 0;
//	int i = 0;
//	int sum = 0;
//	printf("수 입력 : ");
//	scanf_s("%d", &n1);
//	while (i <= n1)
//	{
//		if (i % 3 == 0)//현재i가 3의 배수인지?
//		{
//			printf("%d ", i);
//			sum = sum + i;
//		}
//		i++;
//	}
//	printf("\n");
//	printf("1부터 %d까지 수중에 3의 배수들의 합 :%d\n", n1, sum);
//	return 0;
//}



//예제07

//1부터 n까지의 수중에 짝수의합과 홀수의합을 따로 출력해보세요

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int n1 = 0;
//	int sum1 = 0, sum2 = 0;
//	printf("수를 입력 : ");
//	scanf_s("%d", &n1);
//	while (i <= n1)
//	{
//		if (i % 2 == 0)//짝수인경우
//		{
//			sum1 = sum1 + i;
//		}
//		else //홀수인경우
//		{
//			sum2 = sum2 + i;
//		}
//		i++;
//	}
//	printf("1부터 %d까지의 수중 짝수의 합 :%d\n", n1, sum1);
//	printf("1부터 %d까지의 수중 짝수의 합 :%d\n", n1, sum2);
//	return 0;
//}


//예제 08 
//구구단 2단 출력하기

//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	while (i <= 9)
//	{
//		printf("2 * %d = %d\n", i, 2 * i);
//		i++;
//	}
//	return 0;
//}

//예제 09
//구구단 n단 출력하기

//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	int dan = 0;
//	printf("단수 입력 : ");
//	scanf_s("%d", &dan);
//	while (i <= 9)
//	{
//		printf("%d * %d = %d\n", dan, i,dan * i);
//		i++;
//	}
//	return 0;
//}

//예제 10
//구구단 역순 출력하기 2*9=18 , 2*8=16...

//#include <stdio.h>
//int main()
//{
//	int i = 9;
//	int dan = 0;
//	printf("단수 입력 : ");
//	scanf_s("%d", &dan);
//	while (i>0)
//	{
//		printf("%d * %d = %d\n", dan, i,dan * i);
//		i--;
//	}
//	return 0;
//}



//예제 11 - 중첩 while

//#include <stdio.h>
//int main()
//{
//	int i = 0;	//바깥의 while문
//	int j = 0;	//안쪽의 while문
//
//	while (i < 5)
//	{
//		printf("i의 값 :%d\n", i);
//		j = 0;
//		while (j < 5)
//		{
//			printf("j의 값 :%d\n", j);
//			j++;
//		}
//		printf("\n");
//		i++;
//	}
//	return 0;
//}



//예제12
//전체 구구단 ( 2단 - 9단까지) 출력하기

//#include <stdio.h>
//int main()
//{
//	int i = 2;	//dan
//	int j = 0;	//dan에 곱해지는 수
//
//	while (i <= 9)
//	{
//		//--단에 곱해지는 반복문---
//		j = 1;
//		while (j <= 9)
//		{
//			printf("%d * %d = %d\n" , i,j,i*j);
//			j++;
//		}
//		//--단에 곱해지는 반복문---
//		printf("\n");
//		i++;
//	}
//	return 0;
//}


//예제13
//전체 구구단 역순출력 (9*9 -- 2*1)


////예제14 - 중첩while
//*
//**
//***
//****
//i(개행)	j(*)
//	0	0 - 0
//	1	0 - 1
//	2	0 - 2
//	3	0 - 3

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	while (i < 4)
//	{
//		j = 0;
//		while (j <= i)
//		{
//			printf("*");
//			j++;
//		}
//		printf("\n");
//		i++;
//	}
//
//	return 0;
//}

//
////예제15
//
//****
//***
//**
//*


//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	while (i < 4)
//	{
//		j = 0;
//		while (j <= 3-i)
//		{
//			printf("*");
//			j++;
//		}
//		printf("\n");
//		i++;
//	}
//
//	return 0;
//}




////예제 16
//
//   *
//  ***
// *****
//*******

//#include <stdio.h>
//int main()
//{
//	int i = 0;	//개행용
//	int j = 0;	//공백용
//	int k = 0;	//별찍기용
//	while (i < 4)
//	{
//		j = 0;
//		while (j <= 2 - i)
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
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = 0;	//개행용
//	int j = 0;	//공백용
//	int k = 0;	//별찍기용
//	while (i < 4)
//	{
//		j = 0;
//		while (j <i)
//		{
//			printf(" ");
//			j++;
//		}
//		k = 0;
//		while (k <= 6 - (2 * i))
//		{
//			printf("*");
//			k++;
//		}
//		printf("\n");
//		i++;
//	}
//	return 0;
//}




////예제 17
//
//*
//**
//***
//****
//***
//**
//*

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	while (i < 7)
//	{
//		if (i < 4)
//		{
//			j = 0;
//			while (j <= i)
//			{
//				printf("*");
//				j++;
//			}
//		}
//		else
//		{
//			j = 0;
//			while (j <= 6 - i)
//			{
//				printf("*");
//				j++;
//			}
//
//		}
//		printf("\n");
//		i++;
//	}
//	return 0;
//}











////예제 18
//
//   *
//  ***
// *****
//*******
// *****
//  ***
//   *

#include <stdio.h>
int main()
{
	int i = 0;		//개행
	int j = 0;		//공백
	int k = 0;		//별
	int p = 1;
	while (i < 7)
	{
		if (i < 4)
		{
			j = 0;
			while (j <= 2 - i)
			{
				printf(" ");
				j++;
			}
			k = 0;
			while (k <= 2 * i)
			{ 
				printf("*");
				k++;
			}

		}
		else
		{
			j = 0;
			while (j <= i - 4)
			{
				printf(" ");
				j++;
			}
			k = 0;
			while (k <= 6 - 2 * p)
			{
				printf("*");
				k++;
			}
			p++;
		}

		printf("\n");
		i++;
	}




	
	return 0;
}




////예제 19
//
//*******
// *****
//  ***
//   *
//  ***
// *****
//*******











