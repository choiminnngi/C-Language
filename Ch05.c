//01 Switch �⺻

//#include <stdio.h>
//int main()
//{
//	int num;
//	printf("�� �Է� : ");
//	scanf_s("%d", &num);
//
//	switch (num)
//	{
//	case 1:
//		printf("1 �Է�\n");
//		break;
//	case 2:
//		printf("2 �Է�\n");
//		break;
//	case 3:
//		printf("3 �Է�\n");
//		break;
//	default:
//		printf("�� ���� �� �Է�");
//		break;
//		return 0;
//	}
//	return 0;
//}


//02 �޴������

//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int num;	//�޴� ���ÿ�
//	int data;	//������ �����
//	while (1)	//while �� �ݺ��� ()�� ���ǽ�. ���ǽľ��ǰ��� ��(0�� �ƴѸ�簪)�ΰ�� ���ӹ���{}�� �ݺ�����
//	{
//		system("cls");	//�ܼ�â�� ��ɾ���(system())  "cls" = �ܼ�â�� �ʱ�ȭ
//		printf("==============M E N U ===============\n");
//		printf("1 ������ �Է�\n");
//		printf("2 ������ ���\n");
//		printf("3 ���α׷� ����\n");
//		printf("==============M E N U ===============\n");
//		printf("��ȣ �Է�: ");
//		scanf_s("%d", &num);	//�ݺ��� ������ scanf �� ������ �Է��� �ɶ����� �Ͻ�����
//		switch (num)	//num�� ���� switch���� ����
//		{
//		case 1:
//			printf("���� �� �Է�: ");
//			scanf_s("%d", &data);
//			printf("����Ϸ�!\n");
//			system("pause");		//pause : Ű�� �Է��Ҷ����� �Ͻ�����
//			break;
//		case 2:
//			printf("����� ���� %d �Դϴ�\n", data);
//			system("pause");
//			break;
//		case 3:
//			printf(" �����մϴ�\n");
//			exit(1);				//exit(1) ���α׷� ��ü �����Ű�� �Լ� 1 : ���������� ����;
//			break;
//		default:
//			printf("�߸� �Է�,�ٽ��Է��ϼ���\n");
//			system("pause");
//			break;
//		}
//	}
//	return 0;
//}


//����

//=========== ��Ģ ���� ============
//1. �ǿ�����(2) �Է�
//2. �������� �Է�(+,-,*,/,%)
//3. ������ ���
//4. ����
//========== = ��Ģ ���� ============