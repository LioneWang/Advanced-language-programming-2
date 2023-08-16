/* 2150265 ����� ����09�� */
using namespace std;
#include <iostream>
#include <cstdio>
#include <conio.h>
#include <time.h>
#include <windows.h>


const int MAX_X = 69;	//����*��ɵı߿�Ŀ��
const int MAX_Y = 17;	//����*��ɵı߿�ĸ߶�

/***************************************************************************
  �������ƣ�
  ��    �ܣ������system("cls")һ���Ĺ��ܣ���Ч�ʸ�
  ���������
  �� �� ֵ��
  ˵    �������������Ļ���������������ǿɼ���������(ʹ�õ�ǰ��ɫ)
***************************************************************************/
void cls(const HANDLE hout)
{
	COORD coord = { 0, 0 };
	CONSOLE_SCREEN_BUFFER_INFO binfo; /* to get buffer info */
	DWORD num;

	/* ȡ��ǰ��������Ϣ */
	GetConsoleScreenBufferInfo(hout, &binfo);
	/* ����ַ� */
	FillConsoleOutputCharacter(hout, (TCHAR)' ', binfo.dwSize.X * binfo.dwSize.Y, coord, &num);
	/* ������� */
	FillConsoleOutputAttribute(hout, binfo.wAttributes, binfo.dwSize.X * binfo.dwSize.Y, coord, &num);

	/* ���ص�(0,0) */
	SetConsoleCursorPosition(hout, coord);
	return;
}

/***************************************************************************
  �������ƣ�gotoxy
  ��    �ܣ�������ƶ���ָ��λ��
  ���������HANDLE hout ������豸���
			int X       ��ָ��λ�õ�x����
			int Y       ��ָ��λ�õ�y����
  �� �� ֵ����
  ˵    �����˺�����׼�޸�
***************************************************************************/
void gotoxy(const HANDLE hout, const int X, const int Y)
{
	COORD coord;
	coord.X = X;
	coord.Y = Y;
	SetConsoleCursorPosition(hout, coord);
}

/***************************************************************************
  �������ƣ�showch
  ��    �ܣ���ָ��λ�ô���ӡһ��ָ�����ַ�
  ���������HANDLE hout ������豸���
			int X       ��ָ��λ�õ�x����
			int Y       ��ָ��λ�õ�y����
			char ch     ��Ҫ��ӡ���ַ�	
  �� �� ֵ����
  ˵    �����˺�����׼�޸�
***************************************************************************/
void showch(const HANDLE hout, const int X, const int Y, const char ch)
{
	gotoxy(hout, X, Y);
	putchar(ch);
}

/***************************************************************************
  �������ƣ�init_border
  ��    �ܣ���ʾ��ʼ�ı߿�����ַ�
  ���������HANDLE hout������豸���
  �� �� ֵ����
  ˵    �����˺�����׼�޸�
***************************************************************************/
void init_border(const HANDLE hout)
{
	gotoxy(hout, 0, 0);	//����ƻ����Ͻ�(0,0)
	cout << "***********************************************************************" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "***********************************************************************" << endl;

	/* �����ʾ20����д��ĸ����ĸ��ֵ��XY���궼�����ʾ
	   rand()�����Ĺ��ܣ��������һ���� 0-32767 ֮�������
	   ˼������ʲô����£��������ѭ��ִ�����ɺ��㿴����ʵ����ĸ��������20���� */
	int i;
	for (i = 0; i < 20; i++)
		showch(hout, rand() % MAX_X + 1, rand() % MAX_Y + 1, 'A' + rand() % 26);

	return;
}

/* -- �������ӵ����ɺ������Է��ڴ˴� --*/

void menu()
{

	cout << "1.��I��J��K��L��������������(��Сд���ɣ��߽�ֹͣ)" << endl;
	cout << "2.��I��J��K��L��������������(��Сд���ɣ��߽����)" << endl;
	cout << "3.�ü�ͷ�������������ң��߽�ֹͣ" << endl;
	cout << "4.�ü�ͷ�������������ң��߽����" << endl;
	cout << "5.��I��J��K��L��������������(�߽�ֹͣ�������ͷ��׼�����ƶ�)" << endl;
	cout << "6.��I��J��K��L��������������(�߽���ƣ������ͷ��׼�����ƶ�)" << endl;
	cout << "0.�˳�" << endl;
	cout << "[��ѡ��0-6] ";

}


