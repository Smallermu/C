#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

void meau()
{
	printf("*************************\n");
	printf("***1 . play    ***    0. exst***\n");
	printf("*************************\n");
}
//��Ϸ������ʵ��
void game()
{
	char ret = 0;
	//�������飬���������Ϣ
	char board[ROW][COL] = { 0 };//���̶��ǿո�
	InitBoard(board, ROW, COL);//��ʼ�����̣����飩
	//��ӡ����
	DisplayBoard(board, ROW, COL);//������ӡ���������� �Ź���
	while (1) {
		PlayerMove(board, ROW, COL);//�������
		DisplayBoard(board, ROW, COL);//���´�ӡ��ӡ����
		ret = Iswin(board, ROW, COL);//�ж����Ӯ
		if (ret != 'C')
		{
			break;
		}
		ComputerMove(board, ROW, COL);//��������
		DisplayBoard(board, ROW, COL);//���´�ӡ��ӡ����
		ret = Iswin(board, ROW, COL); //�жϵ���Ӯ
		if (ret != 'C')
		{
			break;
		}
	}
		if (ret == '*')
		{
			printf("���Ӯ\n");
	
		}
		else if (ret == '#')
		{
			printf("����Ӯ\n");
		
		}
		else
		{
			printf("ƽ��\n");
		}
	}

	void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));//��������������֣�ǿ��ת��ʱ����
	do
	{
		meau();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
}
int  main()
{
	test();
	return 0;
}
