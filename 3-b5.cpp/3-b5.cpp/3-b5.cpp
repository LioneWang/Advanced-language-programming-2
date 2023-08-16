/* 2150265 信09 王加炜 */
#include<iostream>
using namespace std;
int exa;
int main()
{
	cout << "请输入年，月，日" << endl;
	int year, month, day,day2;
	cin >> year ;
	cin >> month;
	cin >> day;
	if (month > 12)
	{
		cout << "输入错误-月份不正确" << endl;
	}
	if (month == 2)
	{
		if (((year % 4 == 0 && year % 100 != 0) || year % 400 == 0))
		{
			if (day < 30)
			{
				exa = 31 + day;
				cout << year << "-" << month << "-" << day << "是" << year << "年的第" << exa << "天" << endl;
			}

			else 
				cout << "输入错误-日与月的关系非法" << endl;
			
				

			
		}
		else
		{
			if (day < 29)
			{
				exa = 31 + day;
				cout << year << "-" << month << "-" << day << "是" << year << "年的第" << exa << "天" << endl;
			}

			else
				cout << "输入错误-日与月的关系非法" << endl;
		}

	}
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		day2 = 29;
	else
	{
		day2 = 28;
	}
		
		
		
		
	if	(month == 1 )
	{
		if (day <32)
		{
			exa = day;
		}
		else
		{
			cout << "输入错误-日与月的关系非法" << endl;
			cout << year << "-" << month << "-" << day << "是" << year << "年的第" << exa << "天" << endl;
		}
	}
	if (month == 4 or month==6)
	{
		if (day < 31)
		{
			exa = (month / 2) * 31 + day2 + ((month / 2) - 2) * day + day;
			cout << year << "-" << month << "-" << day << "是" << year << "年的第" << exa << "天" << endl;
		}
		else
		{
			cout << "输入错误-日与月的关系非法" << endl;
		}

		if (month == 9 or month== 11)
			if (day < 31)
			{
				exa = ((month + 1) / 2) * 31 + day2 + (((month - 1) / 2) - 2) * day + day;
				cout << year << "-" << month << "-" << day << "是" << year << "年的第" << exa << "天" << endl;
			}
			else
			{
				cout << "输入错误-日与月的关系非法" << endl;
			}
		if (month == 3 or month== 5 or month== 7)
			if (day < 32)
			{
				exa = ((month - 1) / 2) * 31 + day2 + (((month - 1) / 2) - 1) * day + day;
				cout << year << "-" << month << "-" << day << "是" << year << "年的第" << exa << "天" << endl;
			}
			else
			{
				cout << "输入错误-日与月的关系非法" << endl;
			}
		if (month == 8 or month ==10 or month==12)
			if (day < 32)
			{
				exa = ((month) / 2) * 31 + day2 + (((month) / 2) - 2) * day + day;
				cout << year << "-" << month << "-" << day << "是" << year << "年的第" << exa << "天" << endl;
			}
			else
			{
				cout << "输入错误-日与月的关系非法" << endl;
			}
	}
		return 0;
}