//01 ����ü �⺻

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

//���� 1
//���ڿ� ������ '������ �̸�'�� ���ڿ� ������ '�ֹε�Ϲ�ȣ' �׸��� 
//���������� '�޿�����'�� ������ �� �ִ� empolyee ��� �̸��� ����ü�� �����ϼ���
//�׸��� employee ����ü ������ �ϳ� ������ ���� , ���α׷� ����ڰ� �Է��ϴ� ������ �̺����� ä�켼��
//���������� ����ü ������ ä���� �����͸� ����غ�����
                                                        
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
//	printf("������ �̸� �Է� : ");
//	scanf_s("%s", Lee.name,sizeof(Lee.name));
//	printf("�ֹε�Ϲ�ȣ �Է� : ");
//	scanf_s("%s", Lee.identity, sizeof(Lee.identity));
//	printf("�޿����� �Է� :");
//	scanf_s("%d", &Lee.salary);
//
//	printf("�̸� : %s\n", Lee.name);
//	printf("�ֹι�ȣ : %s\n", Lee.identity);
//	printf("�޿����� : %d\n", Lee.salary);
//	return 0;
//}



//���� 02 ����ü ����

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
//	//����ü ����(���Կ���)
//	pos3 = pos1;	//���Կ��� ����(������ �⺻ ��������� x)
//	printf("pos3.xpos=%d pos3.ypos=%d\n", pos3.xpos, pos3.ypos);
//	
//	//����ü�� ����Ű�� ������
//	Point *ptr = &pos2;
//	pos2.xpos = 11;	//����ü�������� ����� ����
//	pos2.ypos = 22;
//
//	(*ptr).xpos = 33;//����ü�����Ϳ��� ����� ����`
//	(*ptr).ypos = 44;
//	ptr->xpos = 55;
//	ptr->ypos = 66;
//	return 0;
//}



//�����Ҵ� + ����ü + ������

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
//	//�����Ҵ�� ����迭str�� "Hello"���ڿ� ����
//	strcpy_s(ptr->str, _msize(ptr->str), "Hello");
//	//�����Ҵ�� �������num�� ����10 ����
//	ptr->num = 10;
//	return 0;
//}













