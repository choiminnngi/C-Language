

//IF �⺻

//#include <stdio.h>
//
//int main()
//{
//	int num = -1;
//	if (num > 0)	// ���ǽ�()���� ���� ���̶�� ������ ���ӹ���({}) ����
//						// ���ǽ�()���� ���� �����̶�� ���ӹ����� �ǳʶ�
//	{	
//		printf("num>0�ϰ�� ����Ǵ� ���ӹ���\n");
//	}
//	printf("if�� ������ ���๮��\n");
//	return 0;
//}


//02 IF ��

//#include <stdio.h>
//int main()
//{
//	int num = 0;
//	printf("���� �� 1 �� �Է� : ");
//	scanf_s("%d", &num);
//
//	if (num % 2 == 0)
//	{
//		printf("%d�� ¦�� �Դϴ�\n", num);
//	}
//	if (num % 3 == 0)
//	{
//		printf("%d�� 3�� ��� �Դϴ�\n", num);
//	}
//	if(num % 4 ==0)
//	{
//		printf("%d�� 4�� ��� �Դϴ�\n", num);
//	}
//	printf("if������ ���� �ڵ� ");
//	return 0;
//}

//03 IF��

//#include <stdio.h>
//int main()
//{
//	if (1)
//		printf("1�� ���Դϴ�\n");
//	if (-1)
//		printf("-1�� ���Դϴ�\n");
//	if('\n')		// \n�� �ƽ�Ű�ڵ尪�� 10 .. ���̴�
//		printf("\\n�� ���Դϴ�\n");
//	if ('\0')		// \0�� �ƽ�Ű�ڵ尪�� 0 .. �����̴�
//		printf("NULL ���ڴ� �����̹Ƿ� ��µ��� �ʽ��ϴ�\n");
//	if (0)
//		printf("���� 0�� �����̱� ������ ��µ��� �ʽ��ϴ�\n");
//	if (!0)	// ���ǽ��� ���տ� ! �� ����Ǹ� ���̸� ���� , �����̸� ���� ��ȯ
//		printf("���ھտ� !�� ��� ���̸� ���� , �����̸� ������ ��ȯ�մϴ�\n");
//
//	return 0;
//}


//���� 

//01 �Է��ѵ����Ͱ� 3�� ����ΰ�� ����ϼ���(if�� ���)

//#include <stdio.h>
//int main()
//{
//	int num = 0;
//	printf("���� �Է��ϼ���: ");
//	scanf_s("%d", &num);
//	if (num % 3 == 0)
//	{
//		printf("%d �� 3�� ����Դϴ�\n", num);
//	}
//	return 0;
//}

//02 ���밪�� ���ϴ� ���α׷��� �ۼ�

//#include <stdio.h>
//int main()
//{
//	int num = 0;
//	printf("���� �Է��ϼ���: ");
//	scanf_s("%d", &num);
//	if (num < 0)
//	{
//		num = -num;
//	}
//	printf("���밪 : %d\n", num);
//	return 0;
//}


//03 ������ �Է¹޾� ū���� ���(���� Ǳ�ϴ�)

//#include <stdio.h>
//int main()
//{
//	int n1, n2, n3;
//	printf("�� ���� �Է� : ");
//	scanf_s("%d%d%d", &n1, &n2, &n3);
//	
//	//n1 �� ���� ū���
//	if (n1 > n2 && n1 > n3)
//		printf("ū�� : %d\n", n1);
//	//n2 �� ���� ū���
//	if(n2>n1 && n2>n3)
//		printf("ū�� : %d\n", n2);
//	//n3 �� ���� ū���
//	if (n3 > n1 && n3 > n2)
//		printf("ū�� : %d\n", n3);
//	return 0;
//}



//����

//������ �Է¹޾Ƽ� �ִ밪�� �ּҰ��� ����ϼ���

