//01 ������ �⺻

//#include <stdio.h>
//int main()
//{
//
//	char ch1 = 'A';	//A���ڸ� char��ũ���� ch1���������� �ʱ�ȭ
//	char ch2;	//char��ũ���� ch2���� ����
//	char *ptr;	//char����ũ�⸦ ����Ű�� ptr������ ���� ����
//
//	ptr = &ch1;	//ch1�� �޸��ּҸ� ptr�����ͺ��� ������ ����
//	ch2 = *ptr;	//ptr�� ����Ű�� ���� ���� ch2������ ����
//
//	printf("ch1 �ּ� : %p\n", &ch1);
//	printf("ptr���� �� : %p\n", ptr);
//	printf("ptr�� ����Ű�� ���� �� : %c\n", *ptr);
//	printf("ch2�� �� : %c\n", ch2);
//	return 0;
//}


//02 ������ �⺻

//#include <stdio.h>
//int main()
//{
//	int num1 = 10;	//10���� int��ũ�⺯�� num1�� �ʱ�ȭ
//	int num2;		//int��ũ�� num2���� ����
//	int * ptr;		//int��ũ�⸦ ����Ű��(����ų���ִ�) ptr ������ ���� ����
//	ptr = &num1;	//num1�� �޸��ּҸ� ptr������ ������ ����
//	(*ptr)++;			//ptr�����Ͱ� ����Ű�� ���� ���� 1����
//	num2 = 5;		//num2������ 5���� ����
//	ptr = &num2;	//num2�� �޸��ּҸ� ptr������ ������ ����
//	*ptr = *ptr + num1 + num2;	//ptr�̰���Ű�� ���ǰ��� num1,num2���� ���� ptr�̰���Ű�� ������ ����
//	printf("num1 = %d num2 = %d *ptr = %d\n ", num1, num2, *ptr);
//	return 0;
//}//

//03 ������ �⺻

//#include <stdio.h>
//int main()
//{
//	int num1 = 100, num2 = 100;	//int�� ���� num1,num2 �� ���� 100���� �ʱ�ȭ
//	int * pnum;	//int�� ũ�⸦ ����Ű�� pnum������ ���� ����
//	pnum = &num1;	//num1�� �޸��ּҸ� pnum�� ����
//	(*pnum) += 30;	//pnum�� ����Ű�°��ǰ� + 30�� pnum�� ����Ű�� ������ ����
//	pnum = &num2;	//num2�� �޸��ּҸ� pnum�� ����
//	(*pnum) -= 30;	//pnum�� ����Ű�°��ǰ� - 30�� pnum�� ����Ű�� ������ ���� 
//	printf("num1 :%d num2:%d \n", num1, num2);
//}


//����

//#include <stdio.h>
//int main()
//{
//	//int�� ���� num1 �� num2�� ����� ���ÿ� ���� 10 , 20 ���� �ʱ�ȭ
//	int num1 = 10, num2 = 20;
//	//int�� �����ͺ��� ptr1 �� ptr2�� �����ϰ� ���� num1 , num2�� ����Ű�� ����
//	int *ptr1 = &num1;
//	int *ptr2 = &num2;
//	//ptr1�����Ͱ� ����Ű�� ���� ���� 10 ����
//	(*ptr1) += 10;
//	//ptr2�����Ͱ� ����Ű�� ���� ���� 10 ����
//	(*ptr2) -= 10;
//	//ptr1�� ptr2�� ����Ű�� ���� ������ ��ü
//	ptr1 = &num2;
//	ptr2 = &num1;
//	//ptr1�� ptr2�� ����Ű�� ���� �� Ȯ��
//	printf("*ptr1 : %d *ptr2 : %d \n", *ptr1, *ptr2);
//	return 0;
//}


//04 �����Ϳ� �迭

//�迭�� �̸��� �迭�� ������ġ�� ����Ű�� �����ͻ�� �̴�!!

//#include <stdio.h>
//int main()
//{
//	int arr1[3] = { 1,2,3, };
//	printf("%d\n", *arr1);
//
//	*arr1 = *arr1 + 10;
//	printf("%d\n", arr1[0]);
//
//	return 0;
//}

