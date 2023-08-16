#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <iomanip>
#include <conio.h>
#include <cstring>
#include "lib_mto10_net_tools.h"
extern void jifen2(int c[][8], char b[][8], int row, int line, char row_, int line_, int goal, int& allscore);
extern void cct_cls();
extern void xiayi1(int a[][8], int row, int line);
extern void cct_setconsoleborder(int set_cols, int set_lines, int set_buffer_cols, int set_buffer_lines);
extern void cct_setcolor(const int bg_color, const int fg_color);
using namespace std;
extern void dangqian(int a[][8], int row, int line);
extern int max_(int a[][8], int row, int line);
extern void kongbai2(int a[][8], int row, int line);
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
extern void tianchong(int a[][8], int row, int line);
extern void quanbai(int a[][8], int i, int j);
extern void xiayi1(int a[][8], int row, int line);
extern void guibing1(int a[][8], char b[][8], int c[][8], int row, int line, int row_, int line_);
extern void chongman(int a[][8], int i, int j, int row, int line, int max);
extern void xialuo(int a[][8], int i, int j, int row, int line);
extern int max_(int a[][8], int row, int line);
void yanse2(int a[][8], int row, int line);
void jifen1(int c[][8], char b[][8], int row, int line, char row_, int line_, int goal, int& allscore);

int chazhao1(int row_, int line_, int row, int line, int a[][8], char b[][8])
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
	int num = 0;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < line; j++)
		{
			if (b[i][j] == '*')
				num++;
		}
	}
	return num;
}

