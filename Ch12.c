//01�����Ҵ�  �⺻

//malloc : �����Ҵ� �Լ�
//free : �����Ҵ� ����

//#include <stdio.h>
//#include <stdlib.h>	//�����Ҵ�� ���� ��� ����
//
//int main()
//{
//	int * ptr = (int *)malloc(sizeof(int));//�����Ҵ�� ������ �ּҸ� ptr�� �ʱ�ȭ
//	if (ptr == NULL)	//�����Ҵ� ���� üũ
//	{
//		printf("���� �Ҵ� ����");
//		exit(1);
//	}
//	*ptr = 10;	//�����Ҵ�� ������ 10����
//	printf("�����Ҵ� ������ ����� �� : %d\n", *ptr);
//	//�����Ҵ� ����
//	free(ptr);
//
//	return 0;
//}

//02�����Ҵ� �迭

//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int * ptr = (int *)malloc(sizeof(int) * 7);
//	if (ptr == NULL)
//	{
//		printf("�����Ҵ���� , �޸� ���� ����");
//		exit(1);
//	}
//	//���������� �� ����
//	for (int i = 0; i < 7; i++)
//	{
//		ptr[i] = i + 1;
//	}
//	//���������� �� Ȯ�� 
//	for (int i = 0; i < 7; i++)
//	{
//		printf("%d ", ptr[i]);
//	}
//	return 0;
//}

//03���ڿ� ó���Լ�

//#include <stdio.h>
//#include <string.h>	//���ڿ� ó�� ���� �������
//int main()
//{
//	char str1[10] = "abc";
//	char str2[10] = "Hello";
//	char str3[10];
//	
//	//strlen()  : ���ڿ� ���̸� ���������� ��ȯ
//	printf("str1�迭���� ���ڿ��� ���� :%d\n", strlen(str1));
//	printf("str2�迭���� ���ڿ��� ���� :%d\n", strlen(str2));
//
//	//strcpy	: ���ڿ� ����
//	strcpy_s(str3, sizeof(str3), str1);
//	printf("str1�� ���ڿ��� str3�� ���� : %s\n", str3);
//
//	//strcmp	: ���ڿ� �����(0 : �ι��ڿ��� ��ġ , 0�ƴѰ� : �ι��ڿ��� ��ġ����x)
//	if (strcmp(str1, str2) == 0)
//	{
//		printf("str1 �� str2���� ���ڿ��� ��ġ�մϴ�");
//	}
//	if (strcmp(str1, str3) == 0)
//	{
//		printf("str1 �� str3���� ���ڿ��� ��ġ�մϴ�");
//	}
//}


//04���ڿ� �����Ҵ�

//#include <stdio.h>
//#include <stdlib.h> //�����Ҵ�
//#include <string.h>	//���ڿ� ó��
//int main()
//{
//	//�̸� ����� �����Ҵ�
//	char * name = (char *)malloc(sizeof(char) * 10);
//	if (name == NULL)
//	{
//		exit(1);
//	}
//	printf("�̸� �Է� : ");
//	fgets(name, _msize(name), stdin);	//����! �����Ҵ��� ������� _msize()�� ũ�⸦ Ȯ��!
//	int len = strlen(name) - 1;  //����� ������ Idx
//	name[len] = 0;
//	//�ּ� ����� �����Ҵ�
//	char * addr = (char *)malloc(sizeof(char) * 10);
//	if (addr == NULL)
//	{
//		exit(1);
//	}
//	printf("�ּ� �Է� : ");
//	fgets(addr, _msize(addr), stdin);
//	len = strlen(addr) - 1;
//	addr[len] = 0;
//
//	printf("�̸� : %s\n", name);
//	printf("�ּ� : %s\n", addr);
//
//	return 0;
//}



//05 �Է��� ũ�⸸ŭ �����Ҵ� �� ������ ����

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main()
//{
//	char buf[1024];	//���ڿ� �ӽ� �������
//	char *name;
//	char *addr;
//	int len = 0;	
//	// -- �̸��Է� --
//	printf("�̸� �Է� : ");
//	fgets(buf, sizeof(buf), stdin);	//Ű����κ��� bufũ�⸸ŭ�� buf�迭�� ����
//	len = strlen(buf) - 1;	//������ġ idx ����
//	buf[len] = 0;	//������ ����
//	name = (char *)malloc(len + 1);//NULL�� �����ϱ� ���� len+1�����ŭ �����Ҵ�
//	if (name == NULL)
//	{
//		printf("�����Ҵ� ����");
//		exit(1);
//	}
//	strcpy_s(name, _msize(name), buf);
//	// -- �ּ��Է� --
//	printf("�ּ� �Է� : ");
//	fgets(buf, sizeof(buf), stdin);
//	len = strlen(buf) - 1;
//	buf[len] = 0;
//	addr = (char *)malloc(len + 1);
//	if (addr == NULL)
//	{
//		printf("�����Ҵ� ����");
//		exit(1);
//	}
//	strcpy_s(addr, _msize(addr), buf);
//	printf("�̸� : %s\n", name);
//	printf("�ּ� : %s\n", addr);
//	return 0;
//}
//


//06 ���ȭ

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
//	// -- �̸��Է� --
//	printf("�̸� �Է� : ");
//	name =StudentInfo();
//	printf("�ּ� �Է� : ");
//	addr = StudentInfo();
//	printf("�й� �Է� : ");
//	id = StudentInfo();
//	printf("�ֹι�ȣ �Է� : ");
//	identity = StudentInfo();
//
//	printf("�̸� :%s\n", name);
//	printf("�ּ� :%s\n", addr);
//	printf("�й� ;%s\n", id);
//	printf("�ֹ� :%s\n", identity);
//
//	free(name); free(addr); free(id); free(identity);
//	return 0;
//}
//char* StudentInfo()
//{
//	char * tmp;
//	char buf[1024];	//���ڿ� �ӽ� �������
//	int len = 0;
//	fgets(buf, sizeof(buf), stdin);	//Ű����κ��� bufũ�⸸ŭ�� buf�迭�� ����
//	len = strlen(buf) - 1;	//������ġ idx ����
//	buf[len] = 0;	//������ ����
//	tmp = (char *)malloc(len + 1);//NULL�� �����ϱ� ���� len+1�����ŭ �����Ҵ�
//	if (tmp == NULL)
//	{
//		printf("�����Ҵ� ����");
//		exit(1);
//	}
//	strcpy_s(tmp, _msize(tmp), buf);
//	return tmp;
//}
