//05 �������� ����

//#include <stdio.h>
//int main()
//{
//	double * ptr = 0;
//	printf("%p\n", ptr + 1);
//	printf("%p\n", ptr + 2);
//	printf("%p\n", ptr + 3);
//	printf("%p\n", ptr + 4);
//	return 0;
//}
//

//06 �����͸� �迭ó�� ���

//#include <stdio.h>
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int * ptr = arr;
//
//	printf("%d %d\n", *(arr + 0), *(ptr + 0));
//	printf("%d %d\n", *(arr + 1), *(ptr + 1));
//	printf("%d %d\n", *(arr + 2), *(ptr + 2));
//	printf("%d %d\n", *(arr + 3), *(ptr + 3));
//	printf("%d %d\n", *(arr + 4), *(ptr + 4));
//	printf("\n");
//	printf("%d %d\n", arr[0], ptr[0]);
//	printf("%d %d\n", arr[1], ptr[1]);
//	printf("%d %d\n", arr[2], ptr[2]);
//	printf("%d %d\n", arr[3], ptr[3]);
//	printf("%d %d\n", arr[4], ptr[4]);
//	return 0;
//}

//07 ���ڹ迭 ���ڿ� ������


//#include <stdio.h>
//
//int main()
//{
//	char str1[4] = "abcd";	//abcd���ڿ��� ���Ǯ�� ������ str1�迭�� �ʱ�ȭ
//	char str2[4] = "abc";	//abc���ڿ��� ���Ǯ�� ������ str2�迭�� �ʱ�ȭ
//	char * ptr1 = "abcd";	//�̹������ abcd���ڿ��� �����ּҸ� ptr1�����ͺ����� �ʱ�ȭ
//	char * ptr2 = "abcd";	//�̹������ abcd���ڿ��� �����ּҸ� ptr2�����ͺ����� �ʱ�ȭ
//	char * ptr3 = "abc";	//�̹������ abc���ڿ��� �����ּҸ� ptr3�����ͺ����� �ʱ�ȭ
//	char * ptr4 = "abc";	//�̹������ abc���ڿ��� �����ּҸ� ptr4�����ͺ����� �ʱ�ȭ
//
//
//	printf("str1�� �ּ� : %p\n", str1);
//	printf("str2�� �ּ� :%p\n", str2);
//	printf("abcd�� �ּ� : %p\n", &"abcd");
//	printf("abc�� �ּ� : %p\n", &"abc");
//	printf("ptr1�� ��  : %p\n", ptr1);
//	printf("ptr2�� ��  : %p\n", ptr2);
//	printf("ptr3�� ��  : %p\n", ptr3);
//	printf("ptr4�� ��  : %p\n", ptr4);
//	
//	return 0;
//}


//����

//���̰� 5�� int�� �迭 arr�� ����� 1,2,3,4,5 �� �ʱ�ȭ
//�̹迭�� ù��° ��Ҹ� ����Ű�� ������ ���� ptr����
//�����Ϳ����� ���� �� �迭��ҷ� �̵��ؼ� ��� �迭 ��Ҿ��� ���� +2�� �����غ�����


//#include <stdio.h>
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int * ptr = arr;
//	*(ptr + 0) += 2;
//	*(ptr + 1) += 2;
//	*(ptr + 2) += 2;
//	*(ptr + 3) += 2;
//	*(ptr + 4) += 2;
//	printf("%d %d %d %d %d \n", arr[0], arr[1], arr[2], arr[3], arr[4]);
//	return 0;
//}


//08 �����Ϳ� �Լ�(Call-by-Value)

//#include <stdio.h>
//void func(int x, int y);
//
//int main()
//{
//	int n1 = 100, n2 = 200;
//	func(n1, n2);
//	printf("n1=%d n2=%d\n", n1, n2);
//	return 0;
//}
//void func(int x, int y)
//{
//	x += 5;
//	y += 5;
//	printf("x=%d y=%d\n", x, y);
//}


//09 Call-by-value ������� �����Լ� ������ swap�ϱ�

