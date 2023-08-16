#include<stdio.h>
#include<easyx.h>
int main()
{
	//创建窗口
	initgraph(640, 480, EW_SHOWCONSOLE);
	setlinecolor(YELLOW);
	setlinestyle(PS_SOLID, 5);
	//绘制一条直线
	line(0, 0, 640, 480);
	while (1)
	{
		ExMessage msg = { 0 };
		while (peekmessage(&msg, EM_MOUSE))
		{
			//判断是什么消息：左键，右键，按下，弹起
			switch (msg.message)
			{
				case WM_LBUTTONDOWN:
					break;
				case WM_LBUTTONUP:
					break;
				case 
			}
		};
	}
	getchar();//等待字符输入，防止闪退
	return 0;
}