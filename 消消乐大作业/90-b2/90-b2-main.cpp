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
	cout << "1.�������ҳ��ɺϳ����ʶ���ǵݹ飩" << endl;
	cout << "2.�������ҳ��ɺϳ����ʶ���ݹ飩" << endl;
	cout << "3.���������һ�κϳɣ��ֲ�����ʾ��" << endl;
	cout << "4.�����������棨�ֲ�����ʾ��" << endl;
	cout << "5.αͼ�ν�����ʾ��ʼ���飨�޷ָ��ߣ�" << endl;
	cout << "6.αͼ�ν�����ʾ��ʼ���飨�зָ��ߣ�" << endl;
	cout << "7.αͼ�ν������ü�ͷ��/���ѡ��ǰɫ��" << endl;
	cout << "8.αͼ�ν������һ�κϳɣ��ֲ��裩" << endl;
	cout << "9.αͼ�ν���������(֧�����)" << endl;
	cout << "---------------------------------------" << endl;
	cout << "A.�����н���(�����Զ���-������)" << endl;
	cout << "B.αͼ�ν���(�����Զ���-������)" << endl;
	/*cout << "C.�����н���(�����Զ���-������)" << endl;*/
	cout << "---------------------------------------" << endl;
	cout << "0.�˳�" << endl;
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
		cout << "������ϳ�Ŀ��(5-20):" << endl;
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
		cout << "������ϳ�Ŀ��(5-20):" << endl;
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
				cout << "Ŀ���Ѵ�ɣ�����" << endl;
				cct_setcolor(0, 7);
				cout << "����ߵ�Ŀ��������" << endl;
			}
			else
			{
				cout << "���κϳɽ��������س���������һ�εĺϳ�..." << endl;
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
	cout << "��Ļ��ǰ����Ϊ��" << set_cols << "��" << set_lines << "��";
	
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
	cout << "��Ļ��ǰ����Ϊ��" << set_cols << "��" << set_lines << "��";

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
	cout << "��Ļ��ǰ����Ϊ��" << set_cols << "��" << set_lines << "��";

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
	cout << "��Ļ��ǰ����Ϊ��" << set_cols << "��" << set_lines << "��";

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
		cout << "������ϳ�Ŀ��(5-20):" << endl;
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
	const char* my_no = "2150265";		//����ѧ��
	const char* my_pwd = "Wang20030812~";	//��������

	int wanted_row, wanted_col, wanted_id, wanted_delay;

#if 1 //�������룬�˴���Ϊ #if 0 ���ʾ�������� #else �е����
	cct_cls();
	input(wanted_row, wanted_col);
				//�˴������޸�Ϊ�����������ʽ
				//�˴������޸�Ϊ�����������ʽ
	wanted_id = -1;		//idΪ�����������Ϸ��ţ������-1����ʾ���������������[0..2^31-1]���ʾ��̶���ţ���Ź̶�����ÿ�θ����ĳ�ʼ���󼰺���������ͬ��������ԣ�
	wanted_delay = 60 * 1000;	//delayΪ�����ÿ��Ӧ����ʱ�ӣ���λms
#else
	wanted_row = -1;
	wanted_col = -1;
	wanted_id = -1;
	wanted_delay = -1;
#endif
	mto10_net_tools client;

	/* ��client������е�debug���أ�����ʱ�ɴ򿪣���ͼ�ν���ʱ��رգ� */
	client.set_debug_switch(false);

	/* ���ӷ����� */
	if (client.connect() < 0) {
		/* ����ʧ����Ϣ����û��debug_switch����ӡ */
		cout << "���ӷ�����ʧ��!" << endl;
		return -1;
	}

	/* ��Server�˷�����֤��Ϣ������ */
	if (client.send_parameter(my_no, '*', my_pwd, wanted_row, wanted_col, wanted_id, wanted_delay) < 0) {
		cout << "������֤��������Ϣʧ��!" << endl;
		return -1;
	}

	/* �ȴ�Server���·���������Ϸ��ʼ��*/
	if (client.wait_for_game_start() < 0) {
		cout << "�ȴ�GameStartʧ��!" << endl;
		return -1;
	}

	/* ��ӡ�ӷ������յ��Ĳ�����������Ϸ�Դ˲���Ϊ׼����������6��6�У�����8��10�У��򱾴���Ϸ��8��10��Ϊ׼��
	   �����ӡ����Ϣ��ͼ�λ������������ȥ�� */
	cout << "������������Ϣ : " << endl;
	cout << "  ���� : " << client.get_row() << endl;
	cout << "  ���� : " << client.get_col() << endl;
	cout << "  ID�� : " << client.get_gameid() << endl;
	cout << "  ��ʱ : " << client.get_delay() / 1000.0 << "(��)" << endl;
	cout << "  ��ͼ : " << client.get_map() << endl;


	/* ��ͼ���е�ֵΪ1-9��A-F���ֱ��ʾ1-15��ֵ��
		   ���磺
			 ������������=3
			 ������������=4
			 ���������ص�ͼ=123A85CF2123
		   ���ʾ��ǰ��ͼΪ(����������ʾ��)
			 1 2 3  10
			 8 5 12 15
			 2 1 2  3
			��Ϸ����������Ϊ���ϳɵ�16�����κοɺϳ�Ԫ�� */

			/* ������Ϸ��������
			   1���յ�Server��GameOver�򷵻�0����Ϸ����
			   2���������������-1��������Ϣ����ȷ�ȴ��󣩣��������ٴ��ظ�	*/
	if (game_progress(client) < 0) {
		client.close();
		return -1;
	}

	client.close();
	cout << "��Ϸ����" << endl;

	return 0;
}
int menu11()
{
	const char* my_no = "2150265";		//����ѧ��
	const char* my_pwd = "Wang20030812~";	//��������

	int wanted_row, wanted_col, wanted_id, wanted_delay;

#if 1 //�������룬�˴���Ϊ #if 0 ���ʾ�������� #else �е����
	cct_cls();
	input(wanted_row, wanted_col);
	//�˴������޸�Ϊ�����������ʽ
	//�˴������޸�Ϊ�����������ʽ
	wanted_id = 12345;		//idΪ�����������Ϸ��ţ������-1����ʾ���������������[0..2^31-1]���ʾ��̶���ţ���Ź̶�����ÿ�θ����ĳ�ʼ���󼰺���������ͬ��������ԣ�
	wanted_delay = 60 * 1000;	//delayΪ�����ÿ��Ӧ����ʱ�ӣ���λms
#else
	wanted_row = -1;
	wanted_col = -1;
	wanted_id = -1;
	wanted_delay = -1;
#endif
	mto10_net_tools client;

	/* ��client������е�debug���أ�����ʱ�ɴ򿪣���ͼ�ν���ʱ��رգ� */
	client.set_debug_switch(false);

	/* ���ӷ����� */
	if (client.connect() < 0) {
		/* ����ʧ����Ϣ����û��debug_switch����ӡ */
		cout << "���ӷ�����ʧ��!" << endl;
		return -1;
	}

	/* ��Server�˷�����֤��Ϣ������ */
	if (client.send_parameter(my_no, '-', my_pwd, wanted_row, wanted_col, wanted_id, wanted_delay) < 0) {
		cout << "������֤��������Ϣʧ��!" << endl;
		return -1;
	}

	/* �ȴ�Server���·���������Ϸ��ʼ��*/
	if (client.wait_for_game_start() < 0) {
		cout << "�ȴ�GameStartʧ��!" << endl;
		return -1;
	}

	/* ��ӡ�ӷ������յ��Ĳ�����������Ϸ�Դ˲���Ϊ׼����������6��6�У�����8��10�У��򱾴���Ϸ��8��10��Ϊ׼��
	   �����ӡ����Ϣ��ͼ�λ������������ȥ�� */
	cout << "������������Ϣ : " << endl;
	cout << "  ���� : " << client.get_row() << endl;
	cout << "  ���� : " << client.get_col() << endl;
	cout << "  ID�� : " << client.get_gameid() << endl;
	cout << "  ��ʱ : " << client.get_delay() / 1000.0 << "(��)" << endl;
	cout << "  ��ͼ : " << client.get_map() << endl;


	/* ��ͼ���е�ֵΪ1-9��A-F���ֱ��ʾ1-15��ֵ��
		   ���磺
			 ������������=3
			 ������������=4
			 ���������ص�ͼ=123A85CF2123
		   ���ʾ��ǰ��ͼΪ(����������ʾ��)
			 1 2 3  10
			 8 5 12 15
			 2 1 2  3
			��Ϸ����������Ϊ���ϳɵ�16�����κοɺϳ�Ԫ�� */

			/* ������Ϸ��������
			   1���յ�Server��GameOver�򷵻�0����Ϸ����
			   2���������������-1��������Ϣ����ȷ�ȴ��󣩣��������ٴ��ظ�	*/
	if (game_progress1(client) < 0) {
		client.close();
		return -1;
	}

	client.close();
	cout << "��Ϸ����" << endl;
	cct_setcolor(0, 7);
	return 0;
}
//void menu12()
//{
//	for (int num = 1; num <= 64; num++)
//	{
//		
//		const char* my_no = "2150265";		//����ѧ��
//		const char* my_pwd = "Wang20030812~";	//��������
//
//		int wanted_row, wanted_col, wanted_id, wanted_delay;
//
//#if 1 //�������룬�˴���Ϊ #if 0 ���ʾ�������� #else �е����
//		
//		wanted_row = 5;
//		wanted_col = 5;
//		//�˴������޸�Ϊ�����������ʽ
//		//�˴������޸�Ϊ�����������ʽ
//		wanted_id = -1;		//idΪ�����������Ϸ��ţ������-1����ʾ���������������[0..2^31-1]���ʾ��̶���ţ���Ź̶�����ÿ�θ����ĳ�ʼ���󼰺���������ͬ��������ԣ�
//		wanted_delay = 60 * 1000;	//delayΪ�����ÿ��Ӧ����ʱ�ӣ���λms
//#else
//		wanted_row = -1;
//		wanted_col = -1;
//		wanted_id = -1;
//		wanted_delay = -1;
//#endif
//		mto10_net_tools client;
//
//		/* ��client������е�debug���أ�����ʱ�ɴ򿪣���ͼ�ν���ʱ��رգ� */
//		client.set_debug_switch(false);
//
//		/* ���ӷ����� */
//		if (client.connect() < 0) {
//			/* ����ʧ����Ϣ����û��debug_switch����ӡ */
//			cout << "���ӷ�����ʧ��!" << endl;
//			
//		}
//
//		/* ��Server�˷�����֤��Ϣ������ */
//		if (client.send_parameter(my_no, '-', my_pwd, wanted_row, wanted_col, wanted_id, wanted_delay) < 0) {
//			cout << "������֤��������Ϣʧ��!" << endl;
//			
//		}
//
//		/* �ȴ�Server���·���������Ϸ��ʼ��*/
//		if (client.wait_for_game_start() < 0) {
//			cout << "�ȴ�GameStartʧ��!" << endl;
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
		cout << "[��ѡ��:]";
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