/* 215026 王加炜 济勤09班 */
#include <iostream>
using namespace std;

/* 可根据需要添加相应的内容 */

/***************************************************************************
  函数名称：
  功    能：输出大写的0~9
  输入参数：
  返 回 值：
  说    明：除本函数外，不允许任何函数中输出“零”-“玖”!!!!!!
***************************************************************************/
void daxie(int num, int flag_of_zero)
{
	/* 不允许对本函数做任何修改 */
	switch (num) {
	case 0:
		if (flag_of_zero)	//此标记什么意思请自行思考
			cout << "零";
		break;
	case 1:
		cout << "壹";
		break;
	case 2:
		cout << "贰";
		break;
	case 3:
		cout << "叁";
		break;
	case 4:
		cout << "肆";
		break;
	case 5:
		cout << "伍";
		break;
	case 6:
		cout << "陆";
		break;
	case 7:
		cout << "柒";
		break;
	case 8:
		cout << "捌";
		break;
	case 9:
		cout << "玖";
		break;
	default:
		cout << "error";
		break;
	}
}

/* 可根据需要自定义其它函数(也可以不定义) */

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int main()
{
	double num1, num2;
	long long int num3;
	int a, b, c, d, e, f, g, h, i, j, k, l, num4;
	cout << "请输入[0-100亿)之间的数字:" << endl;
	cin >> num1;
	cout << "大写结果是:" << endl;
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
		cout << "拾";
	daxie(k, k);
	if ((k!=0)||(l!=0))
		cout << "亿";
	//十亿到亿位
	
	
	if ((j == 0) && (i == 0) && (h == 0) && (g == 0))
		;
	else
		if ((l == 0) && (k == 0))
			daxie(j, 0);
		else
			daxie(j,1);
	if (j)
		cout << "仟";
	if (h == 0)
		daxie(i, i);
	else
		daxie(i, j);
	if(i)
		cout << "佰";
	if (g == 0)
		daxie(h, h);
	else
		if (j != 0)
			daxie(h, g);
		else
			daxie(h, i);
	if (h)
		cout << "拾";
	
	daxie(g, g);
	if ((j != 0) || (i != 0)||(h != 0) || (g != 0))
		cout << "万";
	//千万到万位
	if ((f == 0) && (e == 0) && (d == 0) && (c == 0))
		;
	else
		if ((j == 0) && (i == 0) && (h == 0) && (g == 0))
			daxie(f, 0);
		else
			daxie(f, 1);
	if (f)
		cout << "仟";
	if (d == 0)
		daxie(e, e);
	else
		daxie(e,f);
	if (e)
		cout << "佰";
	if (c == 0)
		daxie(d, d);
	else
		if (f != 0)
			daxie(d, c);
		else
			daxie(d, e);
	if (d)
		cout << "拾";

	daxie(c, c);
	if ((l == 0) && (k == 0) && (j == 0) && (i == 0) && (h == 0) && (g == 0) && (f == 0) && (e == 0) && (d == 0) && (c == 0) &&(b==0)&&(a==0))
		daxie(0, 1);
	if ((l == 0) && (k == 0) && (j == 0) && (i == 0) && (h == 0) && (g == 0) && (f == 0) && (e == 0) && (d == 0) && (c == 0) && ((a != 0) || (b != 0)))
		;
	else
		cout << "圆";
	if ((l == 0) && (k == 0) && (j == 0) && (i == 0) && (h == 0) && (g == 0) && (f == 0) && (e == 0) && (d == 0) && (c == 0))
		;
	else
		
		if((0 == b) && (0 == a))
			cout << "整";
	//千到个位


	
	daxie(b, a);
	if (b)
		cout << "角";
	if ((a == 0)&&(b!=0))
		cout << "整";
	daxie(a, a);
	if (a)
		cout << "分";
	


	cout << endl;
	//角到分位


	/* 按需完成 */
	return 0;
}
