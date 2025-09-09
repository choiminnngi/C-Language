//01 구조체 기본

//#include <stdio.h>
//
//typedef struct person
//{
//	char name[20];
//	int age;
//	float weight;
//	double height;
//}Person;
//int main()
//{
//	struct person Jung = { "JungWooGyun",35,80.1,177.6 };
//	struct person Lee = { "LeeJiSung",21,76.6,166.5 };
//	Person Kum = { "Kumyoungsuk",45,60,155.4 };
//	printf("%s %d %f %lf\n", Jung.name, Jung.age, Jung.weight, Jung.height);
//
//	Person Man[3]=
//	{
//		{"JungWooGyun",35,80.1,177.6},
//		{"LeeJiSung",21,76.6,166.5},
//		{"Kumyoungsuk",45,60,155.4}
//	};
//	return 0;
//}

//문제 1
//문자열 형태의 '종업원 이름'과 문자열 형태의 '주민등록번호' 그리고 
//정수형태의 '급여정보'를 저장할 수 있는 empolyee 라는 이름의 구조체를 정의하세요
//그리고 employee 구조체 변수를 하나 생성한 다음 , 프로그램 사용자가 입력하는 정보로 이변수를 채우세요
//마지막으로 구조체 변수에 채워진 데이터를 출력해보세요
                                                        
//#include <stdio.h>
//
//struct empolyee
//{
//	char name[20];
//	char identity[30];
//	int salary;
//};
//int main()
//{
//	struct empolyee Lee;
//	printf("종업원 이름 입력 : ");
//	scanf_s("%s", Lee.name,sizeof(Lee.name));
//	printf("주민등록번호 입력 : ");
//	scanf_s("%s", Lee.identity, sizeof(Lee.identity));
//	printf("급여정보 입력 :");
//	scanf_s("%d", &Lee.salary);
//
//	printf("이름 : %s\n", Lee.name);
//	printf("주민번호 : %s\n", Lee.identity);
//	printf("급여정보 : %d\n", Lee.salary);
//	return 0;
//}



//예제 02 구조체 연산

//#include <stdio.h>
//typedef struct  point
//{
//	int xpos;
//	int ypos;
//}Point;
//int main()
//{
//
//	Point pos1 = { 10,20 };
//	Point pos2 = { 40,50 };
//	Point pos3;
//	//구조체 연산(대입연산)
//	pos3 = pos1;	//대입연산 가능(나머지 기본 산술연산은 x)
//	printf("pos3.xpos=%d pos3.ypos=%d\n", pos3.xpos, pos3.ypos);
//	
//	//구조체를 가리키는 포인터
//	Point *ptr = &pos2;
//	pos2.xpos = 11;	//구조체변수에서 멤버로 접근
//	pos2.ypos = 22;
//
//	(*ptr).xpos = 33;//구조체포인터에서 멤버로 접근`
//	(*ptr).ypos = 44;
//	ptr->xpos = 55;
//	ptr->ypos = 66;
//	return 0;
//}



//동적할당 + 구조체 + 포인터

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//typedef struct node
//{
//	char str[10];
//	int num;
//}Node;
//int main()
//{
//	Node * ptr = (Node *)malloc(sizeof(Node));
//	if (ptr == NULL)
//	{
//		exit(1);
//	}
//	//동적할당된 멤버배열str에 "Hello"문자열 삽입
//	strcpy_s(ptr->str, _msize(ptr->str), "Hello");
//	//동적할당된 멤버변수num에 정수10 삽입
//	ptr->num = 10;
//	return 0;
//}













