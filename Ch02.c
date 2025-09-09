//------------------------------------------------------------------------------------------------------------------------------------------

//00 전날복습


//다음과 같이 출력되는 프로그램을 작성하라.
//(각 요소들은 10칸씩 공간을 확보하여 오른쪽으로 정렬하여 출력한다.)


//출력 예
//item     count     price
//pen           20       100
//note            5         95
//eraser      110        97

//답

//#include <stdio.h>
//int main()
//{
//	printf("%-10s%-10s%-10s\n","item","count","price");
//	printf("%-10s%5d%10d\n", "pen", 20, 100);
//	printf("%-10s%5d%10d\n", "note",5, 95);
//	printf("%-10s%5d%10d\n", "eraser", 110, 97);
//	return 0;
//}

//------------------------------------------------------------------------------------------------------------------------------------------

//01 변수 기본

//#include <stdio.h>
//
//int main()
//{
//	int num1 = 10; //정수 10을 4byte 정수공간을 만들고 num1이름을 가진변수공간에 값초기화
//	int num2 = 20;
//	int num3 = num1 + num2;//num1의값 + num2의값의 결과를 num3변수공간에 대입
//	printf("num1 = %d num2 = %d num3 = %d\n", num1, num2, num3);
//	//num1,num2,num3변수값을 각 서식에맞게 printf
//
//	float n1 = 10.1; //10.1을 4byte 실수저장공간n1에 값 초기화
//	float n2 = 20.1; //20.1을 4byte 실수저장공간n2에 값 초기화
//	float n3 = n1 + n2;//n1값+n2값 결과를 4byte 실수n3변수공간에 값 초기화
//	printf("n1=%f n2=%f n3=%f\n ", n1, n2, n3); 
//	
//	char ch1 = 'A'; //한문자 'A'를 1byte정수가 저장될수있는 공간ch1에 값 초기화
//	char ch2 = 'B';
//	printf("ch1=%c ch2=%c\n", ch1, ch2);
//
//	char str1[10] = "Hello"; //문자열 Hello를 char크기10byte배열요소에 각각 문자단위로 저장
//	char str2[10] = "world";
//	printf("str1=%s str2=%s\n", str1, str2);
//	//str1과 str2안의 문자열을 각각 %s 형식으로 printf
//	return 0;
//}


//02 선언/정의/초기화

//선언 : 이름부여(식별자생성)
//정의 : 이름부여+공간형성
//초기화: 정의후 기본값대입

//#include <stdio.h>
//int main()
//{
//	
//	int num1;//변수 정의 .. 값을 대입하지 않으면 임의의값이 저장
//	int num2=30;	//변수 정의+초기화 .. 공간생성과 동시에 기본값 저장
//
//	10;		//리터럴 상수(기본자료형 int)
//	20.4;	//리터럴 상수(기본자료형 double)
//	'A';		//리터럴 상수(기본자료형 int)
//	"hello";	//리터럴 상수(기본자료형 char[]);
//
//	num2 = 50;//num2는 현재 변수공간이기 때문에 다른값으로 변경 가능
//	const int num3=60;//변수공간을 상수화(심볼릭상수) ..다른값으로 변경불가
//	num3 = 70;	//오류 발생 
//
//	return 0;
//}


//문제

//int 형 변수 n1,n2,n3에 각각 10,20,30으로 초기화하고
//n1와 n2의 곱셈(*)결과를 int n4 변수공간에 초기화하세요
//n1*n2*n3 결과를 int n5변수공간에 초기화 하고
//n1,n2,n3,n4,n5를 printf 로 확인합니다
//
//char ch1 에 'A'로 초기화 한뒤 ch1에 1을 더한값을 ch1공간에 대입하세요
//그리고 ch1의 값을 한문자 서식으로 출력합니다
//
//char str1[20] 배열에 "Hello World"문자열로 초기화 합니다 그리고 출력해보세요

