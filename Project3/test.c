#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

void meau()
{
	printf("*************************\n");
	printf("***1 . play    ***    0. exst***\n");
	printf("*************************\n");
}
//游戏的整个实现
void game()
{
	char ret = 0;
	//创建数组，存放棋盘信息
	char board[ROW][COL] = { 0 };//棋盘都是空格
	InitBoard(board, ROW, COL);//初始化棋盘（数组）
	//打印棋盘
	DisplayBoard(board, ROW, COL);//期望打印的棋盘样子 九宫格
	while (1) {
		PlayerMove(board, ROW, COL);//玩家下棋
		DisplayBoard(board, ROW, COL);//重新打印打印棋盘
		ret = Iswin(board, ROW, COL);//判断玩家赢
		if (ret != 'C')
		{
			break;
		}
		ComputerMove(board, ROW, COL);//电脑下棋
		DisplayBoard(board, ROW, COL);//重新打印打印棋盘
		ret = Iswin(board, ROW, COL); //判断电脑赢
		if (ret != 'C')
		{
			break;
		}
	}
		if (ret == '*')
		{
			printf("玩家赢\n");
	
		}
		else if (ret == '#')
		{
			printf("电脑赢\n");
		
		}
		else
		{
			printf("平局\n");
		}
	}

	void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));//电脑随机生成数字，强制转换时间轴
	do
	{
		meau();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input);
}
int  main()
{
	test();
	return 0;
}
