//01 ��������

//{}(�߰�ȣ) �������� ��밡���� ����
//{}���� �������� , �߰�ȣ ����� ���� ��ȯ

//#include <stdio.h>
//int test(void)
//{
//	int num = 10;
//	num++;
//	printf("Test ���� num=%d\n", num);
//	return 0;
//}
//int main()
//{	
//	int num = 10;
//	num++;
//	test();
//	printf("Main ���� num=%d\n", num);
//	return 0;
//}

//02 for�� if�� ��������

//#include <stdio.h>
//int main()
//{
//	int i = 5;
//	printf("main �Լ��� �������� i=%d\n", i);
//	for (int i = 1; i < 3; i++)
//	{
//		printf("for�� ���� �������� i :%d\n", i);
//	}
//	printf("main �Լ��� �������� i=%d\n", i);
//	if (i > 1)
//	{
//		int i = 100;
//		printf("���ǹ� �ȿ����� �������� i %d\n", i);
//	}
//	printf("main �Լ��� �������� i=%d\n", i);
//	return 0;
//}


//03 ��������

//�ڵ念��
//�����Ϳ���(��������) : �������������Ҵ�
//������
//���ÿ���


//#include <stdio.h>
//int num = 0;	//�������� ����
//int test()
//{
//	num++;
//	printf("num : %d\n", num);
//}
//int main()
//{
//	test();
//	num++;
//	printf("num : %d\n",num);
//	int num = 4;
//	printf("num : %d\n",num);
//	return 0;
//}


//04 Static ����

//�������� ���Ǵ� ��������
//�������� ������ġ : ����{} , �Ҵ���� : ���ÿ��� , �Ҹ���� : {} ����� ����
//�������� ������ġ : main�Լ��� �Ҵ���� : �����Ϳ��� , �Ҹ���� : ���α׷�����

//static ������ġ : ����{}  ,�Ҵ���� : �����Ϳ��� , �Ҹ���� : ���α׷�����


//#include <stdio.h>
//void test()
//{
//	static int n1 = 0;
//	int n2 = 0;
//	n1++, n2++;
//	printf("static : %d , local : %d\n", n1, n2);
//}
//int main()
//{
//	int i;
//	test();
//	test();
//	test();
//	
//	return 0;
//}



//05 ����Լ�
//�����θ� �ݺ��ؼ� ȣ���ϴ� ������ �Լ�

//#include <stdio.h>
//void Recursive(int num)
//{
//	if (num > 0)
//	{
//		printf("����Լ� ȣ���� : %d\n", num);
//		Recursive(num - 1);
//		printf("����Լ� ȣ���� : %d\n", num);
//	}
//}
//int main()
//{
//	Recursive(3);
//	return 0;
//}
















