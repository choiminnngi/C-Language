//����01 while �⺻ 

//#include <stdio.h>
//int main()
//{
//	int i=0;		//�ݺ��� Ż�⿡ ���Ǵ� ���� �ʱ�ȭ
//	while (i<5)	//�ݺ��� Ż�⿡ ���Ǵ� ���ǽ� ����, i�� 0,1,2,3,4 ���� �ݺ�
//	{
//		printf("Hello World\n");
//		i++;	// i�� �� ���� 
//	}
//	return 0;
//}

//����02 while - 1���� 10������ ��

//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	int sum = 0;
//	while (i<=10)	//1,2,3,4,5,6,7,8,9,10 ���� �ݺ�
//	{
//		sum = sum + i; 
//		i++;
//	}
//	printf("1 ���� 10������ �� :%d\n", sum);
//	return 0;
//}


//����03 - 1 ���� �Է��� �������� ��

//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	int sum = 0;
//	int n1 = 0;	
//	printf("�� �Է�: ");
//	scanf_s("%d", &n1);
//
//	while (i <= n1)	
//	{
//		sum = sum + i;
//		i++;
//	}
//	printf("1 ���� %d������ �� :%d\n", n1,sum);
//	return 0;
//}

//���� 4 - n���� m������ �� 

//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	int sum = 0;
//	int n1 = 0,n2=0;
//	printf("�� �� �Է�: ");
//	scanf_s("%d%d", &n1,&n2);
//
//	i = n1;
//	while (i <= n2)
//	{
//		sum = sum + i;
//		i++;
//	}
//	printf("%d ���� %d������ �� :%d\n", n1,n2, sum);
//	return 0;
//}


//����05

// ������ �ݺ��Ͽ� �Է¹޾�  �Է¹��� �������� �հ踦 ���ϼ���
//(0 �� �Է� ���� ������ ����ؼ� �Է� �ް� ���� ��)


//#include <stdio.h>
//int main()
//{
//	int n1=1;
//	int sum = 0;
//	while (n1!=0)
//	{
//		printf("�� �Է�: ");
//		scanf_s("%d", &n1);
//		sum = sum + n1;
//	}
//	printf("���հ� :%d\n", sum);
//
//	return 0;
//}


//����06

//1���� n������ ���߿� 3�� ����� �ո� ���

//#include <stdio.h>
//int main()
//{
//
//	int n1 = 0;
//	int i = 0;
//	int sum = 0;
//	printf("�� �Է� : ");
//	scanf_s("%d", &n1);
//	while (i <= n1)
//	{
//		if (i % 3 == 0)//����i�� 3�� �������?
//		{
//			printf("%d ", i);
//			sum = sum + i;
//		}
//		i++;
//	}
//	printf("\n");
//	printf("1���� %d���� ���߿� 3�� ������� �� :%d\n", n1, sum);
//	return 0;
//}



//����07

//1���� n������ ���߿� ¦�����հ� Ȧ�������� ���� ����غ�����

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int n1 = 0;
//	int sum1 = 0, sum2 = 0;
//	printf("���� �Է� : ");
//	scanf_s("%d", &n1);
//	while (i <= n1)
//	{
//		if (i % 2 == 0)//¦���ΰ��
//		{
//			sum1 = sum1 + i;
//		}
//		else //Ȧ���ΰ��
//		{
//			sum2 = sum2 + i;
//		}
//		i++;
//	}
//	printf("1���� %d������ ���� ¦���� �� :%d\n", n1, sum1);
//	printf("1���� %d������ ���� ¦���� �� :%d\n", n1, sum2);
//	return 0;
//}


//���� 08 
//������ 2�� ����ϱ�

//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	while (i <= 9)
//	{
//		printf("2 * %d = %d\n", i, 2 * i);
//		i++;
//	}
//	return 0;
//}

//���� 09
//������ n�� ����ϱ�

//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	int dan = 0;
//	printf("�ܼ� �Է� : ");
//	scanf_s("%d", &dan);
//	while (i <= 9)
//	{
//		printf("%d * %d = %d\n", dan, i,dan * i);
//		i++;
//	}
//	return 0;
//}

//���� 10
//������ ���� ����ϱ� 2*9=18 , 2*8=16...

