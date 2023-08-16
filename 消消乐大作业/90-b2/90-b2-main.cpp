#define _CRT_SECURE_NO_WARNINGS
#include<conio.h>
#include <iostream>
#include <iomanip>

#include <tchar.h>
#include "90-b2.h"
#include "lib_mto10_net_tools.h"
#include<cstdio>
extern int game_progress(mto10_net_tools& client);
extern int game_progress1(mto10_net_tools& client);
extern int game_progress2(mto10_net_tools& client, int i);
using namespace std;
void menu()
{
	cout << "---------------------------------------" << endl;
	cout << "1.命令行找出可合成项并标识（非递归）" << endl;
	cout << "2.命令行找出可合成项并标识（递归）" << endl;
	cout << "3.命令行完成一次合成（分步骤显示）" << endl;
	cout << "4.命令行完整版（分步骤显示）" << endl;
	cout << "5.伪图形界面显示初始数组（无分隔线）" << endl;
	cout << "6.伪图形界面显示初始数组（有分隔线）" << endl;
	cout << "7.伪图形界面下用箭头键/鼠标选择当前色块" << endl;
	cout << "8.伪图形界面完成一次合成（分步骤）" << endl;
	cout << "9.伪图形界面完整版(支持鼠标)" << endl;
	cout << "---------------------------------------" << endl;
	cout << "A.命令行界面(网络自动解-基本版)" << endl;
	cout << "B.伪图形界面(网络自动解-基本版)" << endl;
	/*cout << "C.命令行界面(网络自动解-竞赛版)" << endl;*/
	cout << "---------------------------------------" << endl;
	cout << "0.退出" << endl;
	cout << "---------------------------------------" << endl;
}

