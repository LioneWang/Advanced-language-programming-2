#include<iostream>
using namespace std;
int main()
{
	cout << "请输入找零值：" << endl;
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
	cout << "共" << w << "张找零，具体如下：" << endl;
	if (e)
	{
		cout << "50元 : " << e << "张" << endl;

	}
	if (g)
	{
		cout << "20元 : " << g << "张" << endl;

	}
	if (i)
	{
		cout << "10元 : " << i << "张" << endl;

	}
	if (k)
	{
		cout << "5元  : " << k<< "张" << endl;

	}
	if (m)
	{
		cout << "1元  : " << m << "张" << endl;

	}
	if (n)
	{
		cout << "5角  : " << n << "张" << endl;

	}
	if (p)
	{
		cout << "1角  : " << p << "张" << endl;

	}
	if (r)
	{
		cout << "5分  : " << r << "张" << endl;

	}
	if (t)
	{
		cout << "2分  : " << t << "张" << endl;

	}
	if (v)
	{
		cout << "1分  : " << v << "张" << endl;

	}
	return 0;

}