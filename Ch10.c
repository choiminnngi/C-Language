//01 배열기본 
//동일한 자료형의 연속적인 공간할당
//첨자연산자[] 를 통해 배열요소 공간에 접근
//int arr[n] : 배열요소는 0번 Idx부터 시작해서 n-1 까지  공간이 형성

//#include <stdio.h>
//int main()
//{
//	//배열 정의 후 값 삽입;
//	int arr1[5];
//	arr1[0] = 1;
//	arr1[1] = 2;
//	arr1[2] = 3;
//	arr1[3] = 4;
//	arr1[4] = 5;
//	printf("%d %d %d %d %d \n", arr1[0], arr1[1], arr1[2], arr1[3], arr1[4]);
//	float arr2[3] = { 1.1,2.2,3.3 };
//	printf("%f %f %f\n", arr2[0], arr2[1], arr2[2]);
//	return 0;
//}


//02 배열 기본

//#include <stdio.h>
//int main()
//{
//	int i;
//	int arr[10];
//	//반복문을 통해 배열에 값 삽입( 1,2,3,4,5,6,7,8,9,10)
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i + 1;
//	}
//	//반복문을 통해 배열 요소안 값 확인
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}


//03 배열  + scanf

//#include <stdio.h>
//int main()
//{
//	int i;
//	int arr[10];
//	//반복문을 통해 배열에 값 삽입( 1,2,3,4,5,6,7,8,9,10)
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d번째 값입력 : ", i + 1);
//		scanf_s("%d", &arr[i]);
//	}
//	//반복문을 통해 배열 요소안 값 확인
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}

//04 배열 + scanf + MAX값,평균,총합 구하기

//#include <stdio.h>
//int main()
//{
//	int i;
//	int arr[10];
//	int MAX=0;
//	int sum=0;
//	int avr=0;
//	//반복문을 통해 배열에 값 삽입( 1,2,3,4,5,6,7,8,9,10)
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d번째 값입력 : ", i + 1);
//		scanf_s("%d", &arr[i]);
//		
//		sum = sum + arr[i];	//합 계산
//		if (MAX < arr[i])	//최대값 MAX에 저장
//		{
//			MAX = arr[i];
//		}
//	}
//	//반복문을 통해 배열 요소안 값 확인
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	avr = sum / 10;
//	printf("MAX : %d 총점 : %d 평균 :%d\n", MAX, sum, avr);
//	return 0;
//}

//05 배열 문자/문자열 저장&처리


//#include <stdio.h>
//int main()
//{
//	//문자단위 저장
//	char str1[4] = { 'a','b','c','d'};	//문자배열o, 문자열x , 각요소에 문자를 저장
//	char str2[4] = { 'a','b','c','\0' };	//문자배열o, 문자열o, 문자열은 마지막에 null문자를가진다
//
//	printf("str1 : %s\n", str1);
//	printf("str2 : %s\n", str2);
//	
//	char str3[4] = "abcd";
//	char str4[4] = "abc";
//
//	printf("str3 : %s\n", str3);
//	printf("str4 : %s\n", str4);
//	return 0;
//}

//06 문자열 입력 / 출력

//#include <stdio.h>
//
//int main()
//{
//
//	char str[10];
//	printf("문자열을 입력 :");
//	scanf_s("%s", str,sizeof(str));
//	printf("입력한 문자열 : %s\n", str);
//
//	return 0;
//}

//07 이차원 배열


//#include <stdio.h>
//int main()
//{
//	//이차원배열의 정의와 값삽입
//	int arr1[2][3];
//	arr1[0][0] = 1;
//	arr1[0][1] = 2;
//	arr1[0][2] = 3;
//	arr1[1][0] = 4;
//	arr1[1][1] = 5;
//	arr1[1][2] = 6;
//	//이차원 배열의 정의와 동시에 초기화 
//	int arr2[3][2] = {
//		{1,2},
//		{3,4},
//		{5,6}
//	};
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			printf("%d ", arr1[i][j]);
//		}
//	}
//	printf("\n");
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 2; j++)
//		{
//			printf("%d ", arr2[i][j]);
//		}
//	}
//	return 0;
//}


//08 fgets -문자열입력받기 함수

//Stream : 데이터가 이동되는 가상 통로
//stdin : 표준입력장치로부터 프로그램방향으로 형성되는 스트림(scanf_s)
//stdout : 프로그램으로부터 표준출력장치로 형성되는 스트림(printf)
//rewind(stdin) : 표준입력버퍼 공간 초기화
//fgets(저장위치,크기지정,스트림);


//#include <stdio.h>
//int main()
//{
//	char str1[20];
//	char str2[20];
//	printf("scanf를 이용한 문자열 입력 : ");
//	scanf_s("%s", str1,sizeof(str1));	//scanf는 공백(space bar)를 포함하지않는다 .띄어쓰기사용시 값받기적용x
//	printf("%s\n", str1);
//	rewind(stdin);//버퍼공간 초기화
//	printf("fgets를 이용한 문자열 입력 : ");
//	fgets(str2, sizeof(str2), stdin);	//fgets는 공백을 포함해서 문자열을 받는다
//	printf("%s\n", str2);
//	return 0;
//
//}


//문제 - 다음 수를 입력하면 거꾸로 출력되게 하는 함수 Reverse 를 만드세요
// ex 수 입력 : 123 
//	  수 출력 : 321
//함수의 헤더 : void Reverse()
//힌트		  : %연산자 / 연산자를 이용합니다


//void Reverse();
//
//#include <stdio.h>
//int main()
//{
//	Reverse();
//
//	return 0;
//}
//void Reverse()
//{
//	int num;
//	int tmp = 0;
//	printf("수 입력 : ");
//	scanf_s("%d", &num);
//	printf("수 출력 : ");
//	while (num != 0)
//	{
//		tmp = num % 10;
//		num = num / 10;
//		printf("%d",tmp);
//	}
//	printf("\n");
//}



































