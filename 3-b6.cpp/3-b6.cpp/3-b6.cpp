/* 2150265 ��09 ����� */
#include<iostream>
#include<iomanip>
using namespace std;


int main()
{ 
	
	
	double num1, num2;
	long long int num3;
	int a, b, c, d, e, f, g, h, i, j, k, l, num4;
	cout << "������һ��[0-100��)֮�������:" << endl;
	cin >> num1;
	num3 = static_cast<long long int>(num1 / 1);
	num2 = num1 - num3;
	num4 = static_cast<int>(100 * num2);
	a = static_cast<int>((num4 % 10) + 0.01);
	b = static_cast<int>((num4 / 10));
	c = (num3) % 10;
	d = (num3 / 10) % 10;
	e = (num3 / 100) % 10;
	f = (num3 / 1000) % 10;
	g = (num3 / 10000) % 10;
	h = (num3 / 100000) % 10;
	i = (num3 / 1000000) % 10;
	j = (num3 / 10000000) % 10;
	k = (static_cast<int>(num3 / 100000000)) % 10;
	l = static_cast<int>((num3 / 1000000000));


	switch (l)
	{

		case 0:
			break;
		case 1:
			cout << "ʰ";
			break;
		case 2:
			cout << "��ʰ";
			break;
		case 3:
			cout << "��ʰ";
			break;
		case 4:
			cout << "��ʰ";
			break;
		case 5:
			cout << "��ʰ";
			break;
		case 6:
			cout << "½ʰ";
			break;
		case 7:
			cout << "��ʰ";
			break;
		case 8:
			cout << "��ʰ";
			break;
		case 9:
			cout << "��ʰ";
			break;

	}
	switch (k)
	{
		case 0:
			if (l == 0)
			{
				break;
			}
			else
			{
				cout << "��";
				break;
			}
			break;
		case 1:
			cout << "Ҽ��";
			break;
		case 2:
			cout << "����";
			break;
		case 3:
			cout << "����";
			break;
		case 4:
			cout << "����";
			break;
		case 5:
			cout << "����";
			break;
		case 6:
			cout << "½��";
			break;
		case 7:
			cout << "����";
			break;
		case 8:
			cout << "����";
			break;
		case 9:
			cout << "����";
			break;

	}
	switch (j)
	{
		case 0:
			if ((j == 0) && (i == 0) && (h == 0) && (g == 0))
				break;
			if((k==0) && (l==0))
				break;
			else
				cout << "��";
				break;
			break;
		case 1:
			cout << "ҼǪ";
			break;
		case 2:
			cout << "��Ǫ";
			break;
		case 3:
			cout << "��Ǫ";
			break;
		case 4:
			cout << "��Ǫ";
			break;
		case 5:
			cout << "��Ǫ";
			break;
		case 6:
			cout << "½Ǫ";
			break;
		case 7:
			cout << "��Ǫ";
			break;
		case 8:
			cout << "��Ǫ";
			break;
		case 9:
			cout << "��Ǫ";
			break;

	}
	switch (i)
	{
		case 0:
			if (j == 0)
			{
				break;
			}
			else
			{
				cout << "��";
				break;
			}
			break;
		case 1:
			cout << "Ҽ��";
			break;
		case 2:
			cout << "����";
			break;
		case 3:
			cout << "����";
			break;
		case 4:
			cout << "����";
			break;
		case 5:
			cout << "���";
			break;
		case 6:
			cout << "½��";
			break;
		case 7:
			cout << "���";
			break;
		case 8:
			cout << "�ư�";
			break;
		case 9:
			cout << "����";
			break;

	}
	switch (h)
	{
		case 0:
			if ((i == 0)||((i==0)&&(j == 0)))
			{
				break;
			}
			if (g == 0)
			{
				break;
			}
			else
			{
				cout << "��";
				break;
			}
			break;
		case 1:
			cout << "Ҽʰ";
			break;
		case 2:
			cout << "��ʰ";
			break;
		case 3:
			cout << "��ʰ";
			break;
		case 4:
			cout << "��ʰ";
			break;
		case 5:
			cout << "��ʰ";
			break;
		case 6:
			cout << "½ʰ";
			break;
		case 7:
			cout << "��ʰ";
			break;
		case 8:
			cout << "��ʰ";
			break;
		case 9:
			cout << "��ʰ";
			break;

	}
	switch (g)
	{
		case 0:
			if ((i != 0) || (j != 0) || (h != 0))
			{
				cout << "��";
			}
			if((i==0)&&(j==0)&&(h==0))
			{
				break;
			}
			break;
		case 1:
			cout << "Ҽ��";
			break;
		case 2:
			cout << "����";
			break;
		case 3:
			cout << "����";
			break;
		case 4:
			cout << "����";
			break;
		case 5:
			cout << "����";
			break;
		case 6:
			cout << "½��";
			break;
		case 7:
			cout << "����";
			break;
		case 8:
			cout << "����";
			break;
		case 9:
			cout << "����";
			break;

	}

	switch (f)
	{
		case 0:
			if ((c == 0) && (d == 0) && (e == 0))
				break;
			else if ((c != 0) || (d != 0) || (e != 0))
				cout << "��";
				break;
			break;
		case 1:
			cout << "ҼǪ";
			break;
		case 2:
			cout << "��Ǫ";
			break;
		case 3:
			cout << "��Ǫ";
			break;
		case 4:
			cout << "��Ǫ";
			break;
		case 5:
			cout << "��Ǫ";
			break;
		case 6:
			cout << "½Ǫ";
			break;
		case 7:
			cout << "��Ǫ";
			break;
		case 8:
			cout << "��Ǫ";
			break;
		case 9:
			cout << "��Ǫ";
			break;

	}
	switch (e)
	{
		case 0:
			if (f == 0)
			{
				break;
			}
			else
			{
				cout << "��";
				break;
			}
			break;
		case 1:
			cout << "Ҽ��";
			break;
		case 2:
			cout << "����";
			break;
		case 3:
			cout << "����";
			break;
		case 4:
			cout << "����";
			break;
		case 5:
			cout << "���";
			break;
		case 6:
			cout << "½��";
			break;
		case 7:
			cout << "���";
			break;
		case 8:
			cout << "�ư�";
			break;
		case 9:
			cout << "����";
			break;

	}
	switch (d)
	{
		case 0:
			if ((e == 0) ||((e!=0) &&(f != 0)))
			{
				break;
			}
			else
			{
				cout << "��";
				break;
			}
			break;
		case 1:
			cout << "Ҽʰ";
			break;
		case 2:
			cout << "��ʰ";
			break;
		case 3:
			cout << "��ʰ";
			break;
		case 4:
			cout << "��ʰ";
			break;
		case 5:
			cout << "��ʰ";
			break;
		case 6:
			cout << "½ʰ";
			break;
		case 7:
			cout << "��ʰ";
			break;
		case 8:
			cout << "��ʰ";
			break;
		case 9:
			cout << "��ʰ";
			break;

	}
	switch (c)
	{
		case 0:
			if ((d == 0) && (e == 0) && (f == 0))
			{
				break;
			}
			else
			{
				cout << "Բ";
				break;
			}
		case 1:
			cout << "ҼԲ";
			break;
		case 2:
			cout << "��Բ";
			break;
		case 3:
			cout << "��Բ";
			break;
		case 4:
			cout << "��Բ";
			break;
		case 5:
			cout << "��Բ";
			break;
		case 6:
			cout << "½Բ";
			break;
		case 7:
			cout << "��Բ";
			break;
		case 8:
			cout << "��Բ";
			break;
		case 9:
			cout << "��Բ";
			break;

	}
	switch (b)
	{
		case 0:
			if (a != 0)
				cout << "��";
			break;

		case 1:
			cout << "Ҽ��";
			break;
		case 2:
			cout << "����";
			break;
		case 3:
			cout << "����";
			break;
		case 4:
			cout << "����";
			break;
		case 5:
			cout << "���";
			break;
		case 6:
			cout << "½��";
			break;
		case 7:
			cout << "���";
			break;
		case 8:
			cout << "�ƽ�";
			break;
		case 9:
			cout << "����";
			break;

	}


	switch (a)
	{
		case 0:
			cout << "��" << endl;
			break;

		case 1:
			cout << "Ҽ��"<<endl;
			break;
		case 2:
			cout << "����"<<endl;
			break;
		case 3:
			cout << "����"<<endl;
			break;
		case 4:
			cout << "����"<<endl;
			break;
		case 5:
			cout << "���"<<endl;
			break;
		case 6:
			cout << "½��"<<endl;
			break;
		case 7:
			cout << "���"<<endl;
			break;
		case 8:
			cout << "�Ʒ�"<<endl;
			break;
		case 9:
			cout << "����"<<endl;
			break;

	}
	
	return 0;
		
}