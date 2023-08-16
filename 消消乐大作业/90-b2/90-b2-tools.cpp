#define _CRT_SECURE_NO_WARNINGS
#include<conio.h>
#include <iostream>
#include <iomanip>
#include <tchar.h>
#include <string.h>
#include <Windows.h>
extern void cct_gotoxy(const int X, const int Y);
extern void cct_getxy(int& x, int& y);
extern void cct_showch(const int X, const int Y, const char ch, const int bg_color, const int fg_color, const int rpt);
using namespace std;
void jifen(int c[][8],char b[][8],int row,int line,char row_,int line_,int goal,int& allscore)
{
	
	
	
	int score=0;
	int cal = 0;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < line; j++)
		{
			if (b[i][j] == '*')
				cal++;
		}
	}
	score = (c[int(row_) - 65][line_]) * 3 * cal;
	allscore += score;
	
	cout << "本次得分：" << score << " " << "总得分：" << allscore << " " << "合成目标：" << goal << endl;
}
void jifen1(int c[][8], char b[][8], int row, int line, char row_, int line_, int goal, int& allscore)
{



	int score = 0;
	int cal = 0;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < line; j++)
		{
			if (b[i][j] == '*')
				cal++;
		}
	}
	score = (c[int(row_) - 65][line_]) * 3 * cal;
	allscore += score;

	cct_gotoxy(0, 0);
	cout << "本次得分：" << score << " " << "总得分：" << allscore << " " << "合成目标：" <<setw(2)<< goal ;
}
void jifen2(int c[][8], char b[][8], int row, int line, char row_, int line_, int goal, int& allscore)
{



	int score = 0;
	int cal = 0;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < line; j++)
		{
			if (b[i][j] == '*')
				cal++;
		}
	}
	score = (c[int(row_) - 65][line_]) * 3 * cal;
	allscore += score;

	
	
}
void jieshu()
{
	int x, y;
	int num = 0;
	cout << endl;
	cout << "本小题结束，请输入End继续..." ;
	cct_getxy(x,y);
	while (1)
	{
		
		char str[100];
		cin.getline(str, 50, '\n');
		if ((str[0] == 'E' || str[0] == 'e') && (str[1] == 'N' || str[1] == 'n') && (str[2] == 'D' || str[2] == 'd'))
		{
			break;
		}
		else if (num > 0)
		{
			cout << "输入错误，请重新输入";
			cct_gotoxy(x, y);
			cct_showch(x, y, ' ', 0, 7, 100);
			cct_gotoxy(x, y);
		}
		else
			;
		num++;
	}
}
int max_(int a[][8] ,int row,int line)
{
	int t = a[0][0];
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < line; j++)
		{
			if (t <= a[i][j])
			{
				t = a[i][j];
			}
		}
	}
	return t;
}