//����01 For�� �⺻

//#include <stdio.h>
//int main()
//{
//	int i;
//	//�⺻ for��
//	for (i = 0; i < 10; i++)
//	{
//		printf("hello World\n");
//	}
//	//���ѷ��� for��
//	for (; ;)
//	{
//		printf("hello World\n");
//	}
//	return 0;
//}

//����02 For�� �⺻

//#include <stdio.h>
//int main()
//{
//	int i;
//	int n;
//	int sum=0;
//	printf("���� 1 �� �Է� : ");
//	scanf_s("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		sum = sum + i;
//	}
//	printf("1���� %d������ �� : %d\n", n, sum);
//	return 0;
//}

//���� 2���� ������ �Է¹޾�(�ּҰ�,�ִ밪) �ּҰ����� �ִ밪������
//���� ���ؼ� ����غ�����
//ex)
//���� 2�� �Է� : 2 , 15
//2�������� 15������ �� : �����

//#include <stdio.h>
//int main()
//{
//	int i;
//	int sum=0;
//	int n1, n2;
//	printf("���� 2���Է� : ");
//	scanf_s("%d%d", &n1, &n2);
//	for (i = n1; i <= n2; i++)
//	{
//		sum = sum + i;
//	}
//	printf("%d ���� %d������ �� : %d\n", n1, n2, sum);
//	return 0;
//}


//���� 03 - continue

//continue :  �ݺ����� �ȿ� ���� �� �ش� �ڵ带 ����� continue
//������ �ڵ带 �������� �ʰ� �ݺ����� ���ǽ����� ���ư���

//#include <stdio.h>
//int main()
//{
//	int sum = 0;
//	int i;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 0)
//		{
//			continue;
//		}
//		sum = sum + i;
//	}
//	printf("1 - 100���� ���� Ȧ���� ���� %d�Դϴ� \n", sum);
//	return 0;
//}


//����04 - break;

//break : �ݺ����� �ȿ� ���ɶ� �ش� �ڵ尡 ����Ǹ� ���� �����̿��ִ�
//�ݺ������� Ż���ϰԵȴ�

//#include <stdio.h>
//int main()
//{
//	int sum = 0;
//	int i;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i==40)
//		{
//			break;
//		}
//		sum = sum + i;
//	}
//	printf("break�������� ���� %d�Դϴ� \n", sum);
//	return 0;
//}




