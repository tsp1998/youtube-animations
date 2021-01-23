//colorful ellipse
/*
Made by TSP 
Programmer
Email-tsp@outlook.in
*/
#include <stdlib.h>
#include <graphics.h>
#include <conio.h>
void anm();
void main()
{
	int gd = DETECT, gm;
	char ch;
	int bc, c;
	clrscr();
	initgraph(&gd, &gm, "C:\\TC\\BGI");
	while (!kbhit())
	{
		if (ch == '0')
			break;
		anm();
	}
	// Made_by_TSP
	closegraph();
}

void anm()
{
	int count = 0, temp;
	int max = 0, min, i, j, x = 320, y = 240, c, bc;
	cleardevice();
	setbkcolor(bc = rand() % 15 + 1);
	i = 10;
	while (1)
	{
		c = rand() % 15 + 1;
		if (c != bc)
			break;
	}
	temp = c;
	setcolor(c);
	while (i < 480)
	{
		line(0, 5 + i, 640, i + 5);
		i += 30;
	}
	i = 15;
	while (i < 640)
	{
		line(5 + i, 0, i + 5, 480);
		i += 30;
	}

	count = 0;
	while (1)
	{
		if (kbhit())
			break;

		x = (random(20) * 30) + 30;
		y = (random(15) * 30) + 30;
		// Made_by_TSP
		while (1)
		{
			c = random(time(0)) % 14 + 1;
			if (c != bc)
				break;
		}

		if (count >= 2000)
		{
			setcolor(bc);
			setfillstyle(1, bc);
			ellipse(5 + x, 0 + y, 0, 360, 10, 5);
			floodfill(5 + x, 0 + y, bc);
			//delay(1);
			if (count >= 4000)
				break;
		}
		else
		{
			setcolor(c);
			setfillstyle(1, c);
			ellipse(5 + x, 0 + y, 0, 360, 10, 5);
			floodfill(5 + x, 0 + y, c);
			delay(1);
		}
		count++;
	}
}
