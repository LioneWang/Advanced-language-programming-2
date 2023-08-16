#define _CRT_SECURE_NO_WARNINGS
#include<conio.h>
#include <iostream>
#include <iomanip>
#include <tchar.h>
#include <string.h>
#include <Windows.h>
#define CCT_MOUSE_EVENT				0
#define CCT_KEYBOARD_EVENT			1

/* �����ĸ��������Ϊʲô����Щֵ�������ͷ���ƶ�������ҵ�� */
#define KB_ARROW_UP					72
#define KB_ARROW_DOWN				80
#define KB_ARROW_LEFT				75
#define KB_ARROW_RIGHT				77

/* �������Ĳ��� */
#define MOUSE_NO_ACTION						0x0000	//��������
#define MOUSE_ONLY_MOVED					0x0001	//����ƶ�
#define MOUSE_LEFT_BUTTON_CLICK				0x0002	//�������
#define MOUSE_LEFT_BUTTON_DOUBLE_CLICK		0x0004	//˫�����
#define MOUSE_RIGHT_BUTTON_CLICK			0x0008	//�����Ҽ�
#define MOUSE_RIGHT_BUTTON_DOUBLE_CLICK	0x0010	//˫���Ҽ�
#define MOUSE_LEFTRIGHT_BUTTON_CLICK		0x0020	//ͬʱ�������Ҽ�
#define MOUSE_WHEEL_CLICK					0x0040	//���ֱ�����
#define MOUSE_WHEEL_MOVED_UP				0x0080	//���������ƶ�
#define MOUSE_WHEEL_MOVED_DOWN				0x0100	//���������ƶ�

