//01 �迭�⺻ 
//������ �ڷ����� �������� �����Ҵ�
//÷�ڿ�����[] �� ���� �迭��� ������ ����
//int arr[n] : �迭��Ҵ� 0�� Idx���� �����ؼ� n-1 ����  ������ ����

//#include <stdio.h>
//int main()
//{
//	//�迭 ���� �� �� ����;
//	int arr1[5];
//	arr1[0] = 1;
//	arr1[1] = 2;
//	arr1[2] = 3;
//	arr1[3] = 4;
//	arr1[4] = 5;
//	printf("%d %d %d %d %d \n", arr1[0], arr1[1], arr1[2], arr1[3], arr1[4]);
//	float arr2[3] = { 1.1,2.2,3.3 };
//	printf("%f %f %f\n", arr2[0], arr2[1], arr2[2]);
//	return 0;
//}


//02 �迭 �⺻

//#include <stdio.h>
//int main()
//{
//	int i;
//	int arr[10];
//	//�ݺ����� ���� �迭�� �� ����( 1,2,3,4,5,6,7,8,9,10)
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i + 1;
//	}
//	//�ݺ����� ���� �迭 ��Ҿ� �� Ȯ��
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}


//03 �迭  + scanf

//#include <stdio.h>
//int main()
//{
//	int i;
//	int arr[10];
//	//�ݺ����� ���� �迭�� �� ����( 1,2,3,4,5,6,7,8,9,10)
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d��° ���Է� : ", i + 1);
//		scanf_s("%d", &arr[i]);
//	}
//	//�ݺ����� ���� �迭 ��Ҿ� �� Ȯ��
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}

//04 �迭 + scanf + MAX��,���,���� ���ϱ�

//#include <stdio.h>
//int main()
//{
//	int i;
//	int arr[10];
//	int MAX=0;
//	int sum=0;
//	int avr=0;
//	//�ݺ����� ���� �迭�� �� ����( 1,2,3,4,5,6,7,8,9,10)
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d��° ���Է� : ", i + 1);
//		scanf_s("%d", &arr[i]);
//		
//		sum = sum + arr[i];	//�� ���
//		if (MAX < arr[i])	//�ִ밪 MAX�� ����
//		{
//			MAX = arr[i];
//		}
//	}
//	//�ݺ����� ���� �迭 ��Ҿ� �� Ȯ��
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	avr = sum / 10;
//	printf("MAX : %d ���� : %d ��� :%d\n", MAX, sum, avr);
//	return 0;
//}

//05 �迭 ����/���ڿ� ����&ó��


//#include <stdio.h>
//int main()
//{
//	//���ڴ��� ����
//	char str1[4] = { 'a','b','c','d'};	//���ڹ迭o, ���ڿ�x , ����ҿ� ���ڸ� ����
//	char str2[4] = { 'a','b','c','\0' };	//���ڹ迭o, ���ڿ�o, ���ڿ��� �������� null���ڸ�������
//
//	printf("str1 : %s\n", str1);
//	printf("str2 : %s\n", str2);
//	
//	char str3[4] = "abcd";
//	char str4[4] = "abc";
//
//	printf("str3 : %s\n", str3);
//	printf("str4 : %s\n", str4);
//	return 0;
//}

//06 ���ڿ� �Է� / ���

//#include <stdio.h>
//
//int main()
//{
//
//	char str[10];
//	printf("���ڿ��� �Է� :");
//	scanf_s("%s", str,sizeof(str));
//	printf("�Է��� ���ڿ� : %s\n", str);
//
//	return 0;
//}

//07 ������ �迭


//#include <stdio.h>
//int main()
//{
//	//�������迭�� ���ǿ� ������
//	int arr1[2][3];
//	arr1[0][0] = 1;
//	arr1[0][1] = 2;
//	arr1[0][2] = 3;
//	arr1[1][0] = 4;
//	arr1[1][1] = 5;
//	arr1[1][2] = 6;
//	//������ �迭�� ���ǿ� ���ÿ� �ʱ�ȭ 
//	int arr2[3][2] = {
//		{1,2},
//		{3,4},
//		{5,6}
//	};
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			printf("%d ", arr1[i][j]);
//		}
//	}
//	printf("\n");
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 2; j++)
//		{
//			printf("%d ", arr2[i][j]);
//		}
//	}
//	return 0;
//}


//08 fgets -���ڿ��Է¹ޱ� �Լ�

//Stream : �����Ͱ� �̵��Ǵ� ���� ���
//stdin : ǥ���Է���ġ�κ��� ���α׷��������� �����Ǵ� ��Ʈ��(scanf_s)
//stdout : ���α׷����κ��� ǥ�������ġ�� �����Ǵ� ��Ʈ��(printf)
//rewind(stdin) : ǥ���Է¹��� ���� �ʱ�ȭ
//fgets(������ġ,ũ������,��Ʈ��);


//#include <stdio.h>
//int main()
//{
//	char str1[20];
//	char str2[20];
//	printf("scanf�� �̿��� ���ڿ� �Է� : ");
//	scanf_s("%s", str1,sizeof(str1));	//scanf�� ����(space bar)�� ���������ʴ´� .������� ���ޱ�����x
//	printf("%s\n", str1);
//	rewind(stdin);//���۰��� �ʱ�ȭ
//	printf("fgets�� �̿��� ���ڿ� �Է� : ");
//	fgets(str2, sizeof(str2), stdin);	//fgets�� ������ �����ؼ� ���ڿ��� �޴´�
//	printf("%s\n", str2);
//	return 0;
//
//}


//���� - ���� ���� �Է��ϸ� �Ųٷ� ��µǰ� �ϴ� �Լ� Reverse �� ���弼��
// ex �� �Է� : 123 
//	  �� ��� : 321
//�Լ��� ��� : void Reverse()
//��Ʈ		  : %������ / �����ڸ� �̿��մϴ�


//void Reverse();
//
//#include <stdio.h>
//int main()
//{
//	Reverse();
//
//	return 0;
//}
//void Reverse()
//{
//	int num;
//	int tmp = 0;
//	printf("�� �Է� : ");
//	scanf_s("%d", &num);
//	printf("�� ��� : ");
//	while (num != 0)
//	{
//		tmp = num % 10;
//		num = num / 10;
//		printf("%d",tmp);
//	}
//	printf("\n");
//}



































