#include<iostream>
using namespace std;
int main()
{
	cout << "����������ֵ��" << endl;
	double a, b;
	int e,f,g,h,i,j,k,l,m;
	int c,d;
	cin >> a;
	c = int(a);
	b = a - c;
	d = int(100 * b);
	e = c/ 50;
	f = c % 50;
	g = f / 20;
	h = f % 20;
	i = h / 10;
	j = h % 10;
	k = j / 5;
	l = j % 5;
	m = c - 50 * e - 20 * g - 10 * i - 5 * k;

	int n, o, p, q, r, s, t, u, v;
	n = d / 50;
	o = d % 50;
	p = o/ 10;
	q = o% 10;
	r = q / 5;
	s = q % 5;
	t = s / 2;
	u = s % 2;
	v = d - 50 * n - 10 * p - 5 * r - 2 * t;

	int w = 0;
	w = e + g + i + k + m + n + p + r + t + v;
	cout << "��" << w << "�����㣬�������£�" << endl;
	if (e)
	{
		cout << "50Ԫ : " << e << "��" << endl;

	}
	if (g)
	{
		cout << "20Ԫ : " << g << "��" << endl;

	}
	if (i)
	{
		cout << "10Ԫ : " << i << "��" << endl;

	}
	if (k)
	{
		cout << "5Ԫ  : " << k<< "��" << endl;

	}
	if (m)
	{
		cout << "1Ԫ  : " << m << "��" << endl;

	}
	if (n)
	{
		cout << "5��  : " << n << "��" << endl;

	}
	if (p)
	{
		cout << "1��  : " << p << "��" << endl;

	}
	if (r)
	{
		cout << "5��  : " << r << "��" << endl;

	}
	if (t)
	{
		cout << "2��  : " << t << "��" << endl;

	}
	if (v)
	{
		cout << "1��  : " << v << "��" << endl;

	}
	return 0;

}