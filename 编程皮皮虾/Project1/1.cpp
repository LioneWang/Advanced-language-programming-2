#include<iostream>
#include<graphics.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<mmsystem.h>
#pragma comment(lib,"winmm.lib")
using namespace std;
IMAGE img;
IMAGE image[10];
IMAGE qh;
void loadingimage()
{
	loadimage(&img, "7.jpg");
	loadimage(&qh, "qh1.jpg");
	for (int i = 0; i < 10; i++)
	{
		char imgurl[50]=" ";
		sprintf_s(imgurl, "qh%d.jpg", i + 1);
		loadimage(&image[i], imgurl);
	}


}
struct bgshuxing
{
	int xx;
	int yy;
	int speed;
};
struct bgshuxing bg ={ 100, 0, 1 };
struct mingrenshuxing
{
	int x;
	int y;
	int speed;
};
struct mingrenshuxing mingren = { 100,50,10 };
void huamingren()
{

	putimage(mingren.x, mingren.y, &qh, SRCPAINT);
	
}
void huajineng()
{
	int i = 0;
	putimage(0, 0, 400, 100, &img, bg.xx, bg.yy);
	while (i < 10)
	{
		putimage(mingren.x, mingren.y, &image[i], SRCPAINT);
		
		Sleep(50);
		i++;
	}

}
void anjian()
{
	char userKey = _getch();
	switch (userKey)
	{
		case'A':
		case'a':
		case 75:
			bg.xx -= bg.speed;
			if (bg.xx <= 0)
			{
				bg.xx = 0;
			}
			break;
		case'd':
		case'D':
		case 77:
			bg.xx += bg.speed;	
			if (bg.xx >= 500-400)
			{
				bg.xx = 500-400;
			}
			break;
		case' ':
			huajineng();
			break;
		case 'W':
		case'w':
		{
			for (int i = 0; i < 30; i++)
			{
				bg.yy -= 1;
				Sleep(10);

				putimage(0, 0, 400, 307, &img, bg.xx, bg.yy);
				huamingren();
			}
		
			for (int i = 0; i < 30; i++)
			{
				bg.yy += 1;
				Sleep(10);

				putimage(0, 0, 400, 307, &img, bg.xx, bg.yy);
				huamingren();
			}
		
		}
			break;
		case 'S':
		case's':
			bg.yy += bg.speed;
			break;
		
	}
}

int main()
{
	
	loadingimage();
	initgraph(300, 207);
	mciSendString("open 1.mp3", 0, 0, 0);
	mciSendString("play 1.mp3 repeat", 0, 0, 0);
	while(1)
	{
		putimage(0, 0,400,307, &img,bg.xx,bg.yy);
		huamingren();
		anjian();
	}

	_getch();
	closegraph();
	return 0;
}