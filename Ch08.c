//01 �Լ� �⺻  

//�Լ� �������
//- Main�Լ��ڵ� ����ȭ(������ ����)
//- �ڵ��� ���뼺(���ֻ���ϴ� �ڵ��� Ȱ�뼺 ����)

//InValue() �Լ� ����
//void InValue()
//{
//	int n1, n2;
//	printf("���� 2 �� �Է� :");
//	scanf_s("%d%d", &n1, &n2);
//	printf("����1 %d ����2 %d\n", n1, n2);
//}
//#include <stdio.h>
//int main()
//{	
//	printf("1��° �Լ� ���\n");
//	InValue(); //�Լ����
//	printf("2��° �Լ� ���\n");
//	InValue(); //�Լ����
//	printf("3��° �Լ� ���\n");
//	InValue(); //�Լ����
//	return 0;
//}

//02 �Լ��� ����� ���� 

//void InValue();
//#include <stdio.h>
//int main()
//{
//	printf("1��° �Լ� ���\n");
//	InValue(); //�Լ����
//	printf("2��° �Լ� ���\n");
//	InValue(); //�Լ����
//	printf("3��° �Լ� ���\n");
//	InValue(); //�Լ����
//	return 0;
//}
//void InValue()
//{
//	int n1, n2;
//	printf("���� 2 �� �Է� :");
//	scanf_s("%d%d", &n1, &n2);
//	printf("����1 %d ����2 %d\n", n1, n2);
//}

//03 �Լ��� 4���� ����01 - ��ȯ�����ְ� �Ű������� �ִ°��

//int sum(int x, int y);	//sum�Լ��� ����
//
//#include <stdio.h>
//int main()
//{
//	int n1, n2;
//	printf("�� ���Է� :");
//	scanf_s("%d%d", &n1, &n2);
//	int result = sum(n1,n2);
//	printf("�μ��� �� : %d\n", result);
//	return 0;
//}
//int sum(int x, int y)	//sum�Լ��� ����
//{
//	return x+y;
//}


//03 �Լ��� 4���� ����02 - ��ȯ�����ְ� �Ű������� ���°��

//#include <stdio.h>
//int sum();
//int main()
//{
//	int result = sum();
//	printf("�μ��� �� : %d\n", result);
//	return 0;
//}
//int sum()
//{
//	int n1, n2;
//	printf("�μ��� �Է� : ");
//	scanf_s("%d%d", &n1, &n2);
//	return n1 + n2;
//}



//03 �Լ��� 4���� ����03 - ��ȯ���̾��� �Ű������� �ִ°��

//void sum(int x ,int y);
//#include <stdio.h>
//int main()
//{
//	printf("�Լ� ȣ�� ��\n");
//	sum(10,20);
//	printf("�Լ� ȣ�� ��\n");
//	return 0;
//}
//void sum(int x, int y)
//{
//	int result = x + y;
//	printf("�μ��� �� : %d\n", result);
//}

//03 �Լ��� 4���� ����04 - ��ȯ���̾��� �Ű������� ���°��

//void sum();
//#include <stdio.h>
//int main()
//{
//	sum();
//	return 0;
//}
//void sum()
//{
//	int n1, n2,result;
//	printf("�μ� �Է� : ");
//	scanf_s("%d%d", &n1, &n2);
//	result = n1 + n2;
//	printf("�μ��� �� : %d\n", result);
//}

//����
//
//�μ��� �Է� �޾� ū ���� ����ϴ� �Լ��� ���弼��
//�Լ� ���  : void Max(int x , int y)

//#include <stdio.h>
//
//void Max(int x, int y);	//����
//int main()
//{
//	printf("�Լ� ȣ�� �� �ڵ�\n");
//	Max(10, 20);
//	printf("�Լ� ȣ�� �� �ڵ�\n");
//	return 0;
//}
//void Max(int x, int y)
//{
//	if (x > y)
//		printf("ū�� : %d\n", x);
//	else
//		printf("ū�� : %d\n", y);
//}


//�Է� ���� ���� ¦�� ���� Ȧ�� ���� �Ǻ��ϴ� �Լ��� ���弼��
//�Լ� ��� : void IsOdd(void)

//#include <stdio.h>
//void IsOdd(void);
//int main()
//{
//	IsOdd(); 
//	IsOdd();
//	IsOdd();
//	return 0;
//}
//void IsOdd(void)
//{
//	int num=0;
//	printf("�� �Է� : ");
//	scanf_s("%d", &num);
//	if (num % 2 == 0)//¦����?
//	{
//		printf("%d�� ¦���Դϴ�\n", num);
//	}
//	else
//	{
//		printf("%d�� Ȧ���Դϴ�\n", num);
//	}
//
//}


//1-�Է¹��� ���ڱ��� �߿��� 3�� ����� ����غ�����
//�Լ� ��� : int IsThreeMulti(int num)
//#include <stdio.h>
//int IsThreeMulti(int num);
//int main()
//{
//	IsThreeMulti(20);
//	return 0;
//}
//int IsThreeMulti(int num)
//{
//	int i=1;
//	while (i <= num)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//		i++;
//	}
//	printf("\n");
//
//}
//����� �Լ� ����� 
//   *
//  ***
// *****
//*******
//#include <stdio.h>
//void star(int num);
//void ReverseStar(int num);
//int main()
//{
//	
//	//star(15);
//	ReverseStar(10);
//	return 0;
//}
//void ReverseStar(int num)
//{
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	while (i < num)
//	{
//		j = 0;
//		while (j < i)
//		{
//			printf(" ");
//			j++;
//		}
//		k = 0;
//		while (k <= (num - 1) * 2 - 2 * i)
//		{
//			printf("*");
//			k++;
//		}
//		printf("\n");
//		i++;
//	}
//}
//void star(int num)
//{
//	int i = 0;//�ٹٲ�
//	int j = 0;//����
//	int k = 0;//Star
//
//	while (i < num)
//	{
//		j = 0;
//		while (j <= (num-2) - i)
//		{
//			printf(" ");
//			j++;
//		}
//		k = 0;
//		while (k <= 2 * i)
//		{
//			printf("*");
//			k++;
//		}
//		printf("\n");
//		i++;
//	}
//}


