/* 2150265 ��09 ����� */
#include<iostream>
using namespace std;
int main()
{
	int a = 0;
	int b, c, d, e, f;
	cout << "������һ��[1..30000]�������:" << endl;
	cin >> a;
	b = a % 10;
	c = (a/10) % 10;
	d = (a / 100) % 10;
	e = (a / 1000) % 10;
	f = (a / 10000);
	cout << "��λ : " << f << endl;
	cout << "ǧλ : " << e << endl;
	cout << "��λ : " << d << endl;
	cout << "ʮλ : " << c << endl;
	cout << "��λ : " << b << endl;



	
	return 0;

}