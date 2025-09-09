//예제01 For문 기본

//#include <stdio.h>
//int main()
//{
//	int i;
//	//기본 for문
//	for (i = 0; i < 10; i++)
//	{
//		printf("hello World\n");
//	}
//	//무한루프 for문
//	for (; ;)
//	{
//		printf("hello World\n");
//	}
//	return 0;
//}

//예제02 For문 기본

//#include <stdio.h>
//int main()
//{
//	int i;
//	int n;
//	int sum=0;
//	printf("정수 1 개 입력 : ");
//	scanf_s("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		sum = sum + i;
//	}
//	printf("1부터 %d까지의 합 : %d\n", n, sum);
//	return 0;
//}

//문제 2개의 정수를 입력받아(최소값,최대값) 최소값부터 최대값까지의
//합을 구해서 출력해보세요
//ex)
//정수 2개 입력 : 2 , 15
//2에서부터 15까지의 합 : 합출력

//#include <stdio.h>
//int main()
//{
//	int i;
//	int sum=0;
//	int n1, n2;
//	printf("정수 2개입력 : ");
//	scanf_s("%d%d", &n1, &n2);
//	for (i = n1; i <= n2; i++)
//	{
//		sum = sum + i;
//	}
//	printf("%d 부터 %d까지의 합 : %d\n", n1, n2, sum);
//	return 0;
//}


//예제 03 - continue

//continue :  반복문장 안에 사용될 때 해당 코드를 적용시 continue
//이하의 코드를 적용하지 않고 반복문의 조건식으로 돌아간다

//#include <stdio.h>
//int main()
//{
//	int sum = 0;
//	int i;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 0)
//		{
//			continue;
//		}
//		sum = sum + i;
//	}
//	printf("1 - 100까지 수중 홀수의 합은 %d입니다 \n", sum);
//	return 0;
//}


//예제04 - break;

//break : 반복문장 안에 사용될때 해당 코드가 적용되면 가장 가까이에있는
//반복문장을 탈출하게된다

//#include <stdio.h>
//int main()
//{
//	int sum = 0;
//	int i;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i==40)
//		{
//			break;
//		}
//		sum = sum + i;
//	}
//	printf("break전까지의 합은 %d입니다 \n", sum);
//	return 0;
//}




