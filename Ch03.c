//01 기본 연산자
// 기본 산술 연산자( + , - , * , / , %)

//#include <stdio.h>
//int main()
//{
//	int n1 = 20, n2 = 3;
//
//	printf("%d + %d  = %d\n", n1, n2, n1 + n2);
//	printf("%d - %d  = %d\n", n1, n2, n1 - n2);
//	printf("%d * %d  = %d\n", n1, n2, n1 * n2);
//	printf("%d / %d  = %d\n", n1, n2, n1 / n2);		// / 연산자는 나누었을때 나오는 몫
//	printf("%d %% %d  = %d\n", n1, n2, n1 % n2);// % 연산자는 나누었을때 나오는 나머지
//
//	return 0;
//}

//02 복합 대입연산자
// (+=, -= , *= , /= , %= )

//#include <stdio.h>
//
//int main()
//{
//	int n1 = 100, n2 = 3, n3 = 10;
//
//	n2 += n1; // n2=n2+n1
//	n3 -= n2; // n3 = n3-n2;
//	printf("n2 = %d , n3 = %d \n", n2, n3);
//
//	return 0;
//}

//03관계연산자
//( == , > , < , >= , <= ,!=)

//#include <stdio.h>
//int main()
//{
//	// 참 : 프로그래머가 원하는 결과값을 도출할때
//	// 참 : 0이 아닌 모든값 ,대표값은 1이다
//	//거짓 : 프로그래머가 원하지 않은 결과값이 도출될때( 컴파일오류,실행오류,버그 ..)
//	//거짓 : 0
//	//비교연산 결과 참인경우는 1 거짓인경우는 0을 반환 
//
//	int n1 = 10, n2 = 20, n3 = 10;
//
//	printf("%d == %d=%d\n", n1, n2, n1 == n2);	// == 동등비교 :두피연산자값이 일치하면 참(1) 반환
//	printf("%d > %d=%d\n", n1, n2, n1 > n2);
//	printf("%d >= %d=%d\n", n1, n2, n1 >= n2);
//	printf("%d < %d=%d\n", n1, n2, n1 < n2);
//	printf("%d <= %d=%d\n", n1, n2, n1 <= n2);
//	printf("%d != %d =%d\n", n1, n2, n1 != n2);		// != : 두 피연산자값이 일치하지 않으면 참(1)반환
//
//	return 0;
//}

//04증감연산자

//(++a, --a , a++ , a--)
// ++a	: a안의 값을 1 증가(전치연산 :  변수안의값을 먼저 1증가 -> 다른 연산처리)
//  -- a  : a안의 값을 1 감소
// a++ : a안의 값을 1 증가(후치연산 :  다른 연산처리 -> 변수안의 값을 1증가)
// a-- : a안의 값을 1 감소 
//#include <stdio.h>
//int main()
//{
//	int su1=10, su2, su3;
//
//	su2 = ++su1;	//전치연산자(변수명앞에 ++,--) 
//	su3 = su1++;	//후치연산자(변수명뒤에 ++,--)
//	printf("su1 = %d\n", su1);
//	printf("su2 = %d\n", su2);
//	printf("su3 = %d\n", su3);
//
//	return 0;
//}


//05 논리 연산자

//#include <stdio.h>
//int main()
//{
//	//AND 연산자(&&) : 두 피연산자가 모두 참일때 참(1)을반환
//	printf("1 && 1 = %d\n", 0 && 0);
//	printf("1 && 0 = %d\n", 1 && 0);
//	printf("1 && 0 = %d\n", 0 && 1);
//	printf("1 && 0 = %d\n", -1 && -99);
//	printf("\n");
//	//OR연산자(||)		: 두 피연산자 중 하나만 참이더라도 참(1)을 반환
//	printf("1 || 1 = %d\n", 0 || 0);
//	printf("1 || 0 = %d\n", -100 || 0);
//	printf("1 || 0 = %d\n", 0 || -50);
//	printf("1 || 0 = %d\n", 1234 || 1);
//
//	return 0;
//}


//06 조건 연산자

// (조건식) ? 참일경우실행코드 : 거짓일경우실행코드;

//#include <stdio.h>
//int main()
//{
//	int su = 30;
//	(su>20) ? printf("%d는 20보다 큽니다\n", su) : printf("%d는 20보다 작습니다\n", su);
//
//	return 0;
//}


//07 %연산자의 활용

