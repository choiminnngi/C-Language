//01 포인터 기본

//#include <stdio.h>
//int main()
//{
//
//	char ch1 = 'A';	//A문자를 char형크기의 ch1변수공간에 초기화
//	char ch2;	//char형크기의 ch2변수 정의
//	char *ptr;	//char정도크기를 가리키는 ptr포인터 변수 정의
//
//	ptr = &ch1;	//ch1의 메모리주소를 ptr포인터변수 공간에 대입
//	ch2 = *ptr;	//ptr이 가리키는 곳의 값을 ch2공간에 대입
//
//	printf("ch1 주소 : %p\n", &ch1);
//	printf("ptr안의 값 : %p\n", ptr);
//	printf("ptr이 가리키는 곳의 값 : %c\n", *ptr);
//	printf("ch2의 값 : %c\n", ch2);
//	return 0;
//}


//02 포인터 기본

//#include <stdio.h>
//int main()
//{
//	int num1 = 10;	//10값을 int형크기변수 num1에 초기화
//	int num2;		//int형크기 num2변수 정의
//	int * ptr;		//int형크기를 가리키는(가리킬수있는) ptr 포인터 변수 정의
//	ptr = &num1;	//num1의 메모리주소를 ptr포인터 공간에 대입
//	(*ptr)++;			//ptr포인터가 가리키는 곳의 값을 1증가
//	num2 = 5;		//num2공간에 5값을 대입
//	ptr = &num2;	//num2의 메모리주소를 ptr포인터 공간에 대입
//	*ptr = *ptr + num1 + num2;	//ptr이가리키는 곳의값과 num1,num2값의 합을 ptr이가리키는 공간에 대입
//	printf("num1 = %d num2 = %d *ptr = %d\n ", num1, num2, *ptr);
//	return 0;
//}//

//03 포인터 기본

//#include <stdio.h>
//int main()
//{
//	int num1 = 100, num2 = 100;	//int형 변수 num1,num2 에 각각 100으로 초기화
//	int * pnum;	//int형 크기를 가리키는 pnum포인터 변수 정의
//	pnum = &num1;	//num1의 메모리주소를 pnum에 대입
//	(*pnum) += 30;	//pnum이 가리키는곳의값 + 30을 pnum이 가리키는 공간에 대입
//	pnum = &num2;	//num2의 메모리주소를 pnum에 대입
//	(*pnum) -= 30;	//pnum이 가리키는곳의값 - 30을 pnum이 가리키는 공간에 대입 
//	printf("num1 :%d num2:%d \n", num1, num2);
//}


//문제

//#include <stdio.h>
//int main()
//{
//	//int형 변수 num1 과 num2를 선언과 동시에 각각 10 , 20 으로 초기화
//	int num1 = 10, num2 = 20;
//	//int형 포인터변수 ptr1 과 ptr2를 정의하고 각각 num1 , num2를 가리키게 설정
//	int *ptr1 = &num1;
//	int *ptr2 = &num2;
//	//ptr1포인터가 가리키는 곳의 값을 10 증가
//	(*ptr1) += 10;
//	//ptr2포인터가 가리키는 곳의 값을 10 감소
//	(*ptr2) -= 10;
//	//ptr1과 ptr2가 가리키는 곳의 공간을 교체
//	ptr1 = &num2;
//	ptr2 = &num1;
//	//ptr1과 ptr2가 가리키는 곳의 값 확인
//	printf("*ptr1 : %d *ptr2 : %d \n", *ptr1, *ptr2);
//	return 0;
//}


//04 포인터와 배열

//배열의 이름은 배열의 시작위치를 가리키는 포인터상수 이다!!

//#include <stdio.h>
//int main()
//{
//	int arr1[3] = { 1,2,3, };
//	printf("%d\n", *arr1);
//
//	*arr1 = *arr1 + 10;
//	printf("%d\n", arr1[0]);
//
//	return 0;
//}