void fuzhi(const char* a, int* b_, mto10_net_tools& client)
{
	for (int i = 0; i < client.get_row()*client.get_col(); i++,a++,b_++)
	{
		if (*a >= 'A' && *a <= 'F')
		{
			*b_ = int(*a - 'A') + 10;
		
		}
		else if (*a >= 'a' && *a <= 'f')
		{
			*b_ = int(*a - 'a') + 10;
		}
		else
		{
			*b_ = int(*a - '0');
		}
	}
}
void zhuanhuan(int b[256], int c[][8], mto10_net_tools& client)
{
	int num = 0;
	for (int i = 0; i < client.get_row(); i++)
	{
		for (int j = 0; j < client.get_col(); j++)
		{
			c[i][j] = b[num];
			num++;
		}
		
	}
}
void zuiyou(char b[][8],int c[][8], mto10_net_tools& client,int &good_x,int &good_y)
{
	int y=0;
	int z=0;
	for (int i = 0; i < client.get_row(); i++)
	{
		for (int j = 0; j < client.get_col(); j++)
		{
			if (c[i][j]==max_(c, client.get_row(), client.get_col()))
			{
				y = i;
				z = j;
				break;
			}
		}

	}
	if (chazhao1(y, z, client.get_row(), client.get_col(), c, b) > 1)
	{
		good_x = y;
		good_y = z;
	}
	else
	{
		int t = chazhao1(0, 0, client.get_row(), client.get_col(), c, b);
		for (int i = 0; i < client.get_row(); i++)
		{
			for (int j = 0; j < client.get_col(); j++)
			{


				if (t < chazhao1(i, j, client.get_row(), client.get_col(), c, b))
				{

					t = chazhao1(i, j, client.get_row(), client.get_col(), c, b);
				}
			}

		}
		int min = client.get_row() + client.get_col();
		for (int i = 0; i < client.get_row(); i++)
		{
			for (int j = 0; j < client.get_col(); j++)
			{


				if (t == chazhao1(i, j, client.get_row(), client.get_col(), c, b))
				{
					if (fabs(i - y) + fabs(j - z) < min)
					{
						min = int(fabs(i - y)) + int(fabs(j - z));
						good_x = i;
						good_y = j;
					}

				}
			}

		}
	}
	

}
int game_progress(mto10_net_tools& client)
{
	
	char svrpack[RECVBUF_LEN];	//存放从Server端收到的数据
	char row;
	int col;
	int goal = 3;
	int allscore = 0;
	int houshuzu[8][8] = { 0 };
	while (1) {
		
		Sleep(200);
		/* -------------------
			Client=>Server
		   ------------------- */
		   /* 根据服务端发来的地图，返回一个解坐标（目前为手工输入形式，需要改为自动求最佳解坐标）
			  提示：可以将client.get_map()的返回值复制到字符数组中，再还原为你自己的二维数组后求解
		   */
		char b_[8][8] = { '0' };
		int b[256] = {};
		int c[8][8] = {};
		int good_x = 0, good_y = 0;

		 //本函数仅为示意，图形界面中不能调用，要自己写转换函数
		
		/* 游戏已结束则不再读键*/
		if (client.is_gameover())
			break;
		//将服务端生成的地图复制到一个字符数组中
		
		fuzhi(client.get_map(), b,client);
		zhuanhuan(b, c, client);
		zuiyou(b_,c, client, good_x, good_y);
		
		row = char(good_x+65);
		col = good_y;
		


		jifen1(houshuzu, b_, client.get_row(), client.get_col(), row, col, goal, allscore);
		if (goal == max_(c, client.get_row(), client.get_col()))
		{
			goal++;
		}
		cout<<endl;
		dangqian(c, client.get_row(), client.get_col());
		
		//cout << "请输入行(A-J)列(0-9)坐标 : ";
		//cin >> row >> col; //此处未判断正确性，需要自行处理
		
		/* 清空后续的缓冲区 */
		/*cin.clear();
		cin.ignore(INT_MAX, '\n');*/
		cout << "最优解坐标是：" << row << "行" << col << "列" << endl;
		if (row >= 'a' && row <= 'j')
			row -= 32; //如果是小写则转为大写

		client.send_coordinate(row, col);

		/* -------------------
			Server=>Client
		   ------------------- */
		   /* 等待Server端的gameprogress */
		if (client.get_gameprogress_string(svrpack) < 0) {
			return -1;
		}

		/* 打印出 svrpack 的内容，自行处理，并向Server端继续反馈
		   根据 Content 的内容，解释如下：
			"InvalidCoordinate" : 非法坐标
				GameID		：本次游戏ID
				Step		：目前步数
				Score		：目前分数
				MaxValue	：目前合成的最大值
			"MergeFailed" : 选择的坐标周围无可合成项
				GameID		：本次游戏ID
				Step		：目前步数
				Score		：目前分数
				MaxValue	：目前合成的最大值
			"MergeSucceeded" : 本次合成成功
				GameID		：本次游戏ID
				Step		：目前步数
				Score		：目前分数
				MaxValue	：目前合成的最大值
				OldMap		：消除选择坐标后的地图
				NewMap		：消除选择坐标后再次填充的地图
			"GameOver" : 地图上无消除项，游戏结束
				GameID			：本次游戏ID
				FinalStep		：最终步数
				FinalScore		：最终分数
				FinalMaxValue	：最终合成的最大值
			"GameFinished" : 已合成到设置上限（16），游戏完成
				GameID			：本次游戏ID
				FinalStep		：最终步数
				FinalScore		：最终分数
				FinalMaxValue	：最终合成的最大值 */

				/* 打印收到的原始字符串 */
		for (int i = 0; i < client.get_row(); i++)
		{
			for (int j = 0; j < client.get_col(); j++)
			{
				houshuzu[i][j] = c[i][j];
			}
		}

		cout << "Server应答 : " << endl << svrpack << endl;
	}//end of while(1)

	return 0;
}

