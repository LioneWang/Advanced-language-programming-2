/* 2150265 ��09 ����� */
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double  num1,num2;
	long long int num3;
	int a, b, c, d, e, f, g, h, i, j, k, l,num4;
	cout << "������һ��[0-100��)֮�������:" << endl;
	
	cin >> num1;
	num3 =  static_cast<long long int>(num1/1); 
	num2 = num1 - num3;
	num4 =  int(100 * num2+0.01);
	a = int((num4 %10));
	b = int((num4 / 10)) ;
	c = (num3 ) % 10;
	d = (num3 / 10) % 10;
	e = (num3 / 100) % 10;
	f = (num3 / 1000) % 10;
	g = (num3 / 10000) % 10;
	h = (num3 / 100000) % 10;
	i = (num3 / 1000000) % 10;
	j = (num3 / 10000000) % 10;
	k =(int(num3 / 100000000)) % 10;
	l = int((num3 / 1000000000));
	cout << "ʮ��λ : " << l << endl;
	cout << "��λ   : " << k << endl;
	cout << "ǧ��λ : " << j << endl;
	cout << "����λ : " << i << endl;
	cout << "ʮ��λ : " << h << endl;
	cout << "��λ   : " << g << endl;
	cout << "ǧλ   : " << f << endl;
	cout << "��λ   : " << e << endl;
	cout << "ʮλ   : " << d << endl;
	cout << "Բ     : " << c << endl;
	cout << "��     : " << b << endl;
	cout << "��     : " << a << endl;
	return 0;
}
