/* 2150265 ����� ����09�� */
#include<iostream>
using namespace std;
#include<iomanip>
int zeller(int year, int month, int day);
int calender(int z, int x);
int main()
{
	int year, month, day2;
	int day = 1;
	while (1) {
		cout << "��������[1900-2100]����\n";
		cin>>year>>month;   //����x�ķ�ʽ������ cin>>int�ͱ�����������������ʽ
		if (((year % 4 == 0 && year % 100 != 0) || year % 400 == 0))
			if (month == 2)
				day2 = 29;
			else if ((month == 1) || (month == 3) || (month == 5) || (month == 7) || (month == 8) || (month == 10) || (month == 12))
				day2 = 31;
			else
				day2 = 30;
		else
			if (month == 2)
				day2 = 28;
			else if ((month == 1) || (month == 3) || (month == 5) || (month == 7) || (month == 8) || (month == 10) || (month == 12))
				day2 = 31;
			else
				day2 = 30;
		if (cin.rdstate() != 0)
		{

			cin.clear();
			cin.ignore(1024, '\n');


			cout << "�����������������" << endl;
			//system("pause");
			continue;
		}
		else if ((year < 1900) || (year > 2100))
			cout << "��ݲ���ȷ������������" << endl;
		else if ((month > 12) || (month < 1))
			cout << "�·ݲ���ȷ������������" << endl;
		else
		{
			break;
		}
		
	}
	cout << endl;
	cout << year << "��" << month << "��" << endl;
	int  week;
	week = zeller(year, month, day);
	if (week == 7)
		week = 0;
	calender(week, day2);
	cout << endl;
	cout << endl;
	return 0;
}


int zeller(int year, int month, int day)
{
	if ((month == 1) || (month == 2))
	{
		year = year - 1;
		month = month + 12;
	}
	int week1;
	int a, b, c, d, y, m, w;
	a = year % 10;
	b = (year / 10) % 10;
	y = 10 * b + a;
	m = month;
	d = day;
	c = (year - y) / 100;
	w = y + static_cast<int>(y / 4) + static_cast<int>(c / 4) - 2 * c + static_cast<int>((26 * (m + 1)) / 10) + d - 1;
	if (w < 0)
	{
		w = -w;
		week1 = 7 - (w % 7);
		return week1;
	}
	else
	{
		week1 = w % 7;
		return week1;

	}
	return 0;
}

int calender(int z, int x)
{
	int date, date1;
	cout << "======================================================" << endl;
	cout << "������  ����һ  ���ڶ�  ������  ������  ������  ������" << endl;
	cout << "======================================================" << endl;
	for (date1 = 0; date1 < z; date1++)
	{
		cout << "        ";
	}


	for (date = 1; date <= x; date++)
	{
		cout << setw(4) << date;
		cout << "    ";
		if (z == 6)
			cout << endl;
		z = (++z) % 7;
	}
	return 0;
}