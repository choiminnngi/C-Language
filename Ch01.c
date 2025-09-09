//01 C언어 기본구조 확인

//주석처리단축키 :ctrl+k+c
//주석해제단축키 :ctrl+k+u

//#include <stdio.h> //전처리문
////include :전처리문,프로그램을 컴파일하기전에
////미리 사용할 함수들을 가져오기위해서 선언하는 문법
////stdio.h ->STanDard Input Output  
////C언어에서 기본적으로 제공하는 표준 입출력 함수를 
////제공할수는 파일
//
//int main()	//메인함수 : 제일 먼저 실행되는 함수
//{
//	printf("Hello World");// printf함수:C언어 제공하는 기본함수
//									// 모니터에 특정자료를 출력해주는데 사용
//	return 0; //함수종료시 값 전달
//}


//02 ESCAPE 문자

//ESCAPE : 탈출하다. 기존의 정보표시를 위한 용도가아닌
//각종 제어기능(엔터,ESC,SP,..Tab)을 이용하기위해 특정 문자(n,a,t,..)
//에 \를 추가해서 제어기능을 가능하도록 하는 문법
// \n : 줄바꿈
// \t  : Tab  크기만큼 커서이동(8칸)
// \b : back space 한문자 삭제

//#include <stdio.h>
//int main()
//{
//	printf("Hello World\n");
//	printf("Hello World\n");
//	printf("Hello World\n");
//	printf("Hello World\n");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	printf("boy\tapple \n"); // \t : tab키 크기만큼 커서이동(기본 8칸)
//	printf("morning\b\b  \n"); // \b : 앞문자한칸삭제 (\b뒤에 공백필요)
//	printf("up\r down \n");	// \r : 행의 처음으로 이동
//	printf("I Say \"Hello?\"" ); // 형식지정자(" ")안에 \나 "를 사용할때는 해당
//										   // 문자앞에 \를 추가해준다
//	return 0;
//}

//03 서식문자

//#include <stdio.h>
//int main()
//{
//	printf("10진수 정수 서식 : %d \n", 10);	 //%d : 10진 정수 서식문자
//	printf("10진수 실수 서식 : %f \n", 10.2); //%f : 10진 실수 서식문자
//	printf("문자형 서식  : %c \n", 'A'); //%c :한문자를 담는 서식문자
//	printf("문자열형 서식 : %s \n", "This is String Test"); //%s 문자열을 담는서식문자
//	printf("%d + %d = %d \n", 10, 20, 10 + 20);
//	//잘못된 서식문자의 사용예
//	printf("\n");
//	printf("%d  + %d \n", 5, 12, 5 + 12); //서식문자의 개수보다 전달하는 인자의 개수가 많다
//	printf("%d  + %d =%d\n", 5, 12);		//서식문자의 개수가 전달하는 인자의 개수보다 많다
//	printf("실수형 서식에 정수값 전달 = %f\n", 123); //서식문자의 자료형과 인자의자료형이다르다
//	printf("정수형 서식에 실수값 전달 = %d\n", 123.456);//서식문자의 자료형과 인자의자료형이다르다
//	
//	return 0;
//}


//문제

//이름 	나이 	주소
//이지성	27	대구광역시
//금영석	46	서울특별시
//김선명	31	부산광역시

//#include <stdio.h>
//int main()
//{
//	printf("이름\t나이\t주소\n");
//	printf("이지성\t%d\t대구광역시\n",30);
//	printf("금영석\t46\t서울특별시\n");
//	printf("김선명\t31\t부산광역시\n");
//	return 0;
//}



//04 서식문자의 옵션 

//#include <stdio.h>
//int main()
//{
//	printf("%d\n", 123);
//	printf("%5d\n", 123);
//	printf("%5d %-5d\n", 456, 789);
//	printf("%f\n", 123.456);
//	printf("%10.2f\n", 123.456);
//	return 0;
//}


//문제

//나의 이름은 %s 입니다
//%s 의 나이는 %d 살입니다
//%s의 성별은 %c 입니다 (M/W 두 문자중 하나를 인자로 전달)
//%s 의 키는 %f입니다 (키는 소숫점 1자리까지만 확인)
//
//의 문장을 출력할때 해당 서식에 맞는자료(문자열,문자,정수,실수)를 입력해서
//printf 하세요

//#include <stdio.h>
//int main()
//{
//	printf("나의 이름은 %s입니다\n", "정우균");	// 문자열은  " " 를 사용
//	printf("%s의 나이는 %d살입니다\n","정우균", 35);
//	printf("%s의 성별은 %c입니다\n", "정우균",'M');	//문자는 ' ' 를 사용
//	printf("%s의 키는 %.1f 입니다\n", "정우균", 177.5);
//	return 0;
//}


//05 진수 예제

//173(10진수)
//2진수로  : 10101101
//8진수로 : 255
//16진수로 :AD

#include <stdio.h>
int main()
{
	printf("10진정수서식으로 출력 : %d\n", 173);	//10진수 173을 %d서식의 진수에 맞게 printf
	printf("10진정수서식으로 출력 : %d\n", 0255); //8진수 255를 %d서식의 진수에 맞게 printf
	printf("10진정수서식으로 출력 : %d\n", 0xAD);//16진수 AD를 %d서식의 진수에 맞게 printf
	printf("\n");
	//%0 는 8진수 서식문자
	printf("8진정수서식으로 출력 : %o\n", 173);
	printf("8진정수서식으로 출력 : %o\n", 0255);
	printf("8진정수서식으로 출력 : %o\n", 0xAD);
	printf("\n");
	//%x는 16진수 서식문자
	printf("16진정수서식으로 출력 : %X\n", 173);
	printf("16진정수서식으로 출력 : %x\n", 0255);
	printf("16진정수서식으로 출력 : %x\n", 0xAD);
	return 0;
}





























