#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float q, t, r, u, x, x1, x2, n1, e1, w, tg, te;
	float p1 = 981, g = 9.794, l = 2.00e-3, b = 8.22e-3, P = 0.1013e6, d = 5.00e-3, n = 1.83e-5, c = 1.602e-19;
	cout << "�������½�ʱ��,����������ʱ�䣬����������ʱ�ĵ�ѹ:" << endl;
	cin >> tg >> te >> u;
	r = sqrt(9 * n * l / (2 * p1 * g * tg));
	x = sqrt((n * l) / (1 + b / (P * r)));
	q = ((18 * 3.14) / sqrt(2 * p1 * g)) * x * x * x * (d / u) * (1 / tg + 1 / te) * sqrt(1 / tg);
	n1 = q / (1.602e-19);
	if (n1 - int(n1) >= 0.5)
	{
		n1 = int(n1) + 1;
	}
	else if (n1 - int(n1) < 0.5 || n1 - int(n1) >= 0)
	{
		n1 = int(n1);
	}
	else
	{
		cout << "error";
	}
	e1 = q / n1;
	w = (e1 - c) / c;
	if (w < 0)
		w = 0 - w;
	else
		w = w;
	cout << "�뾶r=   " << r << endl;
	cout << "�͵δ�����q=   " << q << endl;
	cout << "�͵������������n=   " << n1 << endl;
	cout << "������ɴ�����e=   " << e1;
	printf("\n");
	printf("������=   %lf\n", w);
	return 0;
}