/* ���������̬ */
#define CURSOR_VISIBLE_FULL					0	//�����ʾ��ȫ��ɫ��
#define CURSOR_VISIBLE_HALF					1	//�����ʾ�����ɫ��
#define CURSOR_VISIBLE_NORMAL				2	//�����ʾ�����ߣ�ȱʡΪ�˷�ʽ��
#define CURSOR_INVISIBLE					3	//��겻��ʾ
extern void cct_gotoxy(const int X, const int Y);
extern void cct_getxy(int& x, int& y);
extern void cct_showch(const int X, const int Y, const char ch, const int bg_color, const int fg_color, const int rpt);
extern void cct_showint(const int X, const int Y, const int num, const int bg_color, const int fg_color, const int rpt);
extern void cct_setcolor(const int bg_color, const int fg_color);
extern void cct_setcursor(const int options);
extern void cct_showstr(const int X, const int Y, const char* str, const int bg_color, const int fg_color, int rpt, int maxlen);
extern int cct_read_keyboard_and_mouse(int& MX, int& MY, int& MAction, int& keycode1, int& keycode2);
extern void cct_enable_mouse(void);
extern void cct_disable_mouse(void);
extern void jieshu();
extern void baikuang(int a[][8], int i, int j);
extern void heikuang(int a[][8], int i, int j);
extern void chazhao(char row_, int line_, int row, int line, int a[][8], char b[][8]);
extern void guibing(int a[][8], char b[][8], int c[][8], int row, int line, char row_, int line_);
extern void jifen(int a[][8], char b[][8], int row, int line, char row_, int line_, int goal, int& allscore);
extern void xiayi(int a[][8], int row, int line);
extern void xiayi(int a[][8], int row, int line);
extern void tianchong(int a[][8], int row, int line);
extern void quanbai(int a[][8], int i, int j);
extern void jifen1(int c[][8], char b[][8], int row, int line, char row_, int line_, int goal, int& allscore);
extern void chazhao1(int row_, int line_, int row, int line, int a[][8], char b[][8]);
extern void guibing1(int a[][8], char b[][8], int c[][8], int row, int line, int row_, int line_);
extern void chongman(int a[][8], int i, int j, int row, int line,int max);
extern void xialuo(int a[][8], int i, int j, int row, int line);
extern int max_(int a[][8], int row, int line);
using namespace std;
void input(int& t, int& r)
{
	while (1)
	{
		cout << endl;
		cout << "����������(5-8)��" << endl;
		cin >> t;
		if (t <= 8 && t >= 5)
			break;
		
	}
	while (1)
	{
		cout << "����������(5-8)��" << endl;
		cin >> r;
		if (r <= 8 && r >= 5)
			break;
	}
	

}
void input2(char& row_, int& line_,int a[][8])
{
	while (1)
	{
		
		cout << "������ĸ+������ʽ[����c2]����������꣺";
		cin >> row_;
		cin >> line_;
		cout << "����Ϊ" << row_ << "��" << line_ << "��" << endl;
		if (a[int(row_) - 65 + 1][line_] == a[int(row_) - 65][line_]
			|| a[int(row_) - 65 - 1][line_] == a[int(row_) - 65][line_]
			|| a[int(row_) - 65][line_ + 1] == a[int(row_) - 65][line_]
			|| a[int(row_) - 65][line_ - 1] == a[int(row_) - 65][line_])
		{
			break;
		}
		cout << "����ľ�������λ�ô���������ֵͬ������������" << endl;
	}
	
	
}
void input3(char& z,char row_,int line_)
{
	cout << "��ȷ���Ƿ�����ڵ���ֵͬ�ϲ���"<<row_<<line_<<"��(Y / N / Q)��" << endl;
	cin >> z;
	char c=getchar();
	cout << endl;
	
}
void input4(char& p)
{
	cout << "���س����������������0����...";
	p=cin.get();
	
}
void input5(char& l)
{
	cout << "���س���������ֵ���..." ;
	cin.get(l);

}
void kongbai(int a[][8], int row, int line)
{
	cct_setcursor(3);
	int x, y;
	cout <<  endl;
	cout << "    ";
	for (int i = 0; i < line; i++)
	{
		cout << "  " << i;
		cout << "   ";
	}
	cout << endl;
	

	
	cout << "  ";
	cct_getxy(x, y);
	cct_showstr(x, y, "��", 7, 0, 1, -1);
	for (int i = 0; i < line; i++)
	{
		Sleep(60);
		cct_getxy(x, y);
		cct_showstr(x, y, "������", 7, 0, 1, -1);
	}
	cct_getxy(x, y);
	cct_showstr(x, y, "��", 7, 0, 1, -1);
	cct_setcolor(0, 0);
	cout << endl;
	
	
	
	for (int i = 0; i < row; i++)
	{
		Sleep(50);
		cout << "  ";
		cct_getxy(x, y);
		cct_showstr(x, y, "��", 7, 0, 1,-1);
		cct_getxy(x, y);
		cct_showch(x , y, ' ', 7, 0, 6 * line);
		cct_getxy(x, y);
		cct_showstr(x, y, "��", 7, 0, 1, -1);
		cct_setcolor(0, 0);
		cout << endl;


		Sleep(50);
		cct_setcolor(0, 7);
		cout << char('A'+i)<<" ";
		cct_getxy(x, y);
		cct_showstr(x, y, "��", 7, 0, 1, -1);
		cct_getxy(x, y);
		Sleep(50);
		cct_showch(x, y, ' ', 7, 0, 6 * line);
		cct_getxy(x, y);
		Sleep(50);
		cct_showstr(x, y, "��", 7, 0, 1, -1);
		cct_setcolor(0, 0);
		cout << endl;

		Sleep(50);
		cout << "  ";
		cct_getxy(x, y);
		cct_showstr(x, y, "��", 7, 0, 1, -1);
		cct_getxy(x, y);
		Sleep(50);
		cct_showch(x, y, ' ', 7, 0, 6 * line);
		cct_getxy(x, y);
		Sleep(50);
		cct_showstr(x, y, "��", 7, 0, 1, -1);
		cct_setcolor(0, 0);
		cout << endl;
	}
	cout << "  ";
	cct_getxy(x, y);
	cct_showstr(x, y, "��", 7, 0, 1, -1);
	for (int i = 0; i < line; i++)
	{
		Sleep(50);
		cct_getxy(x, y);
		cct_showstr(x, y, "������", 7, 0, 1, -1);
	}
	cct_getxy(x, y);
	cct_showstr(x, y, "��", 7, 0, 1, -1);
	cct_setcolor(0, 0);
	cout << endl;

	

	
	
	

}
void yanse1(int a[][8],int row, int line)
{
	cct_setcursor(3);
	cct_gotoxy(0, 0);
	int x, y;
	cout << endl;
	cout << endl;
	cout << endl;
	


	for (int i = 0; i < row; i++)
	{
		Sleep(50);
		cct_getxy(x, y);
		cct_gotoxy(x + 4, y);
		for (int j = 0; j < line; j++)
		{
			cct_getxy(x, y);
			cct_showstr(x, y, "������", a[i][j], 0, 1, -1);
		}
		cct_setcolor(0, 0);
		cout << endl;

		Sleep(50);
		cct_getxy(x, y);
		cct_gotoxy(x + 4, y);
		for (int j = 0; j < line; j++)
		{
			cct_getxy(x, y);
			cct_showstr(x, y, "��", a[i][j], 0, 1, -1);
			cct_getxy(x, y);
			cct_showint(x, y, a[i][j], a[i][j], 0, 1);
			cct_getxy(x, y);
			cct_showch(x, y, ' ', a[i][j], 0, 1);
			cct_getxy(x, y);
			cct_showstr(x, y, "��", a[i][j], 0, 1, -1);
		}
		cct_setcolor(0, 0);
		cout << endl;

		Sleep(50);
		cct_getxy(x, y);
		cct_gotoxy(x + 4, y);
		for (int j = 0; j < line; j++)
		{
			cct_getxy(x, y);
			cct_showstr(x, y, "������", a[i][j], 0, 1, -1);
		}
		cct_setcolor(0, 0);
		cout << endl;
	}
}
void xiayi1(int a[][8], int row, int line)
{
	for (int j = 0; j < line; j++)
	{


		int t = 0;
		for (int p = row; p > 0; p--)
		{
			for (int i = row - 1; i > 0; i--)
			{
				if (a[i][j] == 0 && a[i-1][j]!=0)
				{
					for (int c = 4 * i - 1+1; c <= 4 * i + 3; c++)
					{
						Sleep(50);
						cct_showstr(4 + 8 * j, c,  "������", a[i-1][j], 0, 1, -1);
						

						cct_showstr(4 + 8 * j, c+1, "��", a[i - 1][j], 0, 1, -1);
						//���ƺ����

						cct_showint(4 + 8 * j + 2, c+1, a[i-1][j], a[i-1][j], 0, 1);
						cct_showch(4 + 8 * j + 3, c+ 1, ' ', a[i-1][j], 0, 1);
						cct_showstr(4 + 8 * j + 4, c+ 1, "��", a[i-1][j], 0, 1, -1);

						cct_showstr(4 + 8 * j, c + 2, "������", a[i-1][j], 0, 1, -1);
						if (c == 4 * i + 3)
						{
							cct_showstr(4 + 8 * j, c - 1, "������", 7, 0, 1, -1);//���ƺ����
						}
						else
						{
							cct_showstr(4 + 8 * j, c - 1, "      ", 7, 0, 1, -1);//���ƺ����
						}
						
					}
					
					t = a[i - 1][j];
					a[i - 1][j] = a[i][j];
					a[i][j] = t;
					cct_setcolor(0, 7);
				}
			}
		}

	}
}
void kongbai2(int a[][8], int row, int line)
{
	cct_setcolor(0, 7);
	
	int x, y;
	cout << endl;
	cout << "    ";
	for (int i = 0; i < line; i++)
	{
		cout << "  " << i;
		cout << "   ";
		cout << "  ";
	}
	cout << endl;



	cout << "  ";
	cct_getxy(x, y);
	cct_showstr(x, y, "��", 7, 0, 1, -1);
	for (int i = 0; i < line; i++)
	{
		Sleep(60);
		cct_getxy(x, y);
		cct_showstr(x, y, "������", 7, 0, 1, -1);
		if (i < line - 1)
		{
			cct_getxy(x, y);
			cct_showstr(x, y, "��", 7, 0, 1, -1);
		}

	}
	cct_getxy(x, y);
	cct_showstr(x, y, "��", 7, 0, 1, -1);
	cct_setcolor(0, 0);
	cout << endl;



	for (int i = 0; i < row; i++)
	{
		Sleep(50);
		cout << "  ";
		cct_getxy(x, y);
		cct_showstr(x, y, "��", 7, 0, 1, -1);
		for (int j = 0; j < line; j++)
		{
			cct_getxy(x, y);
			cct_showch(x, y, ' ', 7, 0, 6);
			cct_getxy(x, y);
			cct_showstr(x, y, "��", 7, 0, 1, -1);
		}
		cct_setcolor(0, 0);
		cout << endl;


		Sleep(50);
		cct_setcolor(0, 7);
		cout << char('A' + i) << " ";
		cct_getxy(x, y);
		cct_showstr(x, y, "��", 7, 0, 1, -1);
		for (int j = 0; j < line; j++)
		{
			cct_getxy(x, y);
			cct_showch(x, y, ' ', 7, 0, 6);
			cct_getxy(x, y);
			cct_showstr(x, y, "��", 7, 0, 1, -1);
		}
		cct_setcolor(0, 0);
		cout << endl;



		Sleep(50);
		cout << "  ";
		cct_getxy(x, y);
		cct_showstr(x, y, "��", 7, 0, 1, -1);
		for (int j = 0; j < line; j++)
		{
			cct_getxy(x, y);
			cct_showch(x, y, ' ', 7, 0, 6);
			cct_getxy(x, y);
			cct_showstr(x, y, "��", 7, 0, 1, -1);
		}
		cct_setcolor(0, 0);
		cout << endl;
		if (i < row - 1)
		{
			cout << "  ";
			cct_getxy(x, y);
			cct_showstr(x, y, "��", 7, 0, 1, -1);
			for (int i = 0; i < line; i++)
			{
				Sleep(60);
				cct_getxy(x, y);
				cct_showstr(x, y, "������", 7, 0, 1, -1);
				if (i < line - 1)
				{
					cct_getxy(x, y);
					cct_showstr(x, y, "��", 7, 0, 1, -1);
				}

			}
			cct_getxy(x, y);
			cct_showstr(x, y, "��", 7, 0, 1, -1);
			cct_setcolor(0, 0);
			cout << endl;
		}
		
	}
	cout << "  ";
	cct_getxy(x, y);
	cct_showstr(x, y, "��", 7, 0, 1, -1);
	for (int i = 0; i < line; i++)
	{
		Sleep(60);
		cct_getxy(x, y);
		cct_showstr(x, y, "������", 7, 0, 1, -1);
		if (i < line - 1)
		{
			cct_getxy(x, y);
			cct_showstr(x, y, "��", 7, 0, 1, -1);
		}

	}
	cct_getxy(x, y);
	cct_showstr(x, y, "��", 7, 0, 1, -1);
	cct_setcolor(0, 0);
	cout << endl;
}
void yanse2(int a[][8], int row, int line)
{
	cct_setcursor(3);
	cct_gotoxy(0, 0);
	int x, y;
	cout << endl;
	cout << endl;
	cout << endl;



	for (int i = 0; i < row; i++)
	{
		Sleep(50);
		cct_getxy(x, y);
		cct_gotoxy(x + 4, y);
		for (int j = 0; j < line; j++)
		{
			cct_getxy(x, y);
			cct_showstr(x, y, "������", a[i][j], 0, 1, -1);
			cct_getxy(x, y);
			cct_gotoxy(x + 2, y);
		}
		cct_setcolor(0, 0);
		cout << endl;

		Sleep(50);
		cct_getxy(x, y);
		cct_gotoxy(x + 4, y);
		for (int j = 0; j < line; j++)
		{
			cct_getxy(x, y);
			cct_showstr(x, y, "��", a[i][j], 0, 1, -1);
			cct_getxy(x, y);
			cct_showint(x, y, a[i][j], a[i][j], 0, 1);
			cct_getxy(x, y);
			cct_showch(x, y, ' ', a[i][j], 0, 1);
			cct_getxy(x, y);
			cct_showstr(x, y, "��", a[i][j], 0, 1, -1);
			cct_getxy(x, y);
			cct_gotoxy(x + 2, y);
		}
		cct_setcolor(0, 0);
		cout << endl;

		Sleep(50);
		cct_getxy(x, y);
		cct_gotoxy(x + 4, y);
		for (int j = 0; j < line; j++)
		{
			cct_getxy(x, y);
			cct_showstr(x, y, "������", a[i][j], 0, 1, -1);
			cct_getxy(x, y);
			cct_gotoxy(x + 2, y);
		}
		cct_setcolor(0, 0);
		cout << endl;
		cct_getxy(x, y);
		cct_gotoxy(x , y+1);
	}
}
void jianpan(int a[][8], char b[][8], int c[][8], int row, int line, int p)
{
	int x, y;
	int i = 0;
	int j = 0;
	cct_getxy(x, y);
	cout << "��ͷ��/����ƶ����س���/�������ѡ�񲢽���" ;
	baikuang(a, i, j);
	if (1) {
		int X = 0, Y = 0;
		int ret, maction;
		int keycode1, keycode2;
		int loop = 1;

		cct_enable_mouse();

		/* ��ӡ��ʼ���λ��[0,0] */
		cct_setcursor(CURSOR_INVISIBLE);	//�رչ��
		
	

		while (loop) {
			/* �����/���̣�����ֵΪ���������е�ĳһ��, ��ǰ���λ����<X,Y>�� */
			ret = cct_read_keyboard_and_mouse(X, Y, maction, keycode1, keycode2);
			if (X >= 6 && X <= 8 * (line - 1) + 6 && Y >= 4 && Y <= 4 * (row - 1) + 4)
			{
				cct_showch(0, y, ' ', 0, 0, 100);
				cct_gotoxy(0, y);
				cct_setcolor(0, 7);
				cout << "[��ǰ����]" << char('A' + (Y - 4) / 4) << "��" << (X - 6) / 8 << "��";
				for (int p = 0; p < row; p++)
				{
					for (int t = 0; t < line; t++)
					{

						heikuang(a, p, t);




					}
				}
				baikuang(a, (Y - 4) / 4, (X - 6) / 8);
			}
			if (ret == CCT_MOUSE_EVENT) {
				/* ת����7�н��д�ӡ */
				

				switch (maction) {
					case MOUSE_ONLY_MOVED:
						
						break;
					case MOUSE_LEFT_BUTTON_CLICK:			//�������
						jieshu();
						break;
					case MOUSE_LEFT_BUTTON_DOUBLE_CLICK:	//˫�����
						
						break;
					case MOUSE_RIGHT_BUTTON_CLICK:			//�����Ҽ�
						
						break;
					case MOUSE_RIGHT_BUTTON_DOUBLE_CLICK:	//˫���Ҽ�
						
						loop = 0;
						break;
					case MOUSE_LEFTRIGHT_BUTTON_CLICK:		//ͬʱ�������Ҽ�
						
						break;
					case MOUSE_WHEEL_CLICK:
						
						break;
					case MOUSE_WHEEL_MOVED_UP:
						
						break;
					case MOUSE_WHEEL_MOVED_DOWN:
						
						break;
					case MOUSE_NO_ACTION:
					default:
						
						break;
				} //end of switch(maction)
			} //end of if (CCT_MOUSE_EVENT)
			else if (ret == CCT_KEYBOARD_EVENT) {
				/* ת����9�н��д�ӡ */
				

				switch (keycode1) {

					case 13: 
					{
						if (p == 8)
						{
							//�س���
							cct_showch(0, y, ' ', 0, 0, 100);
							cct_gotoxy(0, y);
							cct_setcolor(0, 7);
							chazhao1(i, j, row, line, a, b);
							for (int i = 0; i < row; i++)
							{
								for (int j = 0; j < line; j++)
								{
									if (b[i][j] == '*')
									{
										baikuang(a, i, j);
									}
								}
							}
							cct_setcolor(0, 7);
							cout << endl;
							cct_showch(0, y, ' ', 0, 0, 100);
							cct_gotoxy(0, y);
							cct_setcolor(0, 7);
							cout << "ѡ����" << char('A' + i) << "��" << j << "��" << endl;
							if (cin.get() == '\n')
							{
								guibing1(a, b, c, row, line, i, j);

								for (int p = 0; p < row; p++)
								{
									for (int t = 0; t < line; t++)
									{


										if (a[p][t] == 0)
										{
											quanbai(a, p, t);
										}

									}
								}
								for (int p = 0; p < row; p++)
								{
									for (int t = 0; t < line; t++)
									{
										if (p == i && t == j)
										{
											for (int i = 0; i < 10; i++)
											{
												baikuang(a, p, t);
												Sleep(50);
												heikuang(a, p, t);
												Sleep(50);

											}


										}
									}
								}



								cct_showch(0, y, ' ', 0, 0, 100);
								cct_gotoxy(0, y);
								cct_setcolor(0, 7);

								cout << "�ϳ���ɣ��س���/�����������0";
								cin.clear();
								cin.sync();
								if (getchar() == '\n')
								{
									xiayi1(a, row, line);


									cct_showch(0, y, ' ', 0, 0, 100);
									cct_gotoxy(0, y);
									cct_setcolor(0, 7);
									cout << "����0��ɣ��س���/������������ֵ";
								}
								if (getchar() == '\n')
								{
									chongman(a, i, j, row, line,max_(a,row,line));
								}




								cct_showch(0, y, ' ', 0, 0, 100);
								cct_gotoxy(0, y);
								cct_setcolor(0, 6);
								cct_setcursor(3);

							}
							cct_setcolor(0, 7);
							jieshu();
						}
						else
						{
							cct_showch(0, y, ' ', 0, 0, 100);
							cct_gotoxy(x, y);
							cct_setcolor(0, 7);
							cout << "ѡ����" << char(i + 65) << "��" << j << "��" << endl;
							jieshu();
						}
					}
					case 27:	//ESC��
						loop = 0;
						cout << "ESC       ";
						break;
					case 32:	//SPACE��
						loop = 0;
						cout << "SPACE     ";
						break;
					case 224:
						switch (keycode2) {
							
							case KB_ARROW_UP:
							{
								heikuang(a, i, j);
								if (i == 0)
								{
									i = row - 1;
								}
								else
								{
									i--;
								}
								
								baikuang(a, i, j);
								
								
								cct_showch(0, y, ' ', 0, 0, 100);
								cct_gotoxy(0, y);
								cct_setcolor(0, 7);
								cout << "[��ǰ����]" << char('A' + i) << "��" << j << "��";
								break;
							}
								
							case KB_ARROW_DOWN:
							{
								heikuang(a, i, j);
								if (i == row-1)
								{
									i = 0;
								}
								else
								{
									i++;
								}
								baikuang(a, i, j);
								
								cct_showch(0, y, ' ', 0, 0, 100);
								cct_gotoxy(0, y);
								cct_setcolor(0, 7);
								cout << "[��ǰ����]" << char('A' + i) << "��" << j << "��";
								break;
							}
								
								
							case KB_ARROW_LEFT:
							{
								heikuang(a, i, j);
								if (j == 0)
								{
									j = line - 1;
								}
								else
								{
									j--;
								}

								baikuang(a, i, j);
								
								cct_showch(0, y, ' ', 0, 0, 100);
								cct_gotoxy(0, y);
								cct_setcolor(0, 7);
								cout << "[��ǰ����]" << char('A' + i) << "��" << j << "��";
								break;
							}
								
								
							case KB_ARROW_RIGHT:
							{
								heikuang(a, i, j);
								if (j == line-1)
								{
									j = 0;
								}
								else
								{
									j++;
								}

								baikuang(a, i, j);
								cct_showch(0, y, ' ',0, 0, 100);
								cct_gotoxy(0, y);
								cct_setcolor(0, 7);
								cout << "[��ǰ����]" << char('A' + i) << "��" << j << "��";
								break;
							}
								
								
						}
						break;
					default:	//������ֱ�Ӵ�ӡASCIIֵ
						if (keycode2)
							cout << "Keycode=" << keycode1 << '/' << keycode2 << endl;
						else
							cout << "Keycode=" << keycode1 << endl;
						break;
				}//end of swicth(keycode1)
			}//end of else if(ret == CCT_KEYBOARD_EVENT��
		} //end of while(1)

		cct_disable_mouse();	//�������
		
		
	}
}
void jianpan2(int a[][8],char b[][8],int c[][8], int row, int line,int p,int goal,int allscore)
{
	
	cct_setcursor(3);
	int x, y;
	int i = 0;
	int j = 0;
	cct_getxy(x, y);
	cout << "��ͷ��/����ƶ����س���/�������ѡ�񲢽���";
	baikuang(a, i, j);
	if (1) {
		int X = 0, Y = 0;
		int ret, maction;
		int keycode1, keycode2;
		int loop = 1;

		cct_enable_mouse();

		/* ��ӡ��ʼ���λ��[0,0] */
		cct_setcursor(CURSOR_INVISIBLE);	//�رչ��



		while (loop) {
			static int num = 0;
			num++;

			/* �����/���̣�����ֵΪ���������е�ĳһ��, ��ǰ���λ����<X,Y>�� */
			ret = cct_read_keyboard_and_mouse(X, Y, maction, keycode1, keycode2);
			if (X >= 6 && X <= 8 * (line - 1) + 6 && Y >= 4 && Y <= 4 * (row - 1) + 4)
			{
				cct_showch(0, y, ' ', 0, 0, 100);
				cct_gotoxy(0, y);
				cct_setcolor(0, 7);
				cout << "[��ǰ����]" << char('A' + (Y-4)/4) << "��" << (X-6)/8<< "��";
				for (int p = 0; p < row; p++)
				{
					for (int t = 0; t < line; t++)
					{
						
						heikuang(a, p, t);

						

						
					}
				}
				baikuang(a,(Y - 4) / 4, (X - 6) / 8);
			
			}
			
			if (ret == CCT_KEYBOARD_EVENT) {
				/* ת����9�н��д�ӡ */


				switch (keycode1) {

					case 13:
					{
						
						//�س���
						
						cct_showch(0, y, ' ', 0, 0, 100);
						cct_gotoxy(0, y);
						cct_setcolor(0, 7);
						chazhao1(i, j, row, line, a, b);
						for (int i = 0; i < row; i++)
						{
							for (int j = 0; j < line; j++)
							{
								if (b[i][j] == '*')
								{
									baikuang(a,i, j);
								}
							}
						}
						cct_setcolor(0, 7);
						cout << endl;
						if ( i < row - 1  && a[i + 1][j] == a[i][j] || i>0 &&  a[i - 1][j] == a[i][j] || j > 0 && a[i][j - 1] == a[i][j] || j < line - 1 &&  a[i][j + 1] == a[i][j])
						{
								
							cct_showch(0, y, ' ', 0, 0, 100);
							cct_gotoxy(0, y);
							cct_setcolor(0, 7);
							cout << "���س���/����ƶ�ȡ����ǰѡ�񣬻س���/�������ѡ�񲢽���";
							if(cin.get()!='\n')
								break;
							else
							{
								guibing1(a, b, c, row, line, i, j);
								
								for (int p = 0; p < row; p++)
								{
									for (int t = 0; t < line; t++)
									{
										

										if (a[p][t] == 0)
										{
											quanbai(a, p, t);
										}
										
									}
								}
								for (int p = 0; p < row; p++)
								{
									for (int t = 0; t < line; t++)
									{
										if (p == i && t == j)
										{
											for (int i = 0; i < 10; i++)
											{
												baikuang(a, p, t);
												Sleep(50);
												heikuang(a, p, t);
												Sleep(50);

											}


										}
									}
								}
								if (p == 9)
								{
									cct_setcolor(0, 7);
									jifen1(c, b, row, line, char(i + 65), j, goal, allscore);
								}


								cct_showch(0, y, ' ', 0, 0, 100);
								cct_gotoxy(0, y);
								cct_setcolor(0, 7);

								cout << "�ϳ���ɣ��س���/�����������0";
								cin.clear();
								cin.sync();

								xiayi1(a,  row, line);


								cct_showch(0, y, ' ', 0, 0, 100);
								cct_gotoxy(0, y);
								cct_setcolor(0, 7);
								cout << "����0��ɣ��س���/������������ֵ";
								chongman(a, i, j, row, line,max_(a,row,line));



								cct_showch(0, y, ' ', 0, 0, 100);
								cct_gotoxy(0, y);
								cct_setcolor(0, 6);
								cct_setcursor(3);

								
								if (goal == max_(a, row, line))
								{
									goal++;

									cct_showch(0, y, ' ', 0, 0, 100);
									cct_gotoxy(0, y);
									cct_setcolor(14, 0);
									cout << "�Ѿ��ϳɵ�" << goal - 1 << ",���س���/����������������Ŀ��" << endl;
									cct_setcolor(0, 7);

								}

								

								
								cct_setcolor(0, 7);
								break;
							}
						}
						else
						{
							cct_showch(0, y, ' ', 0, 0, 100);
							cct_gotoxy(0, y);
							cct_setcolor(0, 7);
							cout << "��Χ����ֵͬ����ͷ��/����ƶ����س���/�������ѡ�񲢽���";
							break;
						}
					}
						
						
					case 'q':
						jieshu();
					case 'Q':
						jieshu();
					case 'C':
						if(p==8)
							jieshu();
						
						
					case 27:	//ESC��
						loop = 0;
						cout << "ESC       ";
						break;
					case 32:	//SPACE��
						loop = 0;
						cout << "SPACE     ";
						break;
					case 224:
						switch (keycode2) {

							case KB_ARROW_UP:
							{
								for (int i = 0; i < row; i++)
								{
									for (int j = 0; j < line; j++)
									{
										heikuang(a, i, j);
									}
								}
								if (i == 0)
								{
									i = row - 1;
								}
								else
								{
									i--;
								}

								baikuang(a, i, j);


								cct_showch(0, y, ' ', 0, 0, 100);
								cct_gotoxy(0, y);
								cct_setcolor(0, 7);
								cout << "[��ǰ����]" << char('A' + i) << "��" << j << "��";
								break;
							}

							case KB_ARROW_DOWN:
							{
								for (int i = 0; i < row; i++)
								{
									for (int j = 0; j < line; j++)
									{
										heikuang(a, i, j);
									}
								}
								if (i == row - 1)
								{
									i = 0;
								}
								else
								{
									i++;
								}
								baikuang(a, i, j);

								cct_showch(0, y, ' ', 0, 0, 100);
								cct_gotoxy(0, y);
								cct_setcolor(0, 7);
								cout << "[��ǰ����]" << char('A' + i) << "��" << j << "��";
								break;
							}


							case KB_ARROW_LEFT:
							{
								for (int i = 0; i < row; i++)
								{
									for (int j = 0; j < line; j++)
									{
										heikuang(a, i, j);
									}
								}
								if (j == 0)
								{
									j = line - 1;
								}
								else
								{
									j--;
								}

								baikuang(a, i, j);

								cct_showch(0, y, ' ', 0, 0, 100);
								cct_gotoxy(0, y);
								cct_setcolor(0, 7);
								cout << "[��ǰ����]" << char('A' + i) << "��" << j << "��";
								break;
							}


							case KB_ARROW_RIGHT:
							{
								for (int i = 0; i < row; i++)
								{
									for (int j = 0; j < line; j++)
									{
										heikuang(a, i, j);
									}
								}
								if (j == line - 1)
								{
									j = 0;
								}
								else
								{
									j++;
								}

								baikuang(a, i, j);
								cct_showch(0, y, ' ', 0, 0, 100);
								cct_gotoxy(0, y);
								cct_setcolor(0, 7);
								cout << "[��ǰ����]" << char('A' + i) << "��" << j << "��";
								break;
							}


						}
						break;
					default:	//������ֱ�Ӵ�ӡASCIIֵ
						if (keycode2)
							cout << "Keycode=" << keycode1 << '/' << keycode2 << endl;
						else
							cout << "Keycode=" << keycode1 << endl;
						break;
				}//end of swicth(keycode1)
			}//end of else if(ret == CCT_KEYBOARD_EVENT��
			else if (ret == CCT_MOUSE_EVENT) {
				/* ת����7�н��д�ӡ */


				switch (maction) {
					case MOUSE_ONLY_MOVED:

						break;
					case MOUSE_LEFT_BUTTON_CLICK:	
					{//�������
						cct_showch(0, y, ' ', 0, 0, 100);
						cct_gotoxy(0, y);
						cct_setcolor(0, 7);
						chazhao1(i, j, row, line, a, b);
						guibing1(a, b, c, row, line, i, j);

						for (int p = 0; p < row; p++)
						{
							for (int t = 0; t < line; t++)
							{


								if (a[p][t] == 0)
								{
									quanbai(a, p, t);
								}

							}
						}
						for (int p = 0; p < row; p++)
						{
							for (int t = 0; t < line; t++)
							{
								if (p == i && t == j)
								{
									for (int i = 0; i < 10; i++)
									{
										baikuang(a, p, t);
										Sleep(50);
										heikuang(a, p, t);
										Sleep(50);

									}


								}
							}
						}
						if (p == 9)
						{
							cct_setcolor(0, 7);
							jifen1(c, b, row, line, char(i + 65), j, goal, allscore);
						}


						cct_showch(0, y, ' ', 0, 0, 100);
						cct_gotoxy(0, y);
						cct_setcolor(0, 7);

						cout << "�ϳ���ɣ��س���/�����������0";
						cin.clear();
						cin.sync();

						xiayi1(a, row, line);


						cct_showch(0, y, ' ', 0, 0, 100);
						cct_gotoxy(0, y);
						cct_setcolor(0, 7);
						cout << "����0��ɣ��س���/������������ֵ";
						chongman(a, i, j, row, line, max_(a, row, line));



						cct_showch(0, y, ' ', 0, 0, 100);
						cct_gotoxy(0, y);
						cct_setcolor(0, 6);
						cct_setcursor(3);


						if (goal == max_(a, row, line))
						{
							goal++;

							cct_showch(0, y, ' ', 0, 0, 100);
							cct_gotoxy(0, y);
							cct_setcolor(14, 0);
							cout << "�Ѿ��ϳɵ�" << goal - 1 << ",���س���/����������������Ŀ��" << endl;
							cct_setcolor(0, 7);

						}




						cct_setcolor(0, 7);


						break;

					}
					case MOUSE_LEFT_BUTTON_DOUBLE_CLICK:	//˫�����

						break;
					case MOUSE_RIGHT_BUTTON_CLICK:			//�����Ҽ�

						break;
					case MOUSE_RIGHT_BUTTON_DOUBLE_CLICK:	//˫���Ҽ�

						loop = 0;
						break;
					case MOUSE_LEFTRIGHT_BUTTON_CLICK:		//ͬʱ�������Ҽ�

						break;
					case MOUSE_WHEEL_CLICK:

						break;
					case MOUSE_WHEEL_MOVED_UP:

						break;
					case MOUSE_WHEEL_MOVED_DOWN:

						break;
					case MOUSE_NO_ACTION:
					default:

						break;
				} //end of switch(maction)
			} //end of if (CCT_MOUSE_EVENT)
			else
			;
		} //end of while(1)

		cct_disable_mouse();	//�������


	}
}
void baikuang(int a[][8], int i, int j)
{
	cct_showstr(4 + 8 * j, 3 + 4 * i, "������", a[i][j], 7, 1, -1);

	cct_showstr(4 + 8 * j, 3 + 4 * i + 1, "��", a[i][j], 7, 1, -1);
	cct_showint(4 + 8 * j + 2, 3 + 4 * i + 1, a[i][j], a[i][j], 7, 1);
	cct_showch(4 + 8 * j + 3, 3 + 4 * i + 1, ' ', a[i][j], 7, 1);
	cct_showstr(4 + 8 * j + 4, 3 + 4 * i + 1, "��", a[i][j], 7, 1, -1);

	cct_showstr(4 + 8 * j, 3 + 4 * i + 2, "������", a[i][j], 7, 1, -1);
}
void heikuang(int a[][8], int i, int j)
{
	cct_showstr(4 + 8 * j, 3 + 4 * i, "������", a[i][j], 0, 1, -1);

	cct_showstr(4 + 8 * j, 3 + 4 * i + 1, "��", a[i][j], 0, 1, -1);
	cct_showint(4 + 8 * j + 2, 3 + 4 * i + 1, a[i][j], a[i][j], 0, 1);
	cct_showch(4 + 8 * j + 3, 3 + 4 * i + 1, ' ', a[i][j], 0, 1);
	cct_showstr(4 + 8 * j + 4, 3 + 4 * i + 1, "��", a[i][j], 0, 1, -1);

	cct_showstr(4 + 8 * j, 3 + 4 * i + 2, "������", a[i][j], 0, 1, -1);
}
void quanbai(int a[][8], int i, int j)
{
	cct_showch(4 + 8 * j, 3 + 4 * i, ' ', 7, 7, 6);
	cct_showch(4 + 8 * j, 3 + 4 * i + 1, ' ', 7, 7, 6);
	cct_showch(4 + 8 * j, 3 + 4 * i + 2, ' ', 7, 7, 6);
}
void xialuo(int a[][8], int i, int j, int row, int line)
{
	cct_setcursor(3);
	

	xiayi(a, row, line);
	for (int g = 0; g < row; g++)
	{
		Sleep(100);
		for (int t = 0; t < line; t++)
		{


			if (a[g][t] == 0)
				quanbai(a, g, t);
			else
				heikuang(a, g, t);
		}
		cct_setcolor(0, 7);
	}
}