//#include <stdio.h>
//int main()
//{
//	int n1 = 10, n2 = 20, n3 = 30;
//	int n4 = n1 * n2;
//	int n5 = n1 * n2*n3;
//	printf("n1=%d n2=%d n3=%d n4=%d n5=%d\n", n1, n2, n3, n4, n5);
//	char ch1 = 'A';
//	ch1 = ch1 + 1;
//	printf("ch1=%c\n", ch1);
//	char str1[20] = "Hello World";
//	printf("str1의 문자열 :%s\n", str1);
//	return 0;
//}

//------------------------------------------------------------------------------------------------------------------------------------------

//03 표준 입력 함수 - scanf

//#include <stdio.h>
//int main()
//{
//	int n1, n2, sum;	//4byte 정수공간을 각각만들고 n1,n2,sum 이름부여
//	printf("1번째 정수 입력 : ");	
//	scanf_s("%d", &n1);	 //키보드로부터입력한 값을 10진서식으로받아서 n1의주소
//									 //로 가서 저장
//	printf("2번째 정수 입력 : ");
//	scanf_s("%d", &n2);
//
//	sum = n1 + n2;//n1+n2의 결과값을 sum공간에 대입
//	printf("두수의 합은 %d 입니다\n", sum);
//	return 0;
//}

//04 표준 입력함수 - scanf

//#include <stdio.h>
//int main()
//{
//	float flt;
//	double dbl;
//	char ch1;
//	char str[5];
//
//	printf("float형자료에 값 입력 :");
//	scanf_s("%f", &flt); //float 형서식에 맞게 키보드로 입력받아 flt위치에 저장
//	rewind(stdin);	//표준입력스트림 버퍼공간 초기화
//	printf("double형자료에 값 입력 :");
//	scanf_s("%lf",&dbl); //long float(==double) 형서식에 맞게 키보드로 입력받아 dbl위치에 저장
//	rewind(stdin);//버퍼초기화
//	printf("char 형자료에 한문자 입력: ");
//	scanf_s("%c", &ch1);//char형 서식으로 받아 ch1변수위치에 저장
//	rewind(stdin);//버퍼초기화
//	printf("배열공간에 문자열 입력 :");
//	scanf_s("%s", str,sizeof(str));//str배열의 크기만큼 문자열형서식으로 받아 str위치에 저장
//	rewind(stdin);//버퍼 초기화 
//	printf("flt=%f dbl=%lf ch1=%c str=%s\n", flt, dbl, ch1, str);
//}


//문제01

//세과목의 점수를 입력받아 (변수명: kor,eng,mat) 세수의 합(변수명:sum)과
//평균(변수명:avr)을 구하고 출력해보세요
//ex)
//국어점수 입력 : 90
//영어점수 입력 : 80
//수학점수 입력 : 70
//국어:90 영어:80 수학:70 총점:240 평균:80

//#include <stdio.h>
//int main()
//{
//	int kor=0, eng=0, mat= 0, sum = 0, avr = 0;
//	printf("세과목의점수를 입력(국어/영어/수학) : ");
//	scanf_s("%d%d%d", &kor, &eng, &mat);//scanf는 띄어쓰기(스페이스바)나 엔터키(개행)를 통해서 다음 값을 인식한다
//																	//%d을 여러개를 형식지정자에 입력한경우 띄어쓰기나 엔터키를  기준으로
//																	//값을 인식해서 차례로 변수위치에 저장을 한다
//
//	//printf("국어점수 입력:");
//	//scanf_s("%d", &kor);
//	//rewind(stdin);
//	//printf("영어점수 입력:");
//	//scanf_s("%d", &eng);
//	//rewind(stdin);
//	//printf("수학점수 입력:");
//	//scanf_s("%d", &mat);
//	//rewind(stdin);
//	sum = kor + eng + mat;
//	avr = sum / 3;
//	printf("국어=%d 영어=%d  수학=%d 총점=%d 평균%d\n", kor, eng, mat, sum, avr);
//	return 0;
//}



//문제02

//다음과 같이 데이터를 입력받아 출력하세요
//당신의 이름은 무엇입니까? 홍길동(입력)
//홍길동(%s) 님의 나이는 몇살입니까? 24(입력)
//홍길동(%s) 님의 나이는 24(%d)살입니다

