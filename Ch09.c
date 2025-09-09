//01 지역변수

//{}(중괄호) 내에서만 사용가능한 변수
//{}에서 변수생성 , 중괄호 벗어나면 공간 반환

//#include <stdio.h>
//int test(void)
//{
//	int num = 10;
//	num++;
//	printf("Test 지역 num=%d\n", num);
//	return 0;
//}
//int main()
//{	
//	int num = 10;
//	num++;
//	test();
//	printf("Main 지역 num=%d\n", num);
//	return 0;
//}

//02 for문 if문 지역변수

//#include <stdio.h>
//int main()
//{
//	int i = 5;
//	printf("main 함수의 지역변수 i=%d\n", i);
//	for (int i = 1; i < 3; i++)
//	{
//		printf("for문 안의 지역변수 i :%d\n", i);
//	}
//	printf("main 함수의 지역변수 i=%d\n", i);
//	if (i > 1)
//	{
//		int i = 100;
//		printf("조건문 안에서의 지역변수 i %d\n", i);
//	}
//	printf("main 함수의 지역변수 i=%d\n", i);
//	return 0;
//}


//03 전역변수

//코드영역
//데이터영역(공유영역) : 전역변수공간할당
//힙영역
//스택영역


//#include <stdio.h>
//int num = 0;	//전역변수 정의
//int test()
//{
//	num++;
//	printf("num : %d\n", num);
//}
//int main()
//{
//	test();
//	num++;
//	printf("num : %d\n",num);
//	int num = 4;
//	printf("num : %d\n",num);
//	return 0;
//}


//04 Static 변수

//지역에서 사용되는 공유변수
//지역변수 생성위치 : 지역{} , 할당공간 : 스택영역 , 소멸시점 : {} 벗어나는 순간
//전역변수 생성위치 : main함수밖 할당공간 : 데이터영역 , 소멸시점 : 프로그램종료

//static 생성위치 : 지역{}  ,할당공간 : 데이터영역 , 소멸시점 : 프로그램종료


//#include <stdio.h>
//void test()
//{
//	static int n1 = 0;
//	int n2 = 0;
//	n1++, n2++;
//	printf("static : %d , local : %d\n", n1, n2);
//}
//int main()
//{
//	int i;
//	test();
//	test();
//	test();
//	
//	return 0;
//}



//05 재귀함수
//스스로를 반복해서 호출하는 형태의 함수

//#include <stdio.h>
//void Recursive(int num)
//{
//	if (num > 0)
//	{
//		printf("재귀함수 호출전 : %d\n", num);
//		Recursive(num - 1);
//		printf("재귀함수 호출후 : %d\n", num);
//	}
//}
//int main()
//{
//	Recursive(3);
//	return 0;
//}
















