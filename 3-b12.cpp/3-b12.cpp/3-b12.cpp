/* ����09�� 2150265 ����� */
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int year, month, day, ret, day1, date, date1, ret1;
	while (1) {
		cout << "���������(2000-2030)���·�(1-12) : ";
		cin >> year>> month;   //����x�ķ�ʽ������ cin>>int�ͱ�����������������ʽ
		if (cin.rdstate() != 0)
		{
			
			cin.clear();
			cin.ignore(1024,'\n');

			
			cout << "����Ƿ�������������" << endl;
			//system("pause");
			continue;
		}
		else if ((year >= 2000 && year <= 2030) && (month >= 1 && month <= 12))
			break;
		else
		{
			cout << "����Ƿ�������������" << endl;
		}
	}

	while (1) {
		cout << "������" << year << "��" << month << "��1�յ�����(0 - 6��ʾ������ - ������) : ";
		cin >> day1;
		if (cin.rdstate() != 0)
		{
			cout << "����Ƿ�������������" << endl;
			cin.clear();
			cin.sync();
			//system("pause");
			
		}
		else if (day1 >= 0 && day1 <= 6)
			break;
		else
		{
			cout << "����Ƿ�������������" << endl;
		}
	}
	if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)))
	{
		if (month == 2)
		{
			day = 29;
		}
		else if ((month == 1) || (month == 3) || (month == 5) || (month == 7) || (month == 8) || (month == 10) || (month == 12))
		{
			day = 31;
		}
		else
		{
			day = 30;
		}

	}
	else
	{
		if (month == 2)
		{
			day = 28;
		}
		else if ((month == 1) || (month == 3) || (month == 5) || (month == 7) || (month == 8) || (month == 10) || (month == 12))
		{
			day = 31;
		}
		else
		{
			day = 30;
		}
	}
	
	cout << endl;
	cout << year << "��" << month << "�µ�����Ϊ:" << endl;
	cout << "������  ����һ  ���ڶ�  ������  ������  ������  ������" << endl;
	cout << "  ";
	for (date1 = 1; date1 <= day1; date1++)
	{
		cout << "        ";
	}


	for (date = 1; date <= day; date++)
	{
		if ((date - 7 + day1) % 7 == 0)
		{
			
			cout<<setw(2)<< date;
			cout<<" ";
			cout << endl;
			cout<<"  ";
		}
		else
		{
			cout<<setw(2)<< date;
			cout<<"      ";
		}

	}
	cout << endl;
	return 0;
}