//#include <stdio.h>
//int main()
//{
//	char name[10] = { 0 };
//	int age = 0;
//	printf("당신의 이름은 무엇입니까? ");
//	scanf_s("%s", name, sizeof(name));
//	printf("%s 님의 나이는 몇살입니까? ", name);
//	scanf_s("%d", &age);
//	printf("%s 님의 나이는 %d 살입니다\n", name, age);
//
//	return 0;
//}


//------------------------------------------------------------------------------------------------------------------------------------------

//06 실수의 표현

//#include <stdio.h>
//
//int main()
//{
//	//자료형에 따른 숫자범위 확인
//	char ch1 = 127;		//char는 1byte 정수공간 ..음수표현을 위해서 제일왼쪽비트는 부호비트로쓴다
//	printf("ch1=%d\n", ch1);
//	ch1 = 255;
//	unsigned char ch2 = 300;	//unsigned 가 자료형 앞에 붙으면 양수값만 부호비트없이 양수값만 저장될수있다
//	printf("ch1=%d ch2=%d\n", ch1, ch2);
//
//	ch1 = 300;		//char  는 1byte 정수공간 최대 255까지만 숫자 저장이 가능하다 초과하는 숫자를 입력!
//	printf("ch1=%d\n", ch1);
//
//	int num = 10;
//	printf("num=%d\n", num);
//	num = 3000000000; //30억
//	printf("num=%d\n", num);
//
//	
//
//	//리터럴접미사(리터럴자료형을 지정)
//	10;		//리터럴상수 정수형은 int자료형
//	10l;		//리터럴상수에 l 접미사 추가 long  자료형으로 변경
//	10ll;		//리터럴상수에 ll접미사 추가 long long 자료형(8byte정수) 으로 변경
//	10.3;	//리터럴상수의 실수 자료형 기본 double형
//	10.3f;	//리터럴상수의 실수 자료형을 float으로 변경
//
//	//실수의 오차범위 확인
//	float n1 = 3.2222222222222222f;		//소수점 6-9자리까지는 유효범위
//	double n2 = 3.2222222222222222;		//소수점 15-18자리까지는 유효범위
//
//
//	return 0;
//}



//예제 08 - 자동 형변환

//자동형변환(암시적형변환): 컴파일러에 의해서 필요한 자료형으로 변환
//강제형변환(명시적형변환): 프로그래머에 의해서 자료형 강제 변환


//#include <stdio.h>
//int main()
//{
//	int num1 = 10.3;
//	double num2 = 123;
//
//	printf("%d\n", num1);
//	printf("%f\n", num2);
//	return 0;
//}

//예제 09 - 강제 형변환
//#include <stdio.h>
//int main()
//{
//	double num1 = 10 / 4;
//	double num2 = (double)10 / 4;
//
//	printf("%f\n", num1);
//	printf("%f\n", num2);
//	return 0;
//}


//예제 10 - 자동형변환으로 인한 데이터 손실

//#include <stdio.h>
//
//int main()
//{
//	int num1;
//	float num2 = 367.78;
//	num1 = num2;
//	printf("num1 = %d\n", num1);
//
//	return 0;
//}


//------------------------------------------------------------------------------------------------------------------------------------------















//---------------------------------------------정리전 ----------------------------------------------------------



//-------------------------------------------------------------------------------------------------------------------
// C언어 기본 입력-scanf()
//-------------------------------------------------------------------------------------------------------------------

//--------------------------------------------
// Scanf 기본
//--------------------------------------------

//Korea page 034

//#include <stdio.h>
//
//void main()
//{
//	int a, b;
//	printf("a= ");
//	scanf_s("%d", &a);
//	printf("b= ");
//	scanf_s("%d", &b);
//	printf("a=%d , b=%d\n", a, b);
//
//	//getchar();
//}


//예제 1 - 정수입력

//#include <stdio.h>
//int main()
//{
//	int num1, num2, sum;
//	printf("정수 2개를 입력하세요:");
//	scanf_s("%d%d", &num1, &num2);
//	sum = num1 + num2;
//
//	printf("두수의 합은 %d 입니다", sum);
//	return 0;
//
//}