void menu1()
{
	int shuzu[8][8];
	char jieguoshuzu[8][8];
	int row;
	int line;
	char row_;
	int line_;
	cct_cls();
	input(row, line);
	xinshuzu(row,line,shuzu);
	input2(row_, line_,shuzu);
	chazhao(row_, line_, row, line, shuzu, jieguoshuzu);
	yansebiaoshi(shuzu, jieguoshuzu, row, line);
	jieshu();
}
void menu2()
{
	int shuzu[8][8];
	char jieguoshuzu[8][8];
	int row;
	int line;
	char row_;
	int line_;
	cct_cls();
	input(row, line);
	xinshuzu(row, line, shuzu);
	input2(row_, line_,shuzu);
	chazhao_digui(row_, line_, row, line, shuzu, jieguoshuzu);
	yansebiaoshi(shuzu, jieguoshuzu, row, line);
	jieshu();
}
void menu3()
{
	int shuzu[8][8];
	int houshuzu[8][8];
	char jieguoshuzu[8][8];
	int row;
	int line;
	char row_;
	int line_;
	char sign;
	int goal;
	int allscore=0;
	cct_cls();
	input(row, line);
	while (1)
	{
		cout << "请输入合成目标(5-20):" << endl;
		cin >> goal;
		if (goal <= 20 && goal >= 5)
			break;
	}
	xinshuzu(row, line, shuzu);
	input2(row_, line_,shuzu);
	chazhao(row_, line_, row, line, shuzu, jieguoshuzu);
	yansebiaoshi(shuzu, jieguoshuzu, row, line);
	input3(sign,row_,line_);
	char sign1;
	char sign2;
	if (sign == 'Y')
	{
		guibing(shuzu, jieguoshuzu,houshuzu, row, line, row_, line_);
		yansebiaoshi1(shuzu, jieguoshuzu, row, line);
		jifen(houshuzu, jieguoshuzu, row, line, row_, line_, goal,allscore);
		input4(sign1);
		
		if (sign1 == '\n')
		{
			xiayi(shuzu, row, line);
			yansebiaoshi2(shuzu, jieguoshuzu, row, line);
			input5(sign2);
			if (sign2 == '\n')
			{
				tianchong(shuzu, row, line);
				
				jieshu();
			}
		}
	}
	else if (sign == 'N' || sign == 'Q')
	{
		jieshu();
	}
	else
		;
	
	
}
void menu4()
{
	int shuzu[8][8];
	int houshuzu[8][8];
	char jieguoshuzu[8][8];
	int row;
	int line;
	char row_;
	int line_;
	char sign;
	int goal;
	int allscore = 0;
	cct_cls();
	input(row, line);
	while (1)
	{
		cout << "请输入合成目标(5-20):" << endl;
		cin >> goal;
		if (goal <= 20 && goal >= 5)
			break;
	}
	xinshuzu(row, line, shuzu);
	while (goal<=10)
	{
		
		input2(row_, line_, shuzu);
		chazhao(row_, line_, row, line, shuzu, jieguoshuzu);
		yansebiaoshi(shuzu, jieguoshuzu, row, line);
		input3(sign,row_,line_);
		char sign1;
		char sign2;
		if (sign == 'Y')
		{
			guibing(shuzu, jieguoshuzu, houshuzu, row, line, row_, line_);
			yansebiaoshi1(shuzu, jieguoshuzu, row, line);
			jifen(houshuzu, jieguoshuzu, row, line, row_, line_, goal,allscore);
			input4(sign1);

			if (sign1 == '\n')
			{
				xiayi(shuzu, row, line);
				yansebiaoshi2(shuzu, jieguoshuzu, row, line);
				input5(sign2);
				if (sign2 == '\n')
				{
					tianchong(shuzu, row, line);
					jieshu();
				}
			}
			if (goal == max_(shuzu, row, line))
			{
				goal++;
				cct_setcolor(14, 0);
				cout << "目标已达成！！！" << endl;
				cct_setcolor(0, 7);
				cout << "向更高的目标迈进！" << endl;
			}
			else
			{
				cout << "本次合成结束，按回车键继续新一次的合成..." << endl;
			}
			dangqian(shuzu, row, line);
			Sleep(500);
		}
		else if (sign == 'N' || sign == 'Q')
		{
			jieshu();
		}
		else
			;
	}
}
void menu5()
{
	
	int shuzu[8][8];
	int row;
	int line;
	cct_cls();
	input(row, line);
	
	xinshuzu(row, line, shuzu);
	int set_cols = 8 * row ;
	int set_lines = 7 * line ;
	cct_setconsoleborder(set_cols, set_lines, set_cols, set_lines);
	cct_cls();	
	cout << "屏幕当前设置为：" << set_cols << "行" << set_lines << "列";
	
	kongbai(shuzu, row, line);
	yanse1(shuzu,row,line);
	cct_setcolor(0, 7);
	jieshu();
}
void menu6()
{
	int shuzu[8][8];
	int row;
	int line;
	cct_cls();
	input(row, line);

	xinshuzu(row, line, shuzu);
	int set_cols = row * 11;
	int set_lines = line * 8;
	cct_setconsoleborder(set_cols, set_lines, set_cols, set_lines);
	cct_getconsoleborder(set_cols, set_lines, set_cols, set_lines);
	cct_cls();
	cout << "屏幕当前设置为：" << set_cols << "行" << set_lines << "列";

	kongbai2(shuzu, row, line);
	yanse2(shuzu, row, line);
	cct_setcolor(0, 7);
	jieshu();
}
void menu7()
{
	int x, y;
	int shuzu[8][8];
	int row;
	int line;
	int houshuzu[8][8];
	char jieguoshuzu[8][8];
	cct_cls();
	input(row, line);
	
	xinshuzu(row, line, shuzu);
	int set_cols = row * 11;
	int set_lines = line * 8;
	cct_setconsoleborder(set_cols, set_lines, set_cols, set_lines);
	cct_getconsoleborder(set_cols, set_lines, set_cols, set_lines);
	cct_cls();
	cct_getxy(x, y);
	cout << "屏幕当前设置为：" << set_cols << "行" << set_lines << "列";

	kongbai2(shuzu, row, line);
	yanse2(shuzu, row, line);
	jianpan(shuzu, jieguoshuzu, houshuzu, row, line, 7);
	
	

}
void menu8()
{
	int shuzu[8][8];
	int houshuzu[8][8];
	char jieguoshuzu[8][8];
	int row;
	int line;
	cct_cls();
	input(row, line);

	xinshuzu(row, line, shuzu);
	int set_cols = row * 11;
	int set_lines = line * 8;
	cct_setconsoleborder(set_cols, set_lines, set_cols, set_lines);
	cct_getconsoleborder(set_cols, set_lines, set_cols, set_lines);
	cct_cls();
	cout << "屏幕当前设置为：" << set_cols << "行" << set_lines << "列";

	kongbai2(shuzu, row, line);
	yanse2(shuzu, row, line);
	jianpan(shuzu,jieguoshuzu,houshuzu, row, line,8);
}
void menu9()
{
	int shuzu[8][8];
	int houshuzu[8][8];
	char jieguoshuzu[8][8];
	int row;
	int goal;
	int line;
	int allscore = 0;
	cct_setcursor(2);
	cct_cls();
	input(row, line);
	while (1)
	{
		cout << "请输入合成目标(5-20):" << endl;
		cin >> goal;
		if (goal <= 20 && goal >= 5)
			break;
	}
	
	xinshuzu(row, line, shuzu);
	int set_cols = row * 11;
	int set_lines = line * 10;
	cct_setconsoleborder(set_cols, set_lines, set_cols, set_lines);
	cct_getconsoleborder(set_cols, set_lines, set_cols, set_lines);
	
	cct_cls();


	kongbai2(shuzu, row, line);
	yanse2(shuzu, row, line);
	jianpan2(shuzu, jieguoshuzu, houshuzu, row, line, 9, goal, allscore);
		
	
	
}
int menu10()
{
	const char* my_no = "2150265";		//本人学号
	const char* my_pwd = "Wang20030812~";	//本人密码

	int wanted_row, wanted_col, wanted_id, wanted_delay;

#if 1 //条件编译，此处改为 #if 0 则表示启用下面 #else 中的语句
	cct_cls();
	input(wanted_row, wanted_col);
				//此处按需修改为键盘输入等形式
				//此处按需修改为键盘输入等形式
	wanted_id = -1;		//id为本次请求的游戏序号，如果置-1，表示服务器随机产生，[0..2^31-1]则表示想固定序号（序号固定，则每次给出的初始矩阵及后续填充均相同，方便调试）
	wanted_delay = 60 * 1000;	//delay为请求的每步应答的最长时延，单位ms
#else
	wanted_row = -1;
	wanted_col = -1;
	wanted_id = -1;
	wanted_delay = -1;
#endif
	mto10_net_tools client;

	/* 打开client类对象中的debug开关（调试时可打开，到图形界面时需关闭） */
	client.set_debug_switch(false);

	/* 连接服务器 */
	if (client.connect() < 0) {
		/* 连接失败信息，有没有debug_switch都打印 */
		cout << "连接服务器失败!" << endl;
		return -1;
	}

	/* 向Server端发送认证信息及参数 */
	if (client.send_parameter(my_no, '*', my_pwd, wanted_row, wanted_col, wanted_id, wanted_delay) < 0) {
		cout << "发送认证及参数信息失败!" << endl;
		return -1;
	}

	/* 等待Server端下发参数（游戏开始）*/
	if (client.wait_for_game_start() < 0) {
		cout << "等待GameStart失败!" << endl;
		return -1;
	}

	/* 打印从服务器收到的参数，本次游戏以此参数为准（例：发送6行6列，返回8行10列，则本次游戏以8行10列为准）
	   下面打印的信息，图形化界面可以自行去除 */
	cout << "服务器返回信息 : " << endl;
	cout << "  行数 : " << client.get_row() << endl;
	cout << "  列数 : " << client.get_col() << endl;
	cout << "  ID号 : " << client.get_gameid() << endl;
	cout << "  超时 : " << client.get_delay() / 1000.0 << "(秒)" << endl;
	cout << "  地图 : " << client.get_map() << endl;


	/* 地图串中的值为1-9，A-F，分别表示1-15的值，
		   例如：
			 服务器返回行=3
			 服务器返回列=4
			 服务器返回地图=123A85CF2123
		   则表示当前地图为(本例仅仅是示例)
			 1 2 3  10
			 8 5 12 15
			 2 1 2  3
			游戏结束的条件为：合成到16或无任何可合成元素 */

			/* 进入游戏交互环节
			   1、收到Server的GameOver则返回0，游戏结束
			   2、其它错误均返回-1（报文信息不正确等错误），重连，再次重复	*/
	if (game_progress(client) < 0) {
		client.close();
		return -1;
	}

	client.close();
	cout << "游戏结束" << endl;

	return 0;
}
int menu11()
{
	const char* my_no = "2150265";		//本人学号
	const char* my_pwd = "Wang20030812~";	//本人密码

	int wanted_row, wanted_col, wanted_id, wanted_delay;

#if 1 //条件编译，此处改为 #if 0 则表示启用下面 #else 中的语句
	cct_cls();
	input(wanted_row, wanted_col);
	//此处按需修改为键盘输入等形式
	//此处按需修改为键盘输入等形式
	wanted_id = 12345;		//id为本次请求的游戏序号，如果置-1，表示服务器随机产生，[0..2^31-1]则表示想固定序号（序号固定，则每次给出的初始矩阵及后续填充均相同，方便调试）
	wanted_delay = 60 * 1000;	//delay为请求的每步应答的最长时延，单位ms
#else
	wanted_row = -1;
	wanted_col = -1;
	wanted_id = -1;
	wanted_delay = -1;
#endif
	mto10_net_tools client;

	/* 打开client类对象中的debug开关（调试时可打开，到图形界面时需关闭） */
	client.set_debug_switch(false);

	/* 连接服务器 */
	if (client.connect() < 0) {
		/* 连接失败信息，有没有debug_switch都打印 */
		cout << "连接服务器失败!" << endl;
		return -1;
	}

	/* 向Server端发送认证信息及参数 */
	if (client.send_parameter(my_no, '-', my_pwd, wanted_row, wanted_col, wanted_id, wanted_delay) < 0) {
		cout << "发送认证及参数信息失败!" << endl;
		return -1;
	}

	/* 等待Server端下发参数（游戏开始）*/
	if (client.wait_for_game_start() < 0) {
		cout << "等待GameStart失败!" << endl;
		return -1;
	}

	/* 打印从服务器收到的参数，本次游戏以此参数为准（例：发送6行6列，返回8行10列，则本次游戏以8行10列为准）
	   下面打印的信息，图形化界面可以自行去除 */
	cout << "服务器返回信息 : " << endl;
	cout << "  行数 : " << client.get_row() << endl;
	cout << "  列数 : " << client.get_col() << endl;
	cout << "  ID号 : " << client.get_gameid() << endl;
	cout << "  超时 : " << client.get_delay() / 1000.0 << "(秒)" << endl;
	cout << "  地图 : " << client.get_map() << endl;


	/* 地图串中的值为1-9，A-F，分别表示1-15的值，
		   例如：
			 服务器返回行=3
			 服务器返回列=4
			 服务器返回地图=123A85CF2123
		   则表示当前地图为(本例仅仅是示例)
			 1 2 3  10
			 8 5 12 15
			 2 1 2  3
			游戏结束的条件为：合成到16或无任何可合成元素 */

			/* 进入游戏交互环节
			   1、收到Server的GameOver则返回0，游戏结束
			   2、其它错误均返回-1（报文信息不正确等错误），重连，再次重复	*/
	if (game_progress1(client) < 0) {
		client.close();
		return -1;
	}

	client.close();
	cout << "游戏结束" << endl;
	cct_setcolor(0, 7);
	return 0;
}
//void menu12()
//{
//	for (int num = 1; num <= 64; num++)
//	{
//		
//		const char* my_no = "2150265";		//本人学号
//		const char* my_pwd = "Wang20030812~";	//本人密码
//
//		int wanted_row, wanted_col, wanted_id, wanted_delay;
//
//#if 1 //条件编译，此处改为 #if 0 则表示启用下面 #else 中的语句
//		
//		wanted_row = 5;
//		wanted_col = 5;
//		//此处按需修改为键盘输入等形式
//		//此处按需修改为键盘输入等形式
//		wanted_id = -1;		//id为本次请求的游戏序号，如果置-1，表示服务器随机产生，[0..2^31-1]则表示想固定序号（序号固定，则每次给出的初始矩阵及后续填充均相同，方便调试）
//		wanted_delay = 60 * 1000;	//delay为请求的每步应答的最长时延，单位ms
//#else
//		wanted_row = -1;
//		wanted_col = -1;
//		wanted_id = -1;
//		wanted_delay = -1;
//#endif
//		mto10_net_tools client;
//
//		/* 打开client类对象中的debug开关（调试时可打开，到图形界面时需关闭） */
//		client.set_debug_switch(false);
//
//		/* 连接服务器 */
//		if (client.connect() < 0) {
//			/* 连接失败信息，有没有debug_switch都打印 */
//			cout << "连接服务器失败!" << endl;
//			
//		}
//
//		/* 向Server端发送认证信息及参数 */
//		if (client.send_parameter(my_no, '-', my_pwd, wanted_row, wanted_col, wanted_id, wanted_delay) < 0) {
//			cout << "发送认证及参数信息失败!" << endl;
//			
//		}
//
//		/* 等待Server端下发参数（游戏开始）*/
//		if (client.wait_for_game_start() < 0) {
//			cout << "等待GameStart失败!" << endl;
//			
//		}
//		if (game_progress2(client, num) < 0) {
//			
//			client.close();
//			
//		}
//		
//		client.close();
//		
//	
//	}
//
//	
//	
//}
int main()
{
	while (1)
	{
		cct_cls();
		menu();
		cout << "[请选择:]";
		char t;
		t = _getche();
		switch (t)
		{
			case '1':
			{
				menu1();
				break;
			}

			case '2':
			{
				menu2();
				break;
			}

			case'3':
			{
				menu3();
				break;
			}
			case'4':
			{
				menu4();
				break;
			}
			case'5':
			{
				menu5();
				break;
			}
			case'6':
			{
				menu6();
				break;
			}
			case '7':
			{
				menu7();
				break;
			}
			case '8':
			{
				menu8();
				break;
			}
			case '9':
			{
				menu9();
				break;
			}
			case 'A':
			{
				menu10();
				break;
			}
			case 'a':
			{
				menu10();
				break;
			}
			case 'B':
			{
				menu11();
				break;
			}
			case 'b':
			{
				menu11();
				break;
			}
			case '0':
			{
				cout << endl;
				return 0;
			}
			/*case 'C':
			{
				cct_cls();
				menu12();
				break;
			}
			case 'c':
			{
				cct_cls();
				menu12();
				break;
			}*/
		}
	}
	
	return 0;
}