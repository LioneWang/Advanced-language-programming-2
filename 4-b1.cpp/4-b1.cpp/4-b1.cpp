/* 215026 ����� ����09�� */
#include <iostream>
using namespace std;

/* �ɸ�����Ҫ�����Ӧ������ */

/***************************************************************************
  �������ƣ�
  ��    �ܣ������д��0~9
  ���������
  �� �� ֵ��
  ˵    �������������⣬�������κκ�����������㡱-������!!!!!!
***************************************************************************/
void daxie(int num, int flag_of_zero)
{
	/* ������Ա��������κ��޸� */
	switch (num) {
	case 0:
		if (flag_of_zero)	//�˱��ʲô��˼������˼��
			cout << "��";
		break;
	case 1:
		cout << "Ҽ";
		break;
	case 2:
		cout << "��";
		break;
	case 3:
		cout << "��";
		break;
	case 4:
		cout << "��";
		break;
	case 5:
		cout << "��";
		break;
	case 6:
		cout << "½";
		break;
	case 7:
		cout << "��";
		break;
	case 8:
		cout << "��";
		break;
	case 9:
		cout << "��";
		break;
	default:
		cout << "error";
		break;
	}
}

/* �ɸ�����Ҫ�Զ�����������(Ҳ���Բ�����) */

/***************************************************************************
  �������ƣ�
  ��    �ܣ�
  ���������
  �� �� ֵ��
  ˵    ����
***************************************************************************/
int main()
{
	double num1, num2;
	long long int num3;
	int a, b, c, d, e, f, g, h, i, j, k, l, num4;
	cout << "������[0-100��)֮�������:" << endl;
	cin >> num1;
	cout << "��д�����:" << endl;
	num3 = static_cast<long long int>(num1 / 1);
	num2 = num1 - num3;
	num4 = static_cast<int>(100 * num2+0.01);
	a = static_cast<int>((num4 % 10) );
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

	daxie(l, l);
	if (l)
		cout << "ʰ";
	daxie(k, k);
	if ((k!=0)||(l!=0))
		cout << "��";
	//ʮ�ڵ���λ
	
	
	if ((j == 0) && (i == 0) && (h == 0) && (g == 0))
		;
	else
		if ((l == 0) && (k == 0))
			daxie(j, 0);
		else
			daxie(j,1);
	if (j)
		cout << "Ǫ";
	if (h == 0)
		daxie(i, i);
	else
		daxie(i, j);
	if(i)
		cout << "��";
	if (g == 0)
		daxie(h, h);
	else
		if (j != 0)
			daxie(h, g);
		else
			daxie(h, i);
	if (h)
		cout << "ʰ";
	
	daxie(g, g);
	if ((j != 0) || (i != 0)||(h != 0) || (g != 0))
		cout << "��";
	//ǧ����λ
	if ((f == 0) && (e == 0) && (d == 0) && (c == 0))
		;
	else
		if ((j == 0) && (i == 0) && (h == 0) && (g == 0))
			daxie(f, 0);
		else
			daxie(f, 1);
	if (f)
		cout << "Ǫ";
	if (d == 0)
		daxie(e, e);
	else
		daxie(e,f);
	if (e)
		cout << "��";
	if (c == 0)
		daxie(d, d);
	else
		if (f != 0)
			daxie(d, c);
		else
			daxie(d, e);
	if (d)
		cout << "ʰ";

	daxie(c, c);
	if ((l == 0) && (k == 0) && (j == 0) && (i == 0) && (h == 0) && (g == 0) && (f == 0) && (e == 0) && (d == 0) && (c == 0) &&(b==0)&&(a==0))
		daxie(0, 1);
	if ((l == 0) && (k == 0) && (j == 0) && (i == 0) && (h == 0) && (g == 0) && (f == 0) && (e == 0) && (d == 0) && (c == 0) && ((a != 0) || (b != 0)))
		;
	else
		cout << "Բ";
	if ((l == 0) && (k == 0) && (j == 0) && (i == 0) && (h == 0) && (g == 0) && (f == 0) && (e == 0) && (d == 0) && (c == 0))
		;
	else
		
		if((0 == b) && (0 == a))
			cout << "��";
	//ǧ����λ


	
	daxie(b, a);
	if (b)
		cout << "��";
	if ((a == 0)&&(b!=0))
		cout << "��";
	daxie(a, a);
	if (a)
		cout << "��";
	


	cout << endl;
	//�ǵ���λ


	/* ������� */
	return 0;
}