//예제 2 - 실수입력

//#include <stdio.h>
//
//int main()
//{
//	float num1;
//	double num2;
//
//	printf("실수 입력1:");
//
//	scanf_s("%f", &num1);
//	printf("실수 입력2:");
//
//	scanf_s("%lf", &num2);
//
//	printf("실수 1값 :%f\n", num1);
//	printf("실수 2값 :%lf\n", num2);
//	return 0;
//}


// 예제 3 - 문자입력

//#include <stdio.h>
//int main()
//{
//	char ch;
//	printf("1문자 입력:");
//	scanf_s("%c", &ch, sizeof(ch));
//	printf("%c\n", ch);
//	printf("%d\n", ch);
//	return 0;
//
//}


// 예제 4 - 문자열 입력 


//#include <stdio.h>
//
//int main()
//{
//	char str[10];
//	printf("문자열 입력:");
//	scanf_s("%c", str, sizeof(str));
//	printf("%s\n", str);
//
//	return 0;
//}


//--------------------------------------------
// Scanf 잘못 사용한 예
//--------------------------------------------


//예제 1 - 잘못된 형식지정자 사용

//#include <stdio.h>
//int main()
//{
//    int su1 = 0;
//    int su2 = 0;
//    int sum = 0;
//    printf("정수 두개를 입력하세요:");
//    scanf_s("%d %d\n", &su1, &su2);
//    sum = su1 + su2;
//    printf("두 수의 합 : %d ", sum);
//    return 0;
//}


//예제 2 - 표준입출력 버퍼공간의 초기화

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	printf("값을 입력하세요:");
//	scanf_s("%d %d", &i, &j);
//	printf("입력값 :  %d %d\n", i, j);
//	//rewind(stdin);
//	//fflush(stdin);
//	printf("값을 입력하세요:");
//	scanf_s("%d %d", &i, &j);
//	printf("입력값 :  %d %d\n", i, j);
//	return 0;
//}


//예제 3 - 자료형의 불일치

//#include <stdio.h>
//int main()
//{
//	int n = 3;
//	printf("잘못된 형식 입력:");
//	scanf_s("%d", &n);
//	printf("%d\n", n);
//	return 0;
//}



//[문제풀기] 


//1 . 실수를 입력 받아 출력하세요
//
//2. 3과목의 성적을 입력 받아 합계와 평균을 구하세요
//
//3. 다음과 같이 데이터를 입력 받아 출력하세요
//
//당신의 이름은 무엇입니까? 홍길동
//홍길동님의 나이는 몇살입니까? 18
//홍길동님의 나이는 18살 입니다

//-------------------------------------------------------------------------------------------------------------------
// 변수와 자료형
//-------------------------------------------------------------------------------------------------------------------

//[순서]
//1 수 ->저장을 전제로 한다
//2 변수란
//3 변수의 필요성
//4 숫자 자료형(숫자->저장 범위(크기)제한)
//5 문자 자료형(한문자 표현을 위한 최적 크기 지정)



//Korea Page 037 - 자료형 기본

//#include <stdio.h>
//
//void main()
//{
//	int i = 0;
//	short s = 1;
//	long l = 2;
//	float f = 3.14;
//	double d = 4.13;
//
//	printf("int		i=%d\n", i);
//	printf("short	s=%d\n", s);
//	printf("long	l=%d\n", l);
//	printf("float	f=%f\n", f);
//	printf("double	d=%f\n", d);
//}


//Korea Page 38 - 선언/정의/초기화(값)


//#include <stdio.h>
//
//void main()
//{
//	char a = 'a';
//	char b = 65;
//
//	printf("char a=%c\n", a);
//	printf("ASCII Code 65 = %c\n", b);
//}



//예제 1

//#include <stdio.h>
//
//int main()
//{
//	int age = 21;
//	float weight = 50.5, height = 163.5;
//
//	printf("나의 나이는 %d세 입니다.\n", age);
//	printf("나의 몸무게는 %f(kg)입니다.\n", weight);
//	printf("나의 신장은 %f(cm)입니다.\n", height);
//	
//	return 0;
//}