int game_progress1(mto10_net_tools& client)
{

	char svrpack[RECVBUF_LEN];	//存放从Server端收到的数据
	char row;
	int col;
	int goal = 3;
	int allscore = 0;
	int houshuzu[8][8] = { 0 };
	char b_[8][8] = { '0' };
	int b[256] = {};
	int c[8][8] = {};
	int good_x = 0, good_y = 0;
	fuzhi(client.get_map(), b, client);
	zhuanhuan(b, c, client);
	
	while (1) {
		

		/* -------------------
			Client=>Server
		   ------------------- */
		   /* 根据服务端发来的地图，返回一个解坐标（目前为手工输入形式，需要改为自动求最佳解坐标）
			  提示：可以将client.get_map()的返回值复制到字符数组中，再还原为你自己的二维数组后求解
		   */
		

		//本函数仅为示意，图形界面中不能调用，要自己写转换函数

	   /* 游戏已结束则不再读键*/
		if (client.is_gameover())
			break;
		//将服务端生成的地图复制到一个字符数组中
		
		fuzhi(client.get_map(), b, client);
		zhuanhuan(b, c, client);
		zuiyou(b_, c, client, good_x, good_y);

		row = char(good_x + 65);
		col = good_y;
		
		if (goal == max_(c, client.get_row(), client.get_col()))
		{
			goal++;
		}
		int set_cols = client.get_row() * 12;
		int set_lines = client.get_col() * 10;
		cct_setconsoleborder(set_cols, set_lines, set_cols*10, set_lines);
		
		cct_setcolor(0, 7);
		jifen1(houshuzu, b_, client.get_row(), client.get_col(), row, col, goal, allscore);
		kongbai2(c, client.get_row(), client.get_col());
		yanse2(c, client.get_row(), client.get_col());
		
		
		cct_setcolor(0, 7);
	
	
		cout << endl;
		cout << endl;
		cout << "最优解坐标是：" << row << "行" << col << "列";
		//cout << "请输入行(A-J)列(0-9)坐标 : ";
		//cin >> row >> col; //此处未判断正确性，需要自行处理
		cct_setcolor(0, 7);
		chazhao1(good_x, good_y, client.get_row(), client.get_col(), c, b_);
		for (int i = 0; i < client.get_row(); i++)
		{
			for (int j = 0; j < client.get_col(); j++)
			{
				if (b_[i][j] == '*')
				{
					baikuang(c, i, j);
				}
			}
		}
		cct_setcolor(0, 7);
		cout << endl;


		guibing1(c, b_, houshuzu, client.get_row(), client.get_col(), good_x, good_y);

		for (int p = 0; p < client.get_row(); p++)
		{
			for (int t = 0; t < client.get_col(); t++)
			{
				if (p == good_x && t == good_y)
				{
					for (int i = 0; i < 10; i++)
					{
						baikuang(c, p, t);
						Sleep(50);
						heikuang(c, p, t);
						Sleep(50);

					}


				}

				else if (c[p][t] == 0)
				{
					quanbai(c, p, t);
				}
				else
					;
			}
		}


		

		xiayi1(c, client.get_row(), client.get_col());



		cct_setcolor(0, 7);



		chongman(c, good_x, good_y, client.get_row(), client.get_col(), max_(c, client.get_row(), client.get_col()));






		cct_setcolor(0, 6);
		cct_setcursor(3);

		/* 清空后续的缓冲区 */
		
		if (row >= 'a' && row <= 'j')
			row -= 32; //如果是小写则转为大写

		client.send_coordinate(row, col);

		/* -------------------
			Server=>Client
		   ------------------- */
		   /* 等待Server端的gameprogress */
		if (client.get_gameprogress_string(svrpack) < 0) {
			return -1;
		}

		/* 打印出 svrpack 的内容，自行处理，并向Server端继续反馈
		   根据 Content 的内容，解释如下：
			"InvalidCoordinate" : 非法坐标
				GameID		：本次游戏ID
				Step		：目前步数
				Score		：目前分数
				MaxValue	：目前合成的最大值
			"MergeFailed" : 选择的坐标周围无可合成项
				GameID		：本次游戏ID
				Step		：目前步数
				Score		：目前分数
				MaxValue	：目前合成的最大值
			"MergeSucceeded" : 本次合成成功
				GameID		：本次游戏ID
				Step		：目前步数
				Score		：目前分数
				MaxValue	：目前合成的最大值
				OldMap		：消除选择坐标后的地图
				NewMap		：消除选择坐标后再次填充的地图
			"GameOver" : 地图上无消除项，游戏结束
				GameID			：本次游戏ID
				FinalStep		：最终步数
				FinalScore		：最终分数
				FinalMaxValue	：最终合成的最大值
			"GameFinished" : 已合成到设置上限（16），游戏完成
				GameID			：本次游戏ID
				FinalStep		：最终步数
				FinalScore		：最终分数
				FinalMaxValue	：最终合成的最大值 */

				/* 打印收到的原始字符串 */
		for (int i = 0; i < client.get_row(); i++)
		{
			for (int j = 0; j < client.get_col(); j++)
			{
				houshuzu[i][j] = c[i][j];
			}
		}
		cout << "Server应答 : " << endl << svrpack << endl;
	}//end of while(1)

	return 0;
}
int game_progress2(mto10_net_tools& client,int i)
{
	char svrpack[RECVBUF_LEN];	//存放从Server端收到的数据
	char row;
	int col;
	int goal = 3;
	int allscore = 0;
	int houshuzu[8][8] = { 0 };
	
	while (1) {

		
		/* -------------------
			Client=>Server
		   ------------------- */
		   /* 根据服务端发来的地图，返回一个解坐标（目前为手工输入形式，需要改为自动求最佳解坐标）
			  提示：可以将client.get_map()的返回值复制到字符数组中，再还原为你自己的二维数组后求解
		   */
		char b_[8][8] = { '0' };
		int b[256] = {};
		int c[8][8] = {};
		int good_x = 0, good_y = 0;

		//本函数仅为示意，图形界面中不能调用，要自己写转换函数

	   /* 游戏已结束则不再读键*/
		if (client.is_gameover())
		{
			
			cout << "序号=" << setw(3) << setiosflags(ios::left) << i<< "MAPID=" << setw(11) << setiosflags(ios::left) << client.get_gameid() << "，游戏结束，最终得分：" << allscore << endl;
			Sleep(500);
			break;
		}
			
		//将服务端生成的地图复制到一个字符数组中

		fuzhi(client.get_map(), b, client);
		zhuanhuan(b, c, client);
		zuiyou(b_, c, client, good_x, good_y);

		row = char(good_x + 65);
		col = good_y;



		jifen2(houshuzu, b_, client.get_row(), client.get_col(), row, col, goal, allscore);
		if (goal == max_(c, client.get_row(), client.get_col()))
		{
			goal++;
		}
		
		

		//cout << "请输入行(A-J)列(0-9)坐标 : ";
		//cin >> row >> col; //此处未判断正确性，需要自行处理

		/* 清空后续的缓冲区 */
		/*cin.clear();
		cin.ignore(INT_MAX, '\n');*/
	
		if (row >= 'a' && row <= 'j')
			row -= 32; //如果是小写则转为大写

		client.send_coordinate(row, col);

		/* -------------------
			Server=>Client
		   ------------------- */
		   /* 等待Server端的gameprogress */
		if (client.get_gameprogress_string(svrpack) < 0) {
			return -1;
		}

		/* 打印出 svrpack 的内容，自行处理，并向Server端继续反馈
		   根据 Content 的内容，解释如下：
			"InvalidCoordinate" : 非法坐标
				GameID		：本次游戏ID
				Step		：目前步数
				Score		：目前分数
				MaxValue	：目前合成的最大值
			"MergeFailed" : 选择的坐标周围无可合成项
				GameID		：本次游戏ID
				Step		：目前步数
				Score		：目前分数
				MaxValue	：目前合成的最大值
			"MergeSucceeded" : 本次合成成功
				GameID		：本次游戏ID
				Step		：目前步数
				Score		：目前分数
				MaxValue	：目前合成的最大值
				OldMap		：消除选择坐标后的地图
				NewMap		：消除选择坐标后再次填充的地图
			"GameOver" : 地图上无消除项，游戏结束
				GameID			：本次游戏ID
				FinalStep		：最终步数
				FinalScore		：最终分数
				FinalMaxValue	：最终合成的最大值
			"GameFinished" : 已合成到设置上限（16），游戏完成
				GameID			：本次游戏ID
				FinalStep		：最终步数
				FinalScore		：最终分数
				FinalMaxValue	：最终合成的最大值 */

				/* 打印收到的原始字符串 */
		for (int i = 0; i < client.get_row(); i++)
		{
			for (int j = 0; j < client.get_col(); j++)
			{
				houshuzu[i][j] = c[i][j];
			}
		}

		
	}//end of while(1)

	return 0;
}

