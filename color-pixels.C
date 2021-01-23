//colorful Pixel Animation Made by TSP
/*
Made by TSP
Programmer
Email-tsp@outlook.in
*/
#include <stdlib.h>
#include <graphics.h>
#include <conio.h>
void anm(int font)
{
	int gd = DETECT, gm, i, j, x = 0, y = 0;
	int max = 0, min = 0;
	int c, bc;
	int refresh = 0;
	clrscr();
	initgraph(&gd, &gm, "C:\\TC\\BGI");
	while (!kbhit())
	{
		if (kbhit())
			break;
		cleardevice();
		while (!kbhit())
		{
			max = random(640);
			min = random(480);
			c = random(15) + 1;
			setcolor(c);
			settextstyle(font, 0, 10);
			outtextxy(150, 80, "Turbo");
			outtextxy(200, 220, "Star");
			line(0, 5 + min, 640, min + 5);
			line(5 + max, 0, max + 5, 480);
			outtextxy(150, 80, "Turbo");
			outtextxy(200, 220, "Star");
			//delay(1);
			refresh++;
			if (refresh == 100)
			{
				cleardevice();
				refresh = 0;
			}
			if (kbhit())
				break;
		}
		cleardevice();
	}
	closegraph();
}
void main()
{
	char ch;
	int font = 0;
	int f[5] = {1, 3, 4, 7, 8};
	while (1)
	{
		if (kbhit())
			break;
		anm(4);
	}
}