void move_by_ijkl(char t)
{
	int x = 35, y = 9;
	const HANDLE hout = GetStdHandle(STD_OUTPUT_HANDLE);
	gotoxy(hout, 35, 9);


	while (true)
	{


		int a;
		a = _getch();
		if (t == '1')
		{
			switch (a)
			{
				case 'i':
					y > 1 ? y-- : y = 1;
					gotoxy(hout, x, y);
					break;
				case 'k':
					y < 17 ? y++ : y = 17;
					gotoxy(hout, x, y);
					break;
				case 'j':
					x > 1 ? x-- : x = 1;
					gotoxy(hout, x, y);
					break;
				case 'l':
					x < 69 ? x++ : x = 69;
					gotoxy(hout, x, y);
					break;
				case 'I':
					y > 1 ? y-- : y = 1;
					gotoxy(hout, x, y);
					break;
				case 'K':
					y < 17 ? y++ : y = 17;
					gotoxy(hout, x, y);
					break;
				case 'J':
					x > 1 ? x-- : x = 1;
					gotoxy(hout, x, y);
					break;
				case 'L':
					x < 69 ? x++ : x = 69;
					gotoxy(hout, x, y);
					break;
				case 32:
					showch(hout, x, y, 32);
					gotoxy(hout, x, y);
					break;
			}
			if ((a == 'q') || (a == 'Q'))
				break;
		}
		if (t == '2')
		{
			switch (a)
			{
				case 'i':
					y > 1 ? y-- : y = 17;
					gotoxy(hout, x, y);
					break;
				case 'k':
					y < 17 ? y++ : y = 1;
					gotoxy(hout, x, y);
					break;
				case 'j':
					x > 1 ? x-- : x = 69;
					gotoxy(hout, x, y);
					break;
				case 'l':
					x < 69 ? x++ : x = 1;
					gotoxy(hout, x, y);
					break;
				case 'I':
					y > 1 ? y-- : y = 17;
					gotoxy(hout, x, y);
					break;
				case 'K':
					y < 17 ? y++ : y = 1;
					gotoxy(hout, x, y);
					break;
				case 'J':
					x > 1 ? x-- : x = 69;
					gotoxy(hout, x, y);
					break;
				case 'L':
					x < 69 ? x++ : x = 1;
					gotoxy(hout, x, y);
					break;
				case 32:
					showch(hout, x, y, 32);
					break;


			}
			if ((a == 'q') || (a == 'Q'))
				break;
		}

		
		if (t == '5')
		{
		
			if (a == 224)
			{
				a = _getch();
				if (a == 75)
				{
					gotoxy(hout, x, y);
					continue;
				}
			}
			switch (a)
			{

				case 'i':
					y > 1 ? y-- : y = 1;
					gotoxy(hout, x, y);
					break;
				case 'k':
					y < 17 ? y++ : y = 17;
					gotoxy(hout, x, y);
					break;
				case 'j':
					x > 1 ? x-- : x = 1;
					gotoxy(hout, x, y);
					break;
				case 'l':
					x < 69 ? x++ : x = 69;
					gotoxy(hout, x, y);
					break;
				case 'I':
					y > 1 ? y-- : y = 1;
					gotoxy(hout, x, y);
					break;
				case 'K':
					y < 17 ? y++ : y = 17;
					gotoxy(hout, x, y);
					break;
				case 'J':
					x > 1 ? x-- : x = 1;
					gotoxy(hout, x, y);
					break;
				case 'L':
					x < 69 ? x++ : x = 69;
					gotoxy(hout, x, y);
					break;
				case 32:
					showch(hout, x, y, 32);
					gotoxy(hout, x, y);
					break;
			}
			if ((a == 'q') || (a == 'Q'))
				break;
			
		
		}
		if (t == '6')
		{
			if (a == 224)
			{
				a = _getch();
				if (a == 75)
				{
					gotoxy(hout, x, y);
					continue;
				}
			}
			
		
			switch (a)
			{
				case 'i':
					y > 1 ? y-- : y = 17;
					gotoxy(hout, x, y);
					break;
				case 'k':
					y < 17 ? y++ : y = 1;
					gotoxy(hout, x, y);
					break;
				case 'j':
					x > 1 ? x-- : x = 69;
					gotoxy(hout, x, y);
					break;
				case 'l':
					x < 69 ? x++ : x = 1;
					gotoxy(hout, x, y);
					break;
				case 'I':
					y > 1 ? y-- : y = 17;
					gotoxy(hout, x, y);
					break;
				case 'K':
					y < 17 ? y++ : y = 1;
					gotoxy(hout, x, y);
					break;
				case 'J':
					x > 1 ? x-- : x = 69;
					gotoxy(hout, x, y);
					break;
				case 'L':
					x < 69 ? x++ : x = 1;
					gotoxy(hout, x, y);
					break;
				case 32:
					showch(hout, x, y, 32);
					break;

			}
			if ((a == 'q') || (a == 'Q'))
				break;
		}
		

		
	}




}



