

//IF 기본

//#include <stdio.h>
//
//int main()
//{
//	int num = -1;
//	if (num > 0)	// 조건식()안의 값이 참이라면 이하의 종속문장({}) 실행
//						// 조건식()안의 값이 거짓이라면 종속문장을 건너뜀
//	{	
//		printf("num>0일경우 실행되는 종속문장\n");
//	}
//	printf("if문 이후의 실행문장\n");
//	return 0;
//}


//02 IF 문

//#include <stdio.h>
//int main()
//{
//	int num = 0;
//	printf("정수 값 1 개 입력 : ");
//	scanf_s("%d", &num);
//
//	if (num % 2 == 0)
//	{
//		printf("%d은 짝수 입니다\n", num);
//	}
//	if (num % 3 == 0)
//	{
//		printf("%d은 3의 배수 입니다\n", num);
//	}
//	if(num % 4 ==0)
//	{
//		printf("%d은 4의 배수 입니다\n", num);
//	}
//	printf("if이후의 실행 코드 ");
//	return 0;
//}

//03 IF문

//#include <stdio.h>
//int main()
//{
//	if (1)
//		printf("1은 참입니다\n");
//	if (-1)
//		printf("-1은 참입니다\n");
//	if('\n')		// \n은 아스키코드값이 10 .. 참이다
//		printf("\\n은 참입니다\n");
//	if ('\0')		// \0은 아스키코드값이 0 .. 거짓이다
//		printf("NULL 문자는 거짓이므로 출력되지 않습니다\n");
//	if (0)
//		printf("숫자 0은 거짓이기 때문에 출력되지 않습니다\n");
//	if (!0)	// 조건식의 수앞에 ! 이 적용되면 참이면 거짓 , 거짓이면 참을 반환
//		printf("숫자앞에 !인 경우 참이면 거짓 , 거짓이면 참값을 반환합니다\n");
//
//	return 0;
//}


//문제 

//01 입력한데이터가 3의 배수인경우 출력하세요(if문 사용)

//#include <stdio.h>
//int main()
//{
//	int num = 0;
//	printf("수를 입력하세요: ");
//	scanf_s("%d", &num);
//	if (num % 3 == 0)
//	{
//		printf("%d 는 3의 배수입니다\n", num);
//	}
//	return 0;
//}

//02 절대값을 구하는 프로그램을 작성

//#include <stdio.h>
//int main()
//{
//	int num = 0;
//	printf("수를 입력하세요: ");
//	scanf_s("%d", &num);
//	if (num < 0)
//	{
//		num = -num;
//	}
//	printf("절대값 : %d\n", num);
//	return 0;
//}


//03 세수를 입력받아 큰수를 출력(같이 풉니다)

//#include <stdio.h>
//int main()
//{
//	int n1, n2, n3;
//	printf("세 수를 입력 : ");
//	scanf_s("%d%d%d", &n1, &n2, &n3);
//	
//	//n1 이 제일 큰경우
//	if (n1 > n2 && n1 > n3)
//		printf("큰수 : %d\n", n1);
//	//n2 이 제일 큰경우
//	if(n2>n1 && n2>n3)
//		printf("큰수 : %d\n", n2);
//	//n3 이 제일 큰경우
//	if (n3 > n1 && n3 > n2)
//		printf("큰수 : %d\n", n3);
//	return 0;
//}



//문제

//세수를 입력받아서 최대값과 최소값을 출력하세요

//#include <stdio.h>
//
//int main()
//{
//	int n1, n2, n3;
//	printf("숫자 3개를 입력 :");
//	scanf_s("%d%d%d", &n1, &n2, &n3);
//	//최대값
//	if (n1>n2 && n1>n3)
//	{
//		printf("MAX : %d\n", n1);
//	}
//	if (n2 > n3&& n2 > n1)
//	{
//		printf("MAX : %d\n", n2);
//	}
//	if (n3 > n1 && n3 > n2)
//	{
//		printf("MAX : %d\n", n3);
//	}
//	//최소값
//	if (n1 < n2 && n1 < n3)
//	{
//		printf("MIN : %d\n", n1);
//	}
//	if (n2 < n3&& n2 < n1)
//	{
//		printf("MIN : %d\n", n2);
//	}
//	if (n3 < n1 && n3 < n2)
//	{
//		printf("MIN : %d\n", n3);
//	}
//	return 0;
//}



