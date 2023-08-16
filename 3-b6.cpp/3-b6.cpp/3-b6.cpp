/* 2150265 ĞÅ09 Íõ¼Óì¿ */
#include<iostream>
#include<iomanip>
using namespace std;


int main()
{ 
	
	
	double num1, num2;
	long long int num3;
	int a, b, c, d, e, f, g, h, i, j, k, l, num4;
	cout << "ÇëÊäÈëÒ»¸ö[0-100ÒÚ)Ö®¼äµÄÊı×Ö:" << endl;
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
			cout << "Ê°";
			break;
		case 2:
			cout << "·¡Ê°";
			break;
		case 3:
			cout << "ÈşÊ°";
			break;
		case 4:
			cout << "ËÁÊ°";
			break;
		case 5:
			cout << "ÎéÊ°";
			break;
		case 6:
			cout << "Â½Ê°";
			break;
		case 7:
			cout << "ÆâÊ°";
			break;
		case 8:
			cout << "°ÆÊ°";
			break;
		case 9:
			cout << "¾ÁÊ°";
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
				cout << "ÒÚ";
				break;
			}
			break;
		case 1:
			cout << "Ò¼ÒÚ";
			break;
		case 2:
			cout << "·¡ÒÚ";
			break;
		case 3:
			cout << "ÈşÒÚ";
			break;
		case 4:
			cout << "ËÁÒÚ";
			break;
		case 5:
			cout << "ÎéÒÚ";
			break;
		case 6:
			cout << "Â½ÒÚ";
			break;
		case 7:
			cout << "ÆâÒÚ";
			break;
		case 8:
			cout << "°ÆÒÚ";
			break;
		case 9:
			cout << "¾ÁÒÚ";
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
				cout << "Áã";
				break;
			break;
		case 1:
			cout << "Ò¼Çª";
			break;
		case 2:
			cout << "·¡Çª";
			break;
		case 3:
			cout << "ÈşÇª";
			break;
		case 4:
			cout << "ËÁÇª";
			break;
		case 5:
			cout << "ÎéÇª";
			break;
		case 6:
			cout << "Â½Çª";
			break;
		case 7:
			cout << "ÆâÇª";
			break;
		case 8:
			cout << "°ÆÇª";
			break;
		case 9:
			cout << "¾ÁÇª";
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
				cout << "Áã";
				break;
			}
			break;
		case 1:
			cout << "Ò¼°Û";
			break;
		case 2:
			cout << "·¡°Û";
			break;
		case 3:
			cout << "Èş°Û";
			break;
		case 4:
			cout << "ËÁ°Û";
			break;
		case 5:
			cout << "Îé°Û";
			break;
		case 6:
			cout << "Â½°Û";
			break;
		case 7:
			cout << "Æâ°Û";
			break;
		case 8:
			cout << "°Æ°Û";
			break;
		case 9:
			cout << "¾Á°Û";
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
				cout << "Áã";
				break;
			}
			break;
		case 1:
			cout << "Ò¼Ê°";
			break;
		case 2:
			cout << "·¡Ê°";
			break;
		case 3:
			cout << "ÈşÊ°";
			break;
		case 4:
			cout << "ËÁÊ°";
			break;
		case 5:
			cout << "ÎéÊ°";
			break;
		case 6:
			cout << "Â½Ê°";
			break;
		case 7:
			cout << "ÆâÊ°";
			break;
		case 8:
			cout << "°ÆÊ°";
			break;
		case 9:
			cout << "¾ÁÊ°";
			break;

	}
	switch (g)
	{
		case 0:
			if ((i != 0) || (j != 0) || (h != 0))
			{
				cout << "Íò";
			}
			if((i==0)&&(j==0)&&(h==0))
			{
				break;
			}
			break;
		case 1:
			cout << "Ò¼Íò";
			break;
		case 2:
			cout << "·¡Íò";
			break;
		case 3:
			cout << "ÈşÍò";
			break;
		case 4:
			cout << "ËÁÍò";
			break;
		case 5:
			cout << "ÎéÍò";
			break;
		case 6:
			cout << "Â½Íò";
			break;
		case 7:
			cout << "ÆâÍò";
			break;
		case 8:
			cout << "°ÆÍò";
			break;
		case 9:
			cout << "¾ÁÍò";
			break;

	}

	switch (f)
	{
		case 0:
			if ((c == 0) && (d == 0) && (e == 0))
				break;
			else if ((c != 0) || (d != 0) || (e != 0))
				cout << "Áã";
				break;
			break;
		case 1:
			cout << "Ò¼Çª";
			break;
		case 2:
			cout << "·¡Çª";
			break;
		case 3:
			cout << "ÈşÇª";
			break;
		case 4:
			cout << "ËÁÇª";
			break;
		case 5:
			cout << "ÎéÇª";
			break;
		case 6:
			cout << "Â½Çª";
			break;
		case 7:
			cout << "ÆâÇª";
			break;
		case 8:
			cout << "°ÆÇª";
			break;
		case 9:
			cout << "¾ÁÇª";
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
				cout << "Áã";
				break;
			}
			break;
		case 1:
			cout << "Ò¼°Û";
			break;
		case 2:
			cout << "·¡°Û";
			break;
		case 3:
			cout << "Èş°Û";
			break;
		case 4:
			cout << "ËÁ°Û";
			break;
		case 5:
			cout << "Îé°Û";
			break;
		case 6:
			cout << "Â½°Û";
			break;
		case 7:
			cout << "Æâ°Û";
			break;
		case 8:
			cout << "°Æ°Û";
			break;
		case 9:
			cout << "¾Á°Û";
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
				cout << "Áã";
				break;
			}
			break;
		case 1:
			cout << "Ò¼Ê°";
			break;
		case 2:
			cout << "·¡Ê°";
			break;
		case 3:
			cout << "ÈşÊ°";
			break;
		case 4:
			cout << "ËÁÊ°";
			break;
		case 5:
			cout << "ÎéÊ°";
			break;
		case 6:
			cout << "Â½Ê°";
			break;
		case 7:
			cout << "ÆâÊ°";
			break;
		case 8:
			cout << "°ÆÊ°";
			break;
		case 9:
			cout << "¾ÁÊ°";
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
				cout << "Ô²";
				break;
			}
		case 1:
			cout << "Ò¼Ô²";
			break;
		case 2:
			cout << "·¡Ô²";
			break;
		case 3:
			cout << "ÈşÔ²";
			break;
		case 4:
			cout << "ËÁÔ²";
			break;
		case 5:
			cout << "ÎéÔ²";
			break;
		case 6:
			cout << "Â½Ô²";
			break;
		case 7:
			cout << "ÆâÔ²";
			break;
		case 8:
			cout << "°ÆÔ²";
			break;
		case 9:
			cout << "¾ÁÔ²";
			break;

	}
	switch (b)
	{
		case 0:
			if (a != 0)
				cout << "Áã";
			break;

		case 1:
			cout << "Ò¼½Ç";
			break;
		case 2:
			cout << "·¡½Ç";
			break;
		case 3:
			cout << "Èş½Ç";
			break;
		case 4:
			cout << "ËÁ½Ç";
			break;
		case 5:
			cout << "Îé½Ç";
			break;
		case 6:
			cout << "Â½½Ç";
			break;
		case 7:
			cout << "Æâ½Ç";
			break;
		case 8:
			cout << "°Æ½Ç";
			break;
		case 9:
			cout << "¾Á½Ç";
			break;

	}


	switch (a)
	{
		case 0:
			cout << "Õû" << endl;
			break;

		case 1:
			cout << "Ò¼·Ö"<<endl;
			break;
		case 2:
			cout << "·¡·Ö"<<endl;
			break;
		case 3:
			cout << "Èş·Ö"<<endl;
			break;
		case 4:
			cout << "ËÁ·Ö"<<endl;
			break;
		case 5:
			cout << "Îé·Ö"<<endl;
			break;
		case 6:
			cout << "Â½·Ö"<<endl;
			break;
		case 7:
			cout << "Æâ·Ö"<<endl;
			break;
		case 8:
			cout << "°Æ·Ö"<<endl;
			break;
		case 9:
			cout << "¾Á·Ö"<<endl;
			break;

	}
	
	return 0;
		
}