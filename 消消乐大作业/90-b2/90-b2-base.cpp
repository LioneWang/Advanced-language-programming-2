#define _CRT_SECURE_NO_WARNINGS
#include<conio.h>
#include <iostream>
#include <iomanip>
#include <tchar.h>
#include <string.h>
#include <Windows.h>
#include <cstdio>
using namespace std;

extern void cct_cls();
extern void cct_setcolor(const int bg_color, const int fg_color);


void xinshuzu(int row,int line,int a[][8])
{
	
	srand((unsigned) time(0));
	cout << "当前数组" << endl;
	cout << "  |";
	for (int i = 0; i < line; i++)
	{
		cout << "  "<<i;
	}
	cout << endl;
	cout << "--+-";
	for (int i = 0; i < line; i++)
	{
		cout << "---";
	}
	cout << endl;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < line; j++)
		{
			a[i][j] = rand() % 3 + 1;
			
		}
		
	}
	for (int i = 0; i < row; i++)
	{
		cout << char('A' + i) << " |" ;
		for (int j = 0; j < line; j++)
		{
			cout <<"  "<<a[i][j];

		}
		cout << endl;
	}
	cout << endl;
}
void chalei(int (*c)[8],int (*a)[8],char (*b)[8],int row,int line,const int crow,const int cline,const int row_,const int line_, char row__, int line__)
{
	
	if (a[row][line] != a[int(row__) - 65][line__])
		;
	else if (row == int(row__) - 65 && line == line__)
		b[crow][cline] = '*';
	
	
	else
	{
		c[row][line] = 1;
		if (row < row_ - 1)
		{
			if (a[row + 1][line] == a[int(row__) - 65][line__]&& c[row+1][line]!=1)
			{
				chalei(c,a, b, row + 1, line, crow, cline, row_, line_, row__, line__);
			}
		}
			
		if (row > 0 )
		{
			if (a[row - 1][line] == a[int(row__) - 65][line__]&&c[row-1][line]!=1)
			{
				chalei(c,a, b, row - 1, line, crow, cline, row_, line_, row__, line__);
			}
		}
			
		if (line > 0)
		{
			if (a[row ][line-1] == a[int(row__) - 65][line__]&&c[row][line-1]!=1)
			{
				chalei(c,a, b, row , line-1, crow, cline, row_, line_, row__, line__);
			}
		}
			
		if (line < line_ - 1 )
		{
			if (a[row ][line+1] == a[int(row__) - 65][line__]&&c[row][line+1]!=1)
			{
				chalei(c,a, b, row , line+1, crow, cline, row_, line_, row__, line__);
			}
		}
			
	}
	
	
	

}
void chazhao_digui(char row_, int line_, int row, int line, int (*a)[8], char (*b)[8])
{
	int c[8][8];
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < line; j++)
		{
			b[i][j] = '0';

		}

	}
	b[int(row_) - 65][line_] = '*';

	
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < line; j++)
		{
			for (int p = 0; p < row; p++)
			{
				for (int t = 0; t < line; t++)
					c[p][t] = 0;
			}
			chalei(c,a, b, i, j,  i, j,row,line, row_, line_);
				
			
		}
	}
	cout << "查找结果数组：" << endl;
	cout << "  |";
	for (int i = 0; i < line; i++)
	{
		cout << "  " << i;
	}
	cout << endl;
	cout << "--+-";
	for (int i = 0; i < line; i++)
	{
		cout << "---";
	}
	cout << endl;

	for (int i = 0; i < row; i++)
	{
		cout << char('A' + i) << " |";
		for (int j = 0; j < line; j++)
		{

			cout << "  " << b[i][j];

		}
		cout << endl;
	}
	cout << endl;
}
void chazhao1(int row_, int line_, int row, int line, int a[][8], char b[][8])
{
	int i, j;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < line; j++)
		{
			b[i][j] = '0';

		}

	}
	b[row_][line_] = '*';
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < line; j++)
		{

			if (i < row - 1 && b[i + 1][j] == '*' && a[i + 1][j] == a[i][j] || i>0 && b[i - 1][j] == '*' && a[i - 1][j] == a[i][j] || j > 0 && b[i][j - 1] == '*' && a[i][j - 1] == a[i][j] || j < line - 1 && b[i][j + 1] == '*' && a[i][j + 1] == a[i][j])
			{
				b[i][j] = '*';
				if (a[i + 1][j] == a[i][j] && i < row - 1)
				{
					b[i + 1][j] = '*';
				}
				if (a[i - 1][j] == a[i][j] && i > 0)
				{
					b[i - 1][j] = '*';
				}
				if (j > 0 && a[i][j - 1] == a[i][j])
				{
					b[i][j - 1] = '*';
				}
				if (a[i][j + 1] == a[i][j] && j < line - 1)
				{
					b[i][j + 1] = '*';
				}
			}
		}
	}
	for (i = row_; i >= 0; i--)
	{
		for (j = line_; j >= 0; j--)
		{

			if (i < row - 1 && b[i + 1][j] == '*' && a[i + 1][j] == a[i][j] || i>0 && b[i - 1][j] == '*' && a[i - 1][j] == a[i][j] || j > 0 && b[i][j - 1] == '*' && a[i][j - 1] == a[i][j] || j < line - 1 && b[i][j + 1] == '*' && a[i][j + 1] == a[i][j])
			{
				b[i][j] = '*';
				if (a[i + 1][j] == a[i][j] && i < row - 1)
				{
					b[i + 1][j] = '*';
				}
				if (a[i - 1][j] == a[i][j] && i > 0)
				{
					b[i - 1][j] = '*';
				}
				if (j > 0 && a[i][j - 1] == a[i][j])
				{
					b[i][j - 1] = '*';
				}
				if (a[i][j + 1] == a[i][j] && j < line - 1)
				{
					b[i][j + 1] = '*';
				}
			}
		}
		for (j = line_; j < line; j++)
		{

			if (i < row - 1 && b[i + 1][j] == '*' && a[i + 1][j] == a[i][j] || i>0 && b[i - 1][j] == '*' && a[i - 1][j] == a[i][j] || j > 0 && b[i][j - 1] == '*' && a[i][j - 1] == a[i][j] || j < line - 1 && b[i][j + 1] == '*' && a[i][j + 1] == a[i][j])
			{
				b[i][j] = '*';
				if (a[i + 1][j] == a[i][j] && i < row - 1)
				{
					b[i + 1][j] = '*';
				}
				if (a[i - 1][j] == a[i][j] && i > 0)
				{
					b[i - 1][j] = '*';
				}
				if (j > 0 && a[i][j - 1] == a[i][j])
				{
					b[i][j - 1] = '*';
				}
				if (a[i][j + 1] == a[i][j] && j < line - 1)
				{
					b[i][j + 1] = '*';
				}
			}
		}
	}
	for (i = row_; i < row; i++)
	{
		for (j = line_; j < line; j++)
		{

			if (i < row - 1 && b[i + 1][j] == '*' && a[i + 1][j] == a[i][j] || i>0 && b[i - 1][j] == '*' && a[i - 1][j] == a[i][j] || j > 0 && b[i][j - 1] == '*' && a[i][j - 1] == a[i][j] || j < line - 1 && b[i][j + 1] == '*' && a[i][j + 1] == a[i][j])
			{
				b[i][j] = '*';
				if (a[i + 1][j] == a[i][j] && i < row - 1)
				{
					b[i + 1][j] = '*';
				}
				if (a[i - 1][j] == a[i][j] && i > 0)
				{
					b[i - 1][j] = '*';
				}
				if (j > 0 && a[i][j - 1] == a[i][j])
				{
					b[i][j - 1] = '*';
				}
				if (a[i][j + 1] == a[i][j] && j < line - 1)
				{
					b[i][j + 1] = '*';
				}
			}
		}
		for (j = line_; j >= 0; j--)
		{

			if (i < row - 1 && b[i + 1][j] == '*' && a[i + 1][j] == a[i][j] || i>0 && b[i - 1][j] == '*' && a[i - 1][j] == a[i][j] || j > 0 && b[i][j - 1] == '*' && a[i][j - 1] == a[i][j] || j < line - 1 && b[i][j + 1] == '*' && a[i][j + 1] == a[i][j])
			{
				b[i][j] = '*';
				if (a[i + 1][j] == a[i][j] && i < row - 1)
				{
					b[i + 1][j] = '*';
				}
				if (a[i - 1][j] == a[i][j] && i > 0)
				{
					b[i - 1][j] = '*';
				}
				if (j > 0 && a[i][j - 1] == a[i][j])
				{
					b[i][j - 1] = '*';
				}
				if (a[i][j + 1] == a[i][j] && j < line - 1)
				{
					b[i][j + 1] = '*';
				}
			}
		}
	}

}
void guibing1(int a[][8], char b[][8], int c[][8], int row, int line, int row_, int line_)
{
	a[row_][line_] += 1;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < line; j++)
		{
			c[i][j] = a[i][j];
			if (b[i][j] == '*' && (i != row_|| j != line_))
			{

				a[i][j] = 0;
			}


		}
	}
}
void chazhao(char row_,int line_,int row,int line, int a[][8],char b[][8])
{
	int i, j;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < line; j++)
		{
			b[i][j] = '0';

		}
		
	}
	b[int(row_)-65][line_] = '*';
	for (i = 0; i < row; i++)
	{
		for ( j = 0; j < line; j++)
		{
			
			if ( i < row - 1 && b[i + 1][j] == '*'&& a[i + 1][j] ==a[i][j] ||  i>0 && b[i-1][j]=='*' && a[i - 1][j] == a[i][j] ||j>0 && b[i][j - 1] == '*' && a[i ][j-1] == a[i][j] || j < line - 1 && b[i][j+1]=='*' && a[i ][j+1] == a[i][j])
			{
				b[i][j] = '*';
				if (a[i + 1][j] == a[i][j] && i < row - 1)
				{
					b[i+1][j] = '*';
				}
				if(a[i - 1][j] == a[i][j] && i > 0)
				{
					b[i - 1][j] = '*';
				}
				if ( j > 0 && a[i][j-1] == a[i][j] )
				{
					b[i][j-1] = '*';
				}
				if (a[i][j + 1] == a[i][j] && j < line - 1)
				{
					b[i][j + 1] = '*';
				}
			}
		}
	}
	for (i = int(row)-65; i >=0; i--)
	{
		for (j = line_; j >=0; j--)
		{

			if (i < row - 1 && b[i + 1][j] == '*' && a[i + 1][j] == a[i][j] || i>0 && b[i - 1][j] == '*' && a[i - 1][j] == a[i][j] || j > 0 && b[i][j - 1] == '*' && a[i][j - 1] == a[i][j] || j < line - 1 && b[i][j + 1] == '*' && a[i][j + 1] == a[i][j])
			{
				b[i][j] = '*';
				if (a[i + 1][j] == a[i][j] && i < row - 1)
				{
					b[i + 1][j] = '*';
				}
				if (a[i - 1][j] == a[i][j] && i > 0)
				{
					b[i - 1][j] = '*';
				}
				if (j > 0 && a[i][j - 1] == a[i][j])
				{
					b[i][j - 1] = '*';
				}
				if (a[i][j + 1] == a[i][j] && j < line - 1)
				{
					b[i][j + 1] = '*';
				}
			}
		}
		for (j = line_; j < line; j++)
		{

			if (i < row - 1 && b[i + 1][j] == '*' && a[i + 1][j] == a[i][j] || i>0 && b[i - 1][j] == '*' && a[i - 1][j] == a[i][j] || j > 0 && b[i][j - 1] == '*' && a[i][j - 1] == a[i][j] || j < line - 1 && b[i][j + 1] == '*' && a[i][j + 1] == a[i][j])
			{
				b[i][j] = '*';
				if (a[i + 1][j] == a[i][j] && i < row - 1)
				{
					b[i + 1][j] = '*';
				}
				if (a[i - 1][j] == a[i][j] && i > 0)
				{
					b[i - 1][j] = '*';
				}
				if (j > 0 && a[i][j - 1] == a[i][j])
				{
					b[i][j - 1] = '*';
				}
				if (a[i][j + 1] == a[i][j] && j < line - 1)
				{
					b[i][j + 1] = '*';
				}
			}
		}
	}
	for (i = int(row) - 65; i <row; i++)
	{
		for (j = line_; j < line; j++)
		{

			if (i < row - 1 && b[i + 1][j] == '*' && a[i + 1][j] == a[i][j] || i>0 && b[i - 1][j] == '*' && a[i - 1][j] == a[i][j] || j > 0 && b[i][j - 1] == '*' && a[i][j - 1] == a[i][j] || j < line - 1 && b[i][j + 1] == '*' && a[i][j + 1] == a[i][j])
			{
				b[i][j] = '*';
				if (a[i + 1][j] == a[i][j] && i < row - 1)
				{
					b[i + 1][j] = '*';
				}
				if (a[i - 1][j] == a[i][j] && i > 0)
				{
					b[i - 1][j] = '*';
				}
				if (j > 0 && a[i][j - 1] == a[i][j])
				{
					b[i][j - 1] = '*';
				}
				if (a[i][j + 1] == a[i][j] && j < line - 1)
				{
					b[i][j + 1] = '*';
				}
			}
		}
		for (j = line_; j >=0; j--)
		{

			if (i < row - 1 && b[i + 1][j] == '*' && a[i + 1][j] == a[i][j] || i>0 && b[i - 1][j] == '*' && a[i - 1][j] == a[i][j] || j > 0 && b[i][j - 1] == '*' && a[i][j - 1] == a[i][j] || j < line - 1 && b[i][j + 1] == '*' && a[i][j + 1] == a[i][j])
			{
				b[i][j] = '*';
				if (a[i + 1][j] == a[i][j] && i < row - 1)
				{
					b[i + 1][j] = '*';
				}
				if (a[i - 1][j] == a[i][j] && i > 0)
				{
					b[i - 1][j] = '*';
				}
				if (j > 0 && a[i][j - 1] == a[i][j])
				{
					b[i][j - 1] = '*';
				}
				if (a[i][j + 1] == a[i][j] && j < line - 1)
				{
					b[i][j + 1] = '*';
				}
			}
		}
	}
	cout << "查找结果数组：" << endl;
	cout << "  |";
	for (int i = 0; i < line; i++)
	{
		cout << "  " << i;
	}
	cout << endl;
	cout << "--+-";
	for (int i = 0; i < line; i++)
	{
		cout << "---";
	}
	cout << endl;

	for (int i = 0; i < row; i++)
	{
		cout << char('A' + i) << " |";
		for (int j = 0; j < line; j++)
		{
		
			cout << "  " << b[i][j];

		}
		cout << endl;
	}
	cout << endl;
}
void yansebiaoshi(int a[][8], char b[][8],int row,int line)
{
	cout << "当前数组(不同色标识)：" << endl;
	cout << "  |";
	for (int i = 0; i < line; i++)
	{
		cout << "  " << i;
	}
	cout << endl;
	cout << "--+-";
	for (int i = 0; i < line; i++)
	{
		cout << "---";
	}
	cout << endl;
	for (int i = 0; i < row; i++)
	{
		cout << char('A' + i) << " |";
		for (int j = 0; j < line; j++)
		{
			if (b[i][j] == '*')
			{
				
				cout << "  ";
				cct_setcolor(14, 0);
				cout <<a[i][j];
			}
			else
			{
				cct_setcolor(0, 7);
				cout << "  " << a[i][j];
			}
			
			

		}
		cct_setcolor(0, 7);
		cout << endl;
	}
}
void guibing(int a[][8],char b[][8],int c[][8], int row, int line,char row_,int line_)
{
	
	a[int(row_) - 65][line_] +=1 ;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < line; j++)
		{
			c[i][j] = a[i][j];
			if (b[i][j] == '*'&&(i!=int(row_)-65||j!=line_))
			{
				
				a[i][j] = 0;
			}
				
			
		}
	}
	
}
void yansebiaoshi1(int a[][8], char b[][8], int row, int line)
{
	cout << "相同值归并后的数组(不同色标识)：" << endl;
	cout << "  |";
	for (int i = 0; i < line; i++)
	{
		cout << "  " << i;
	}
	cout << endl;
	cout << "--+-";
	for (int i = 0; i < line; i++)
	{
		cout << "---";
	}
	cout << endl;
	for (int i = 0; i < row; i++)
	{
		cout << char('A' + i) << " |";
		for (int j = 0; j < line; j++)
		{

			if (b[i][j]=='*')
			{

				cout << "  ";
				cct_setcolor(14, 0);
				cout << a[i][j];
			}
			else
			{
				cct_setcolor(0, 7);
				cout << "  " << a[i][j];
			}



		}
		cct_setcolor(0, 7);
		cout << endl;
	}
}
void xiayi(int a[][8], int row, int line)
{
	for (int j = 0; j < line; j++)
	{
		
		
		int t = 0;
		for (int p=row; p >0; p--)
		{
			for (int i = row - 1; i > 0; i--)
			{
				if (a[i][j] == 0)
				{
					t = a[i - 1][j];
					a[i - 1][j] = a[i][j];
					a[i][j] = t;
				}
			}
		}
		
	}
}
void yansebiaoshi2(int a[][8], char b[][8], int row, int line)
{
	cout << "除0后的数组(不同色标识)：" << endl;
	cout << "  |";
	for (int i = 0; i < line; i++)
	{
		cout << "  " << i;
	}
	cout << endl;
	cout << "--+-";
	for (int i = 0; i < line; i++)
	{
		cout << "---";
	}
	cout << endl;
	for (int i = 0; i < row; i++)
	{
		cout << char('A' + i) << " |";
		for (int j = 0; j < line; j++)
		{
			
			if (a[i][j] == 0)
			{

				cout << "  ";
				cct_setcolor(14, 0);
				cout << a[i][j];
			}
			else
			{
				cct_setcolor(0, 7);
				cout << "  " << a[i][j];
			}



		}
		cct_setcolor(0, 7);
		cout << endl;
	}
}
void tianchong(int a[][8], int row, int line)
{
	srand((unsigned)time(0));
	cout << "  |";
	for (int i = 0; i < line; i++)
	{
		cout << "  " << i;
	}
	cout << endl;
	cout << "--+-";
	for (int i = 0; i < line; i++)
	{
		cout << "---";
	}
	cout << endl;
	for (int i = 0; i < row; i++)
	{
		cout << char('A' + i) << " |";
		for (int j = 0; j < line; j++)
		{
			if (a[i][j] == 0)
			{

				cout << "  ";
				cct_setcolor(14, 0);
				a[i][j] = rand() % 3 + 1;
				cout << a[i][j];
			}
			else
			{
				cct_setcolor(0, 7);
				cout << "  " << a[i][j];
			}



		}
		cct_setcolor(0, 7);
		cout << endl;
	}
}
void dangqian(int a[][8], int row, int line)
{
	cout << "当前数组：" << endl;
	cout << "  |";
	for (int i = 0; i < line; i++)
	{
		cout << "  " << i;
	}
	cout << endl;
	cout << "--+-";
	for (int i = 0; i < line; i++)
	{
		cout << "---";
	}
	cout << endl;
	for (int i = 0; i < row; i++)
	{
		cout << char('A' + i) << " |";
		for (int j = 0; j < line; j++)
		{
			
			cout << "  " << a[i][j];
			



		}
		
		cout << endl;
	}
}
void dangqian_(int a[][8], int row, int line)
{
	cout << "当前数组：" << endl;
	cout << "   ";
	for (int i = 0; i < line; i++)
	{
		cout << "  " << i;
	}

	cout << endl;
	
	cout << "--+-";
	for (int i = 0; i < line; i++)
	{
		cout << "---";
	}
	cout << endl;
	for (int i = 0; i < row; i++)
	{
		cout << char('A' + i) << " |";
		for (int j = 0; j < line; j++)
		{

			cout << "  " << a[i][j];




		}

		cout << endl;
		cout<< endl;
		cout << endl;
		cout << endl;

	}
}