//04 if - else 

//#include <stdio.h>
//int main()
//{
//	int num;
//	printf("정수 1개 입력 : ");
//	scanf_s("%d", &num);
//
//	if (num % 2 == 0)	
//	{
//		printf("짝수 입니다");// 조건식이 참인경우 실행될 종속문장
//	}	
//	else //조건식이 거짓인 경우
//	{
//		printf("홀수 입니다");// 조건식이 거짓인 경우 실행될 종속문장
//	}
//	return 0;
//}


//05 if - else

//#include <stdio.h>
//int main()
//{
//	int n1;
//	printf("정수 1개 입력: ");
//	scanf_s("%d", &n1);
//	//짝홀수 구분
//	if (n1 % 2 == 0)	//짝수라면(조건식이 참인경우)
//	{
//		printf("짝수입니다\n");
//		//3의 배수 확인
//		if (n1 % 3 == 0)	//3의 배수라면(조건식이 참)
//		{
//			printf("3의 배수입니다\n");
//		}
//	}
//	else //홀수라면(조건식이 거짓인경우)
//	{
//		printf("홀수입니다\n");
//		if (n1 % 3 == 0)
//		{
//			printf("3의 배수입니다\n");
//		}
//	}
//	return 0;
//}


//06 else if  - 다중분기문

//#include <stdio.h>
//int main()
//{
//	int kor, eng, mat;
//	double avr;
//	printf("3과목의 성적을 입력하세요 (국어,영어,수학): ");
//	scanf_s("%d%d%d", &kor, &eng, &mat);
//	avr = (double)(kor + eng + mat) / 3;
//	//평균점수 70점이상이면서 국어60점이상,영어 60점이상 수학 60점이상인경우 합격
//	if (avr < 70)	//avr이 70점 미만이라면
//	{
//		printf("불합격\n");
//	}
//	else if (kor < 60)
//	{
//		printf("불합격\n");
//	}
//	else if (eng < 60)
//	{
//		printf("불합격\n");
//	}
//	else if (mat < 60)
//	{
//		printf("불합격\n");
//	}
//	else
//	{
//		printf("합격\n");
//	}
//	return 0;
//}



//문제 1 세과목의 성적을 입력 받아 합계와 평균을 구하고 평균이 90점이상이면 'A'
//80점 이상이면 'B' 70점 이상이면 'C' 60점 이상이면 'D' 60점 미만이면 'F'를 출력하세요


//#include <stdio.h>
//int main()
//{
//	int kor=0, eng=0, mat=0,sum=0;
//	double avr = 0.0;
//	printf("3과목 성적 입력(국어 영어 수학):");
//	scanf_s("%d%d%d", &kor, &eng, &mat);
//	sum = kor + eng + mat;
//	avr = sum / 3;
//	if (avr >= 90)
//		printf("A\n");
//	else if (avr >= 80)		// 80<= avr <90
//		printf("B\n");
//	else if (avr >= 70)		// 70<=avr<80
//		printf("C\n");
//	else if (avr >= 60)		//60 <=avr<70
//		printf("D\n");
//	else   //avr<60
//		printf("F\n");
//	return 0;
//}

//문제 2 if -else 문을 이용해서 3의 배수이면서 4이배수인경우 / 3의 배수가 아니면서 5의배수인경우
//를 출력해보세요

//#include <stdio.h>
//int main()
//{
//	int n1;
//	printf("정수 입력: ");
//	scanf_s("%d", &n1);
//	if (n1 % 3 == 0)	//3의배수인경우
//	{
//		if (n1 % 4 == 0)
//		{
//			printf("%d는 3의 배수이면서 4의 배수입니다\n", n1);
//		}
//	}
//	else // 3배수가 아닌경우
//	{
//		if (n1 % 5 == 0)
//		{
//			printf("%d는 3의 배수는 아니면서 5의 배수입니다\n", n1);
//		}
//	}
//	return 0;
//}







