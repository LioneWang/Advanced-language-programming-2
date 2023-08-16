/* 济勤09班 2150265 王加炜 */
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int year, month, day, ret, day1, date, date1, ret1;
	while (1) {
		cout << "请输入年份(2000-2030)和月份(1-12) : ";
		cin >> year>> month;   //读入x的方式必须是 cin>>int型变量，不允许其他方式
		if (cin.rdstate() != 0)
		{
			
			cin.clear();
			cin.ignore(1024,'\n');

			
			cout << "输入非法，请重新输入" << endl;
			//system("pause");
			continue;
		}
		else if ((year >= 2000 && year <= 2030) && (month >= 1 && month <= 12))
			break;
		else
		{
			cout << "输入非法，请重新输入" << endl;
		}
	}

	while (1) {
		cout << "请输入" << year << "年" << month << "月1日的星期(0 - 6表示星期日 - 星期六) : ";
		cin >> day1;
		if (cin.rdstate() != 0)
		{
			cout << "输入非法，请重新输入" << endl;
			cin.clear();
			cin.sync();
			//system("pause");
			
		}
		else if (day1 >= 0 && day1 <= 6)
			break;
		else
		{
			cout << "输入非法，请重新输入" << endl;
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
	cout << year << "年" << month << "月的日历为:" << endl;
	cout << "星期日  星期一  星期二  星期三  星期四  星期五  星期六" << endl;
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