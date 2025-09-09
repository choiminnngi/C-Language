//01동적할당  기본

//malloc : 동적할당 함수
//free : 동적할당 해제

//#include <stdio.h>
//#include <stdlib.h>	//동적할당시 사용될 헤더 파일
//
//int main()
//{
//	int * ptr = (int *)malloc(sizeof(int));//동적할당된 공간의 주소를 ptr에 초기화
//	if (ptr == NULL)	//동적할당 유무 체크
//	{
//		printf("동적 할당 실패");
//		exit(1);
//	}
//	*ptr = 10;	//동적할당된 공간에 10대입
//	printf("동적할당 공간에 저장된 값 : %d\n", *ptr);
//	//동적할당 해제
//	free(ptr);
//
//	return 0;
//}

//02동적할당 배열

//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int * ptr = (int *)malloc(sizeof(int) * 7);
//	if (ptr == NULL)
//	{
//		printf("동적할당실패 , 메모리 공간 부족");
//		exit(1);
//	}
//	//동적공간에 값 삽입
//	for (int i = 0; i < 7; i++)
//	{
//		ptr[i] = i + 1;
//	}
//	//동적공간의 값 확인 
//	for (int i = 0; i < 7; i++)
//	{
//		printf("%d ", ptr[i]);
//	}
//	return 0;
//}

//03문자열 처리함수

//#include <stdio.h>
//#include <string.h>	//문자열 처리 관련 헤더파일
//int main()
//{
//	char str1[10] = "abc";
//	char str2[10] = "Hello";
//	char str3[10];
//	
//	//strlen()  : 문자열 길이를 정수형으로 반환
//	printf("str1배열안의 문자열의 길이 :%d\n", strlen(str1));
//	printf("str2배열안의 문자열의 길이 :%d\n", strlen(str2));
//
//	//strcpy	: 문자열 복사
//	strcpy_s(str3, sizeof(str3), str1);
//	printf("str1의 문자열을 str3에 복사 : %s\n", str3);
//
//	//strcmp	: 문자열 동등비교(0 : 두문자열은 일치 , 0아닌값 : 두문자열은 일치하지x)
//	if (strcmp(str1, str2) == 0)
//	{
//		printf("str1 과 str2안의 문자열은 일치합니다");
//	}
//	if (strcmp(str1, str3) == 0)
//	{
//		printf("str1 과 str3안의 문자열은 일치합니다");
//	}
//}


//04문자열 동적할당

//#include <stdio.h>
//#include <stdlib.h> //동적할당
//#include <string.h>	//문자열 처리
//int main()
//{
//	//이름 저장용 동적할당
//	char * name = (char *)malloc(sizeof(char) * 10);
//	if (name == NULL)
//	{
//		exit(1);
//	}
//	printf("이름 입력 : ");
//	fgets(name, _msize(name), stdin);	//주의! 동적할당의 사이즈는 _msize()로 크기를 확인!
//	int len = strlen(name) - 1;  //저장된 개행의 Idx
//	name[len] = 0;
//	//주소 저장용 동적할당
//	char * addr = (char *)malloc(sizeof(char) * 10);
//	if (addr == NULL)
//	{
//		exit(1);
//	}
//	printf("주소 입력 : ");
//	fgets(addr, _msize(addr), stdin);
//	len = strlen(addr) - 1;
//	addr[len] = 0;
//
//	printf("이름 : %s\n", name);
//	printf("주소 : %s\n", addr);
//
//	return 0;
//}



//05 입력한 크기만큼 동적할당 후 데이터 저장

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main()
//{
//	char buf[1024];	//문자열 임시 저장공간
//	char *name;
//	char *addr;
//	int len = 0;	
//	// -- 이름입력 --
//	printf("이름 입력 : ");
//	fgets(buf, sizeof(buf), stdin);	//키보드로부터 buf크기만큼만 buf배열에 저장
//	len = strlen(buf) - 1;	//개행위치 idx 저장
//	buf[len] = 0;	//개행을 제거
//	name = (char *)malloc(len + 1);//NULL을 저장하기 위해 len+1사이즈만큼 동적할당
//	if (name == NULL)
//	{
//		printf("동적할당 실패");
//		exit(1);
//	}
//	strcpy_s(name, _msize(name), buf);
//	// -- 주소입력 --
//	printf("주소 입력 : ");
//	fgets(buf, sizeof(buf), stdin);
//	len = strlen(buf) - 1;
//	buf[len] = 0;
//	addr = (char *)malloc(len + 1);
//	if (addr == NULL)
//	{
//		printf("동적할당 실패");
//		exit(1);
//	}
//	strcpy_s(addr, _msize(addr), buf);
//	printf("이름 : %s\n", name);
//	printf("주소 : %s\n", addr);
//	return 0;
//}
//


//06 모듈화

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//char* StudentInfo();
//int main()
//{
//	char *name;
//	char *addr;
//	char *id;
//	char *identity;
//	// -- 이름입력 --
//	printf("이름 입력 : ");
//	name =StudentInfo();
//	printf("주소 입력 : ");
//	addr = StudentInfo();
//	printf("학번 입력 : ");
//	id = StudentInfo();
//	printf("주민번호 입력 : ");
//	identity = StudentInfo();
//
//	printf("이름 :%s\n", name);
//	printf("주소 :%s\n", addr);
//	printf("학번 ;%s\n", id);
//	printf("주번 :%s\n", identity);
//
//	free(name); free(addr); free(id); free(identity);
//	return 0;
//}
//char* StudentInfo()
//{
//	char * tmp;
//	char buf[1024];	//문자열 임시 저장공간
//	int len = 0;
//	fgets(buf, sizeof(buf), stdin);	//키보드로부터 buf크기만큼만 buf배열에 저장
//	len = strlen(buf) - 1;	//개행위치 idx 저장
//	buf[len] = 0;	//개행을 제거
//	tmp = (char *)malloc(len + 1);//NULL을 저장하기 위해 len+1사이즈만큼 동적할당
//	if (tmp == NULL)
//	{
//		printf("동적할당 실패");
//		exit(1);
//	}
//	strcpy_s(tmp, _msize(tmp), buf);
//	return tmp;
//}
