//예제 2

//#include <stdio.h>
//
//int main()
//{
//	int num = 123;
//	char ch = 'A';
//
//	num = num + 1;
//	ch = 'B';
//
//	printf("num=%d\n", num);
//	printf("ch=%c\n", ch);
//	return 0;
//}

//예제 3

//#include <stdio.h>
//
//int main()
//{
//	printf("ASCII Code %d = > %c\n", 65, 65);
//	printf("ASCII Code %d = > %c\n", 97, 97);
//	printf("ASCII Code %d = > %c\n", '0', '0');
//	printf("ASCII Code %d = > %c\n", 'z', 'z');
//	printf("ASCII Code %d = > %c\n", 'Z', 'Z');
//	printf("ASCII Code %d = > %c\n", '9', '9');
//	return 0;
//}


//예제 4

//#include <stdio.h>
//
//int main(void)
//{
//	int num1, num2;											// num1,num2 변수 정의만함 변수에 쓰레기값 들어감, 컴파일러에 의해 오류 감지 
//	int num3 = 30, num4 = 40;								// num3,num4 변수 선언 & 초기화	
//	//printf("num1 = %d\t num2 = %d\n", num1, num2);
//	printf("num3 = %d\t num4 = %d\n", num3, num4);			// 변수 선언과 동시 초기화 값 확인
//
//	return 0;  
//}


//예제 5

//#include <stdio.h>
//
//int main(void)
//{
//	int num1 = 3;			
//	int num2 = 4;		
//	int result = num1 + num2;
//
//	printf("덧셈 결과 : %d \n", result);
//	printf("%d + %d = %d \n", num1, num2, result);
//
//	return 0;
//}



//Korea Page 39 문자열 변수의 선언


//#include <stdio.h>
//
//void main()
//{
//	char name[4] = "Lee";
//	printf("name=%s\n", name);
//}


//--------------------------------------------
// 자료형의 재정의
//--------------------------------------------


// Korea Page 40 - typedef 

//#include <stdio.h>
//
//typedef unsigned int uint;
//
//typedef int integer;
//
//void main()
//{
//	uint number1;
//
//	integer number2;
//
//	number1 = 100;
//	number2 = 200;
//
//	printf("number1 : %d, number2 = %d\n", number1, number2);
//}



//-------------------------------------------------------------------------------------------------------------------
// 상수
//-------------------------------------------------------------------------------------------------------------------

//--------------------------------------------
// 리터럴
//--------------------------------------------

//#include <stdio.h>
//
//void main()
//{
//
//	3;
//	3l;
//	3ll;
//	3.14;
//	3.14f;
//	3.14l;
//
//	/*int i = 3;
//	long l = 3l;
//	long long i = 3ll;
//	double d = 3.14;
//	float f = 3.14f;
//	long double ld = 3.14l;*/
//
//}

//--------------------------------------------
// const(심볼릭)
//--------------------------------------------

// Korea Page 43


//#include <stdio.h>
//
//void main()
//{
//	const float PI = 3.14;
//	int radius;
//
//	scanf_s("%d", &radius);
//	printf("%d*3.14 = %f\n", radius, radius * PI);
//
//}



//--------------------------------------------
// 사용자 정의 상수(매크로)
//--------------------------------------------


// Korea Page 44

//#define CHARGE 2000;		
//
//#include <stdio.h>
//
//void main()
//{
//	int time, rate;
//	printf("사용 시간을 입력:");
//
//	scanf_s("%d", &time);
//
//	rate = time * CHARGE;
//
//	printf("사용 요금은 %d원 입니다", rate);
//}


// Korea Page 45 - 변수를 상수로


//#include <stdio.h>
//
//void main()
//{
//	int time, rate;
//
//	const int charge = 2000;
//
//	printf("사용 시간을 입력:");
//	
//	scanf_s("%d", &time);
//	
//	rate = time * charge;
//
//	printf("사용 요금은 %d원 입니다", rate);
//}