//#include <stdio.h>
//int main()
//{
//	int num = 9;
//	//숫자%2  ==0 짝수 , 숫자%2 ==1 홀수
//	printf("짝 홀수 구분 : %d\n", num % 2);
//
//	//숫자%n  , n의 배수 확인
//	printf("3의 배수확인 :%d\n", num % 3);
//
//	//숫자%n , 결과값은 0-(n-1) 까지
//	printf("3으로 %%연산시 나오는 경우의 수:%d\n", 4 % 3);
//	printf("3으로 %%연산시 나오는 경우의 수:%d\n", 5 % 3);
//	printf("3으로 %%연산시 나오는 경우의 수:%d\n", 6 % 3);
//	printf("3으로 %%연산시 나오는 경우의 수:%d\n", 7 % 3);
//
//	printf("\n");
//	//숫자%10 끝한자리 출력
//	printf("1234의 마지막 숫자 출력 :%d\n", 1234 % 10);
//	printf("1234의 끝 두자리 출력 :%d\n", 1234 % 100);
//	printf("1234의 끝 세자리 출력:%d\n", 1234 % 1000);
//	
//	printf("1234의 왼쪽 첫번째 숫자 출력 :%d\n", 1234 / 1000);
//	printf("1234의 왼쪽 두번째까지 숫자 출력 :%d\n", 1234 / 100);
//	printf("1234의 왼쪽 세번째까지 숫자 출력 :%d\n", 1234 / 10);
//
//	return 0;
//}



//문제
//
//01 정수 하나를 입력받아 짝/홀수 를 구분해서 출력하세요

//#include <stdio.h>
//int main()
//{
//	int num;
//	printf("정수 값 입력 : ");
//	scanf_s("%d", &num);
//	(num%2==0)?printf("%d는 짝수입니다\n",num):printf("%d는 홀수입니다\n",num);
//	return 0;
//}

//02 정수 하나를 입력받아 7의 배수이면 출력하세요

//#include <stdio.h>
//int main()
//{
//	int num;
//	printf("정수 값 1 입력 : ");
//	scanf_s("%d", &num);
//	(num % 7 == 0) ? printf("입력한 수는 7의 배수입니다\n") : printf("");
//	return 0;
//}

//03 두 수를 입력 받아 큰수를 출력하세요

//#include <stdio.h>
//int main()
//{
//	int num1,num2;
//	printf("정수 값 2 입력 : ");
//	scanf_s("%d%d", &num1,&num2);
//	(num1 > num2) ? printf("큰수 : %d\n", num1) : printf("큰수:%d\n", num2);
//	return 0;
//}


//예제08 비트논리 연산자
// 19 && 29

//#include <stdio.h>
//int main()
//{
//	int num1 = 15;						// 00000000 00000000 00000000 00001111
//	int num2 = 20;						// 00000000 00000000 00000000 00010100
//	int num3 = num1 & num2; // 4
//	int num4 = num1 | num2;  // 31
//	int num5 = num1 ^ num2; // ^  둘다 참일때는 거짓 27
//	int num6 = ~num1;// 11111111 11111111 11111111 11110000
//
//	//0 ^ 0 = 0
//	//0 ^ 1 = 1
//	//1 ^ 0 = 1
//	//1 ^ 1 = 0
//
//
//	printf("AND 비트 연산 결과 :  %d\n", num3);
//	printf("OR 비트 연산 결과 :  %d\n", num4);
//	printf("XOR 비트 연산 결과 :  %d\n", num5);
//	printf("NOT 비트 연산 결과 :  %d\n", num6);
//
//	return 0;
//}


//예제09 Shift 연산자

//#include <stdio.h>
//int main()
//{
//	char num1 = 5;					//	00000101
//	char num2 = 20;					//	00010100
//	char num3 = num1 << 2;		// << 왼쪽으로 비트열를 숫자만큼 이동//	00010100 
//	char num4 = num2 >> 4;		// >> 오른쪽으로 비트열을 숫자만큼 이동 //00000001
//	printf("<< shift 연산 결과 :%d\n", num3);
//	printf(">> shift 연산 결과 :%d\n", num4);
//	return 0;
//}

//예제10 sizeof함수

//#include <stdio.h>
//int main()
//{
//	printf("int 자료형 크기 = %d\n", sizeof(int));
//	printf("double 자료형 크기 = %d\n", sizeof(double));
//	printf("char 자료형 크기 = %d\n", sizeof(char));
//	printf("한문자 알파벳 크기 = %d\n", sizeof('a'));
//	printf("한문자 한글 크기 = %d\n", sizeof('가'));
//	printf("HelloWorld 문자열 크기 = %d\n", sizeof("Hello World"));
//	printf("리터럴 정수형 자료 크기 = %d\n", sizeof(10));
//	printf("리터럴 실수형 자료 크기 = %d\n", sizeof(10.4));
//	return 0;
//}