void chongman(int a[][8], int i, int j, int row, int line,int max)
{

	srand((unsigned)time(0));
	cct_setcursor(3);
	int q ;

	for (int i = 0; i < line; i++)
	{
		
		for (int j = 0; j < row; j++)
		{
			if (a[j][i] == 0)
			{
				if (max == 3)
				{
					a[j][i] = rand() % 3 + 1;
				}
				else if (max == 4)
				{
					q = rand() % 100;
					if (q >= 0 && q <= 89)
					{
						a[j][i] = rand() % 3 + 1;
					}
					else
						a[j][i] = 4;
				}
				else if (max == 5)
				{
					q = rand() % 100;
					if (q >= 0 && q <= 74)
					{
						a[j][i] = rand() % 3 + 1;
					}
					else if (q >= 75 && q <= 89)
					{
						a[j][i] = 4;
					}
					else
						a[j][i] = 5;
				}
				else if (max == 6)
				{
					q = rand() % 100;
					if (q >= 0 && q <= 79)
					{
						a[j][i] = rand() % 4 + 1;
					}
					else if (q >= 80 && q <= 94)
					{
						a[j][i] = 5;
					}
					else
						a[j][i] = 6;
				}
				else
				{
					q = rand() % 100;
					if (q >= 0 && q <= 79)
					{
						a[j][i] = rand() % (max - 3) + 1;
					}
					else if (q >= 80 && q <= 89)
					{
						a[j][i] = max - 2;
					}
					else if (q >= 90 && q <= 94)
						a[j][i] = max - 1;
					else
						a[j][i] = max;
				}
			}


		}	
		for (int g = 0; g < row; g++)
		{
			
			for (int t = 0; t < line; t++)
			{
				heikuang(a, g, t);
			}
		}
	}
}