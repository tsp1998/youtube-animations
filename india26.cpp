//Republic Day
/*
Made by TSP
Programmer
Email-tsp@outlook.in
*/
#include <dos.h>
#include <string.h>
#include <stdlib.h>
#include <graphics.h>
#include <conio.h>
int flag = 0;
void msg(int string, int mode, int x, int y, int color);
void pixel();
void star();
void anm2();
char tsp1[] = "Happy Republic Day";
char tsp2[] = "26th January 2018";
char tsp3[] = "Turbo Star";
int main()
{
	int gd = DETECT, gm;
	int x = 0, i;
	clrscr();
	initgraph(&gd, &gm, "C:\\TC\\BGI");
	anm2();
	closegraph();
	return 0;
}
void msg(int string, int mode, int x, int y, int color)
{
	char *tsp;
	switch (string)
	{
	case 1:
		strcpy(tsp, tsp1);
		break;
	case 2:
		strcpy(tsp, tsp2);
		break;
	case 3:
		strcpy(tsp, tsp3);
		break;
	}
	char tsp4[2] = {'\0'};
	settextstyle(4, 0, 5);
	setcolor(color);
	if (mode == 1)
	{
		for (int i = 0;; i++)
		{
			if (tsp[i] == '\0')
				break;
			x += 30;
			tsp4[0] = tsp[i];
			outtextxy(x, y, tsp4);
			delay(50);
		}
	}
	if (mode == 2)
	{
	}
}

void anm2()
{
	int count = 0;
	int i, j, x = 0, y = 0;
	int k = 0, color[3] = {12, 15, 10};
	int c, bc;
	clrscr();

	cleardevice();
	msg(1, 1, 40, 100, color[0]);
	msg(2, 1, 50, 200, color[1]);
	msg(3, 1, 150, 300, color[2]);
	msg(1, 1, 40, 100, 0);
	msg(2, 1, 50, 200, 0);
	msg(3, 1, 150, 300, 0);

	while (!kbhit())
	{
		if (kbhit())
			break;
		cleardevice();

		c = random(15) + 1;
		setcolor(c);

		star();

		pixel();
		pixel();
		count++;

		if (count == 1)
		{
			/*
msg(1,1,40,50,color[0]);
msg(2,1,50,200,color[1]);
msg(3,1,150,350,color[2]);
msg(1,1,40,50,0);
msg(2,1,50,200,0);
msg(3,1,150,350,0);
*/
			while (1)
			{
				while (1)
				{
					flag = 1;
					star();
					if (kbhit())
						break;
				}
				if (kbhit())
					break;
			}
		}

		if (kbhit())
			break;
	}

	getch();
	cleardevice();
}

void pixel()
{
	int k = 0, color[3] = {12, 15, 10}, x, y;
	putpixel(random(640), random(160), color[0]);
	putpixel(random(640), random(160), color[0]);
	y = random(320);
	if (y < 160)
		y += 160;
	putpixel(x = random(640), y, color[1]);
	y = random(320);
	if (y < 160)
		y += 160;
	if (y < 320)
		y += 160;
	putpixel(x = random(640), y, color[2]);
}

int count = 0;
void star()
{
	int x = 70, y = 50;
	int i1, j1, x1 = 0, y1 = 0;
	setcolor(1);
	//hr
	line(320, 240, 345, 240);
	line(320, 240, 295, 240);
	//vr
	line(320, 240, 320, 215);
	line(320, 240, 320, 265);

	/*
//slant front
line(320,240,330,230);
line(320,240,330,250);
//slant back
line(320,240,310,230);
line(320,240,310,250);
*/

	//slant front
	line(320, 240, 340, 220);
	line(320, 240, 340, 260);
	//slant back
	line(320, 240, 300, 220);
	line(320, 240, 300, 260);

	while (1)
	{
		for (i1 = 0; i1 < 15; i1++)
		{
			pixel();
			pixel();
			j1 = i1 / 2;
			setcolor(1);
			//hr
			line(320, 240, 355 - i1, 240 + i1);
			line(320, 240, 285 + i1, 240 + i1);

			line(320, 240, 355 - i1, 240 - i1);
			line(320, 240, 285 + i1, 240 - i1);
			//vr
			line(320, 240, 320 + i1, 205 + i1);
			line(320, 240, 320 + i1, 275 - i1);

			line(320, 240, 320 - i1, 205 + i1);
			line(320, 240, 320 - i1, 275 - i1);

			//slant front
			line(320, 240, 340 + j1, 220 + j1);
			line(320, 240, 340 + j1, 260 - j1);

			line(320, 240, 340 - j1, 220 - j1);
			line(320, 240, 340 - j1, 260 + j1);
			//slant back
			line(320, 240, 300 + j1, 220 + j1);
			line(320, 240, 300 + j1, 260 - j1);

			line(320, 240, 300 - j1, 220 + j1);
			line(320, 240, 300 - j1, 260 - j1);
			delay(50);

			pixel();
			pixel();

			setcolor(0);
			//hr
			line(320, 240, 355 - i1, 240 + i1);
			line(320, 240, 285 + i1, 240 + i1);

			line(320, 240, 355 - i1, 240 - i1);
			line(320, 240, 285 + i1, 240 - i1);
			//vr
			line(320, 240, 320 + i1, 205 + i1);
			line(320, 240, 320 + i1, 275 - i1);

			line(320, 240, 320 - i1, 205 + i1);
			line(320, 240, 320 - i1, 275 - i1);

			//slant front
			line(320, 240, 340 + j1, 220 + j1);
			line(320, 240, 340 + j1, 260 - j1);

			line(320, 240, 340 - j1, 220 - j1);
			line(320, 240, 340 - j1, 260 + j1);
			//slant back
			line(320, 240, 300 + j1, 220 + j1);
			line(320, 240, 300 + j1, 260 - j1);

			line(320, 240, 300 - j1, 220 + j1);
			line(320, 240, 300 - j1, 260 - j1);
			delay(1);
		}

		if (flag == 1)
		{
			setcolor(12);
			outtextxy(x + 70, y - 20, tsp1);
			delay(10);

			setcolor(15);
			outtextxy(x + 70, y + 150, tsp2);
			delay(10);

			setcolor(10);
			outtextxy(x + 150, y + 350, tsp3);
			delay(10);

			delay(50);
			setcolor(0);
			outtextxy(x + 70, y - 20, tsp1);
			delay(10);
			outtextxy(x + 70, y + 150, tsp2);
			delay(10);
			outtextxy(x + 150, y + 350, tsp3);
			delay(10);
			pixel();
			pixel();
		}
		if (kbhit())
			break;
		count++;
		if (count == 50)
			break;
	}
}