//#include <stdio.h>
//
//int main()
//{
//	int n1, n2, n3;
//	printf("���� 3���� �Է� :");
//	scanf_s("%d%d%d", &n1, &n2, &n3);
//	//�ִ밪
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
//	//�ּҰ�
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
//	printf("���� 1�� �Է� : ");
//	scanf_s("%d", &num);
//
//	if (num % 2 == 0)	
//	{
//		printf("¦�� �Դϴ�");// ���ǽ��� ���ΰ�� ����� ���ӹ���
//	}	
//	else //���ǽ��� ������ ���
//	{
//		printf("Ȧ�� �Դϴ�");// ���ǽ��� ������ ��� ����� ���ӹ���
//	}
//	return 0;
//}


//05 if - else

//#include <stdio.h>
//int main()
//{
//	int n1;
//	printf("���� 1�� �Է�: ");
//	scanf_s("%d", &n1);
//	//¦Ȧ�� ����
//	if (n1 % 2 == 0)	//¦�����(���ǽ��� ���ΰ��)
//	{
//		printf("¦���Դϴ�\n");
//		//3�� ��� Ȯ��
//		if (n1 % 3 == 0)	//3�� ������(���ǽ��� ��)
//		{
//			printf("3�� ����Դϴ�\n");
//		}
//	}
//	else //Ȧ�����(���ǽ��� �����ΰ��)
//	{
//		printf("Ȧ���Դϴ�\n");
//		if (n1 % 3 == 0)
//		{
//			printf("3�� ����Դϴ�\n");
//		}
//	}
//	return 0;
//}


//06 else if  - ���ߺб⹮

//#include <stdio.h>
//int main()
//{
//	int kor, eng, mat;
//	double avr;
//	printf("3������ ������ �Է��ϼ��� (����,����,����): ");
//	scanf_s("%d%d%d", &kor, &eng, &mat);
//	avr = (double)(kor + eng + mat) / 3;
//	//������� 70���̻��̸鼭 ����60���̻�,���� 60���̻� ���� 60���̻��ΰ�� �հ�
//	if (avr < 70)	//avr�� 70�� �̸��̶��
//	{
//		printf("���հ�\n");
//	}
//	else if (kor < 60)
//	{
//		printf("���հ�\n");
//	}
//	else if (eng < 60)
//	{
//		printf("���հ�\n");
//	}
//	else if (mat < 60)
//	{
//		printf("���հ�\n");
//	}
//	else
//	{
//		printf("�հ�\n");
//	}
//	return 0;
//}



//���� 1 �������� ������ �Է� �޾� �հ�� ����� ���ϰ� ����� 90���̻��̸� 'A'
//80�� �̻��̸� 'B' 70�� �̻��̸� 'C' 60�� �̻��̸� 'D' 60�� �̸��̸� 'F'�� ����ϼ���


//#include <stdio.h>
//int main()
//{
//	int kor=0, eng=0, mat=0,sum=0;
//	double avr = 0.0;
//	printf("3���� ���� �Է�(���� ���� ����):");
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

//���� 2 if -else ���� �̿��ؼ� 3�� ����̸鼭 4�̹���ΰ�� / 3�� ����� �ƴϸ鼭 5�ǹ���ΰ��
//�� ����غ�����

//#include <stdio.h>
//int main()
//{
//	int n1;
//	printf("���� �Է�: ");
//	scanf_s("%d", &n1);
//	if (n1 % 3 == 0)	//3�ǹ���ΰ��
//	{
//		if (n1 % 4 == 0)
//		{
//			printf("%d�� 3�� ����̸鼭 4�� ����Դϴ�\n", n1);
//		}
//	}
//	else // 3����� �ƴѰ��
//	{
//		if (n1 % 5 == 0)
//		{
//			printf("%d�� 3�� ����� �ƴϸ鼭 5�� ����Դϴ�\n", n1);
//		}
//	}
//	return 0;
//}