//#include <stdio.h>
//int main()
//{
//	int i = 9;
//	int dan = 0;
//	printf("�ܼ� �Է� : ");
//	scanf_s("%d", &dan);
//	while (i>0)
//	{
//		printf("%d * %d = %d\n", dan, i,dan * i);
//		i--;
//	}
//	return 0;
//}



//���� 11 - ��ø while

//#include <stdio.h>
//int main()
//{
//	int i = 0;	//�ٱ��� while��
//	int j = 0;	//������ while��
//
//	while (i < 5)
//	{
//		printf("i�� �� :%d\n", i);
//		j = 0;
//		while (j < 5)
//		{
//			printf("j�� �� :%d\n", j);
//			j++;
//		}
//		printf("\n");
//		i++;
//	}
//	return 0;
//}



//����12
//��ü ������ ( 2�� - 9�ܱ���) ����ϱ�

//#include <stdio.h>
//int main()
//{
//	int i = 2;	//dan
//	int j = 0;	//dan�� �������� ��
//
//	while (i <= 9)
//	{
//		//--�ܿ� �������� �ݺ���---
//		j = 1;
//		while (j <= 9)
//		{
//			printf("%d * %d = %d\n" , i,j,i*j);
//			j++;
//		}
//		//--�ܿ� �������� �ݺ���---
//		printf("\n");
//		i++;
//	}
//	return 0;
//}


//����13
//��ü ������ ������� (9*9 -- 2*1)


////����14 - ��øwhile
//*
//**
//***
//****
//i(����)	j(*)
//	0	0 - 0
//	1	0 - 1
//	2	0 - 2
//	3	0 - 3

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	while (i < 4)
//	{
//		j = 0;
//		while (j <= i)
//		{
//			printf("*");
//			j++;
//		}
//		printf("\n");
//		i++;
//	}
//
//	return 0;
//}

//
////����15
//
//****
//***
//**
//*


//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	while (i < 4)
//	{
//		j = 0;
//		while (j <= 3-i)
//		{
//			printf("*");
//			j++;
//		}
//		printf("\n");
//		i++;
//	}
//
//	return 0;
//}




////���� 16
//
//   *
//  ***
// *****
//*******

//#include <stdio.h>
//int main()
//{
//	int i = 0;	//�����
//	int j = 0;	//�����
//	int k = 0;	//������
//	while (i < 4)
//	{
//		j = 0;
//		while (j <= 2 - i)
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
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = 0;	//�����
//	int j = 0;	//�����
//	int k = 0;	//������
//	while (i < 4)
//	{
//		j = 0;
//		while (j <i)
//		{
//			printf(" ");
//			j++;
//		}
//		k = 0;
//		while (k <= 6 - (2 * i))
//		{
//			printf("*");
//			k++;
//		}
//		printf("\n");
//		i++;
//	}
//	return 0;
//}




////���� 17
//
//*
//**
//***
//****
//***
//**
//*

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	while (i < 7)
//	{
//		if (i < 4)
//		{
//			j = 0;
//			while (j <= i)
//			{
//				printf("*");
//				j++;
//			}
//		}
//		else
//		{
//			j = 0;
//			while (j <= 6 - i)
//			{
//				printf("*");
//				j++;
//			}
//
//		}
//		printf("\n");
//		i++;
//	}
//	return 0;
//}











////���� 18
//
//   *
//  ***
// *****
//*******
// *****
//  ***
//   *

#include <stdio.h>
int main()
{
	int i = 0;		//����
	int j = 0;		//����
	int k = 0;		//��
	int p = 1;
	while (i < 7)
	{
		if (i < 4)
		{
			j = 0;
			while (j <= 2 - i)
			{
				printf(" ");
				j++;
			}
			k = 0;
			while (k <= 2 * i)
			{ 
				printf("*");
				k++;
			}

		}
		else
		{
			j = 0;
			while (j <= i - 4)
			{
				printf(" ");
				j++;
			}
			k = 0;
			while (k <= 6 - 2 * p)
			{
				printf("*");
				k++;
			}
			p++;
		}

		printf("\n");
		i++;
	}




	
	return 0;
}




////���� 19
//
//*******
// *****
//  ***
//   *
//  ***
// *****
//*******