//05 포인터의 연산

//#include <stdio.h>
//int main()
//{
//	double * ptr = 0;
//	printf("%p\n", ptr + 1);
//	printf("%p\n", ptr + 2);
//	printf("%p\n", ptr + 3);
//	printf("%p\n", ptr + 4);
//	return 0;
//}
//

//06 포인터를 배열처럼 사용

//#include <stdio.h>
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int * ptr = arr;
//
//	printf("%d %d\n", *(arr + 0), *(ptr + 0));
//	printf("%d %d\n", *(arr + 1), *(ptr + 1));
//	printf("%d %d\n", *(arr + 2), *(ptr + 2));
//	printf("%d %d\n", *(arr + 3), *(ptr + 3));
//	printf("%d %d\n", *(arr + 4), *(ptr + 4));
//	printf("\n");
//	printf("%d %d\n", arr[0], ptr[0]);
//	printf("%d %d\n", arr[1], ptr[1]);
//	printf("%d %d\n", arr[2], ptr[2]);
//	printf("%d %d\n", arr[3], ptr[3]);
//	printf("%d %d\n", arr[4], ptr[4]);
//	return 0;
//}

//07 문자배열 문자열 포인터


//#include <stdio.h>
//
//int main()
//{
//	char str1[4] = "abcd";	//abcd문자열을 상수풀에 저장후 str1배열에 초기화
//	char str2[4] = "abc";	//abc문자열을 상수풀에 저장후 str2배열에 초기화
//	char * ptr1 = "abcd";	//이미저장된 abcd문자열의 시작주소를 ptr1포인터변수에 초기화
//	char * ptr2 = "abcd";	//이미저장된 abcd문자열의 시작주소를 ptr2포인터변수에 초기화
//	char * ptr3 = "abc";	//이미저장된 abc문자열의 시작주소를 ptr3포인터변수에 초기화
//	char * ptr4 = "abc";	//이미저장된 abc문자열의 시작주소를 ptr4포인터변수에 초기화
//
//
//	printf("str1의 주소 : %p\n", str1);
//	printf("str2의 주소 :%p\n", str2);
//	printf("abcd의 주소 : %p\n", &"abcd");
//	printf("abc의 주소 : %p\n", &"abc");
//	printf("ptr1의 값  : %p\n", ptr1);
//	printf("ptr2의 값  : %p\n", ptr2);
//	printf("ptr3의 값  : %p\n", ptr3);
//	printf("ptr4의 값  : %p\n", ptr4);
//	
//	return 0;
//}


//문제

//길이가 5인 int형 배열 arr을 만들고 1,2,3,4,5 로 초기화
//이배열의 첫번째 요소를 가리키는 포인터 변수 ptr정의
//포인터연산을 통해 각 배열요소로 이동해서 모든 배열 요소안의 값을 +2씩 증가해보세요


//#include <stdio.h>
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int * ptr = arr;
//	*(ptr + 0) += 2;
//	*(ptr + 1) += 2;
//	*(ptr + 2) += 2;
//	*(ptr + 3) += 2;
//	*(ptr + 4) += 2;
//	printf("%d %d %d %d %d \n", arr[0], arr[1], arr[2], arr[3], arr[4]);
//	return 0;
//}


//08 포인터와 함수(Call-by-Value)

//#include <stdio.h>
//void func(int x, int y);
//
//int main()
//{
//	int n1 = 100, n2 = 200;
//	func(n1, n2);
//	printf("n1=%d n2=%d\n", n1, n2);
//	return 0;
//}
//void func(int x, int y)
//{
//	x += 5;
//	y += 5;
//	printf("x=%d y=%d\n", x, y);
//}


//09 Call-by-value 방식으로 메인함수 변수값 swap하기

