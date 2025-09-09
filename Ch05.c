//01 Switch 기본

//#include <stdio.h>
//int main()
//{
//	int num;
//	printf("수 입력 : ");
//	scanf_s("%d", &num);
//
//	switch (num)
//	{
//	case 1:
//		printf("1 입력\n");
//		break;
//	case 2:
//		printf("2 입력\n");
//		break;
//	case 3:
//		printf("3 입력\n");
//		break;
//	default:
//		printf("그 외의 값 입력");
//		break;
//		return 0;
//	}
//	return 0;
//}


//02 메뉴만들기

//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int num;	//메뉴 선택용
//	int data;	//데이터 저장용
//	while (1)	//while 은 반복문 ()은 조건식. 조건식안의값이 참(0인 아닌모든값)인경우 종속문장{}을 반복수행
//	{
//		system("cls");	//콘솔창의 명령어사용(system())  "cls" = 콘솔창을 초기화
//		printf("==============M E N U ===============\n");
//		printf("1 데이터 입력\n");
//		printf("2 데이터 출력\n");
//		printf("3 프로그램 종료\n");
//		printf("==============M E N U ===============\n");
//		printf("번호 입력: ");
//		scanf_s("%d", &num);	//반복문 수행중 scanf 를 만나면 입력이 될때까지 일시정지
//		switch (num)	//num의 값을 switch문에 대입
//		{
//		case 1:
//			printf("정수 값 입력: ");
//			scanf_s("%d", &data);
//			printf("저장완료!\n");
//			system("pause");		//pause : 키를 입력할때까지 일시정지
//			break;
//		case 2:
//			printf("저장된 수는 %d 입니다\n", data);
//			system("pause");
//			break;
//		case 3:
//			printf(" 종료합니다\n");
//			exit(1);				//exit(1) 프로그램 자체 종료시키는 함수 1 : 비정상적인 종료;
//			break;
//		default:
//			printf("잘못 입력,다시입력하세요\n");
//			system("pause");
//			break;
//		}
//	}
//	return 0;
//}


//문제

//=========== 사칙 연산 ============
//1. 피연산자(2) 입력
//2. 연산종류 입력(+,-,*,/,%)
//3. 연산결과 출력
//4. 종료
//========== = 사칙 연산 ============