//#include <stdio.h>
//
//void swap(int n1, int n2)
//{
//	int tmp = n1;
//	n1 = n2;
//	n2 = tmp;
//}
//int main()
//{
//	int n1 = 100, n2 = 200;
//	printf("SWAP�� n1=%d n2=%d\n", n1, n2);
//	swap(n1, n2);
//	printf("SWAP�� n1=%d n2=%d\n", n1, n2);
//
//
//	return 0;
//}

//10 Call-by-address ������� �����Լ� ������ swap�ϱ�


//#include <stdio.h>
//
//void swap(int *ptr1, int *ptr2)
//{
//	int tmp = *ptr1;
//	*ptr1 = *ptr2;
//	*ptr2 = tmp;
//}
//int main()
//{
//	int n1 = 100, n2 = 200;
//	printf("SWAP�� n1=%d n2=%d\n", n1, n2);
//	swap(&n1, &n2);//Call-by-Address
//	printf("SWAP�� n1=%d n2=%d\n", n1, n2);
//	return 0;
//}

//11 �������� ������

//#include <stdio.h>
//int main()
//{
//	double num = 3.14;
//	double * ptr = &num;
//	double ** dptr = &ptr;
//	double * ptr2 = NULL;
//	printf("%p %p \n", ptr, *dptr);
//	printf("%.2f %.2f \n", num, **dptr);
//	ptr2 = *dptr;
//	*ptr2 = 10.99;
//	printf("%.2f %.2f \n", num, **dptr);
//
//	return 0;
//}


//12 �迭�����͸� �̿��� ���ڿ� ����

//#include <stdio.h>
//int main()
//{
//	char *str[4];	//�迭������
//	str[0] = "Hello ?";
//	str[1] = "My Name is ";
//	str[2] = "Jung ";
//	str[3] = "Woo Gyun";
//
//	printf("%s %s %s %s \n", str[0], str[1], str[2], str[3]);
//
//	return 0;
//}


//13 Main �Լ��� �μ� ���

//#include <stdio.h>
//int main(int argc ,char *argv[])
//{
//	int i = 0;
//	printf("���޵� ���ڿ��� �� : %d\n", argc);
//	for (i = 0; i < argc; i++)
//	{
//		printf("%d��° ���ڿ� : %s\n", i + 1, argv[i]);
//	}
//	return 0;
//}

//14 void ������
//->�ڷ����� �����Ǿ����� ����������
//-> � �ڷ���� ���� �� �ִ�
//-> �� �ڷḦ �̿��Ҷ��� Ư�� �ڷ������� ����ȯ�� ���־�� ��밡���ϴ�

//#include <stdio.h>
//int main()
//{
//	int num1 = 10;
//	double num2 = 10.4;
//	void * ptr;
//	ptr = &num1;
//	printf("%d\n", *(int *)ptr);
//	ptr = &num2;
//	printf("%lf\n", *(double *)ptr);
//
//	return 0;
//}
//

//����
//
//���̰� 6�� int�� �迭 arr�� �����ϰ� �̸� 1,2,3,4,5,6���� �ʱ�ȭ
//�迭�� �հ� �ڸ� ����Ű�� ������ ���� �ΰ��� �����ؼ� �̸�Ȱ���ؼ�
//�迭�� ����� ���� ������ 6 5 4 3 2 1 �� �ǵ��� ����


//#include <stdio.h>
//int main()
//{
//	int arr[6] = { 1,2,3,4,5,6 };
//	int *ptr1 = &arr[0];	//�迭����� ù��°�� ����Ű�� ������
//	int *ptr2 = &arr[5];	//�迭����� ��������°�� ����Ű�� ������
//	printf("Swap������ �迭 arr :");
//	for (int i = 0; i < 6; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	//Swap
//	int tmp = 0;
//	for(int i=0;i<3;i++)
//	{
//		tmp = *ptr1;	
//		*ptr1 = *ptr2;
//		*ptr2 = tmp;
//		ptr1++;
//		ptr2--;
//	}
//	//Swap���� �迭 Ȯ��
//	printf("Swap������ �迭 arr :");
//	for (int i = 0; i < 6; i++)
//	{	
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}






