//#include <stdio.h>
//
//void swap(int n1, int n2)
//{
//	int tmp = n1;
//	n1 = n2;
//	n2 = tmp;
//}
//int main()
//{
//	int n1 = 100, n2 = 200;
//	printf("SWAP전 n1=%d n2=%d\n", n1, n2);
//	swap(n1, n2);
//	printf("SWAP후 n1=%d n2=%d\n", n1, n2);
//
//
//	return 0;
//}

//10 Call-by-address 방식으로 메인함수 변수값 swap하기


//#include <stdio.h>
//
//void swap(int *ptr1, int *ptr2)
//{
//	int tmp = *ptr1;
//	*ptr1 = *ptr2;
//	*ptr2 = tmp;
//}
//int main()
//{
//	int n1 = 100, n2 = 200;
//	printf("SWAP전 n1=%d n2=%d\n", n1, n2);
//	swap(&n1, &n2);//Call-by-Address
//	printf("SWAP후 n1=%d n2=%d\n", n1, n2);
//	return 0;
//}

//11 포인터의 포인터

//#include <stdio.h>
//int main()
//{
//	double num = 3.14;
//	double * ptr = &num;
//	double ** dptr = &ptr;
//	double * ptr2 = NULL;
//	printf("%p %p \n", ptr, *dptr);
//	printf("%.2f %.2f \n", num, **dptr);
//	ptr2 = *dptr;
//	*ptr2 = 10.99;
//	printf("%.2f %.2f \n", num, **dptr);
//
//	return 0;
//}


//12 배열포인터를 이용한 문자열 저장

//#include <stdio.h>
//int main()
//{
//	char *str[4];	//배열포인터
//	str[0] = "Hello ?";
//	str[1] = "My Name is ";
//	str[2] = "Jung ";
//	str[3] = "Woo Gyun";
//
//	printf("%s %s %s %s \n", str[0], str[1], str[2], str[3]);
//
//	return 0;
//}


//13 Main 함수의 인수 사용

//#include <stdio.h>
//int main(int argc ,char *argv[])
//{
//	int i = 0;
//	printf("전달된 문자열의 수 : %d\n", argc);
//	for (i = 0; i < argc; i++)
//	{
//		printf("%d번째 문자열 : %s\n", i + 1, argv[i]);
//	}
//	return 0;
//}

//14 void 포인터
//->자료형이 지정되어있지 않은포인터
//-> 어떤 자료든지 담을 수 있다
//-> 단 자료를 이용할때는 특정 자료형으로 형변환을 해주어야 사용가능하다

//#include <stdio.h>
//int main()
//{
//	int num1 = 10;
//	double num2 = 10.4;
//	void * ptr;
//	ptr = &num1;
//	printf("%d\n", *(int *)ptr);
//	ptr = &num2;
//	printf("%lf\n", *(double *)ptr);
//
//	return 0;
//}
//

//문제
//
//길이가 6인 int형 배열 arr을 선언하고 이를 1,2,3,4,5,6으로 초기화
//배열의 앞과 뒤를 가리키는 포인터 변수 두개를 선언해서 이를활용해서
//배열에 저장된 값의 순서가 6 5 4 3 2 1 이 되도록 변경


//#include <stdio.h>
//int main()
//{
//	int arr[6] = { 1,2,3,4,5,6 };
//	int *ptr1 = &arr[0];	//배열요소의 첫번째를 가리키는 포인터
//	int *ptr2 = &arr[5];	//배열요소의 마지막번째를 가리키는 포인터
//	printf("Swap이전의 배열 arr :");
//	for (int i = 0; i < 6; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	//Swap
//	int tmp = 0;
//	for(int i=0;i<3;i++)
//	{
//		tmp = *ptr1;	
//		*ptr1 = *ptr2;
//		*ptr2 = tmp;
//		ptr1++;
//		ptr2--;
//	}
//	//Swap이후 배열 확인
//	printf("Swap이후의 배열 arr :");
//	for (int i = 0; i < 6; i++)
//	{	
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}






