void move_by_arrow(char g)
{
	int x = 34, y = 8;
	const HANDLE hout = GetStdHandle(STD_OUTPUT_HANDLE);
	gotoxy(hout, 34, 8);


	while (true)
	{


		
		if (g == '3')
		{
			int c;
			c = _getch();
			if (c == 72 || c == 75 || c == 77 || c == 80)
				continue;
			if (c == 'q' || c == 'Q')
				break;
			if(c==32)
				showch(hout, x, y, 32);
			int d;
			d = _getch();
			switch (d)
			{
				
				case 72:
					
					y > 1 ? y-- : y = 1;
					gotoxy(hout, x, y);
					break;
				case 80:
					
					y < 17 ? y++ : y = 17;
					gotoxy(hout, x, y);
					break;
				case 75:
					x > 1 ? x-- : x = 1;
					gotoxy(hout, x, y);
					break;
				case 77:
					

					x < 69 ? x++ : x = 69;
					gotoxy(hout, x, y);
					break;

				case 32:
					showch(hout, x, y, 32);
					gotoxy(hout, x, y);
					break;
			}
			
		}
		if (g == '4')
		{
			int p;
			p = _getch();
			if (p== 72 || p == 75 || p == 77 || p == 80)
				continue;
			if (p == 'q' || p== 'Q')
				break;
			if (p== 32)
				showch(hout, x, y, 32);
			int z;
			z = _getch();
			switch (z)
			{

				case 72:
					y > 1 ? y-- : y = 17;
					gotoxy(hout, x, y);
					break;
				case 80:
					y < 17 ? y++ : y = 1;
					gotoxy(hout, x, y);
					break;
				case 75:
					x > 1 ? x-- : x = 69;
					gotoxy(hout, x, y);
					break;
				case 77:
					x < 69 ? x++ : x = 1;
					gotoxy(hout, x, y);
					break;
				case 32:
					showch(hout, x, y, 32);
					break;
			}

		}
	}
	
	
	
	
}





	/***************************************************************************
	  �������ƣ�
	  ��    �ܣ�
	  ���������
	  �� �� ֵ��
	  ˵    ����main���������ڳ�ʼ��ʾ�����԰���ĿҪ��ȫ���Ʒ���д
	***************************************************************************/
	int main()
	{
		while (1)
		{
			const HANDLE hout = GetStdHandle(STD_OUTPUT_HANDLE); //ȡ��׼����豸��Ӧ�ľ��
			cls(hout);
			menu();
			char num;
			num = _getch();

			

			/* ����α����������ӣ�ֻ���ڳ���ʼʱִ��һ�μ��� */
			srand((unsigned int)(time(0)));

			/* �˾�������ǵ���ϵͳ��cls�������� */
			cls(hout);

			/* ��ʾ��ʼ�ı߿����е�����ַ� */
			init_border(hout);

			switch (num)
			{
				case '1':
					move_by_ijkl(num);
					break;
				case '2':
					move_by_ijkl(num);
					break;
				case '3':
					move_by_arrow(num);
					break;
				case '4':
					move_by_arrow(num);
					break;
				case '5':
					move_by_ijkl(num);
					break;
				case '6':
					move_by_ijkl(num);
					break;
				
			}
			if (num == '0')
			{
				cls(hout);
				break;
			}
			gotoxy(hout, 0, 23);
			cout << "��Ϸ���������س������ز˵�.";
			while (_getch() != 13)
			{
				
				showch(hout,27,23,32);
			}
			cout << endl;
		}
		//��ͣ(�˴���ҵҪ����ֻ�ܰ��س��˳���Ŀǰ��getcharʾ���������������+�س��˳�������������������Ļ��)
		//getchar();
		return 0;
	}
	//����Ϊ��һ��ʼ����Ļ�Ͽ��ܲ���ʾ20���ַ������⣬����Ϊ�����Ƕ��������ͬһ��λ�ô������ַ�����˻ᷢ���ַ����ǵ����󣬾�����������ĸ��ʷǳ�С��