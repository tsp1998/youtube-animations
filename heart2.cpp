/*
Valentine's Day animation
Made by TSP
*/
#include <constream.h>
#include <tsp.h>
#include <graphics.h>
#include <dos.h>
int xarray[24], yarray[24];
int xindex, yindex;
int i = 0, j = 0;
void gridshow();
void anm1();
void anm2();
void anm3();
void anm4();
void anm5();
int text()
{
	setcolor(0);
	line(215, 430, 215, 480);
	line(315, 430, 315, 480);
	line(415, 430, 415, 480);
	setcolor(random(15) + 1);
	outtextxy(160, 430, "Happy Valentine's Day");
	setcolor(0);
	outtextxy(160, 430, "Happy Valentine's Day");
	setcolor(random(15) + 1);
	outtextxy(160, 430, "Happy Valentine's Day");
}
int r()
{
	return (newRandom(2, 12));
}

int heart(int x, int y, int color, int style, int size)
{
	int factor = 2, scale = 10;
	setfillstyle(style, color);
	setcolor(color);

	line(320 + x, 350 + y - 50 - size, 232 + x + 45 + 2 * size, 265 + y - 6 + size);
	line(320 + x, 350 + y - 50 - size, 403 + x - 45 - 2 * size, 265 + y - 6 + size);

	arc(280 + x + 20 + size, 250 + y + size, 400, 2000, 50 / factor - size);
	arc(355 + x - 20 - size, 250 + y + size, 700, 500, 50 / factor - size);

	floodfill(280 + x, 250 + y, color);
	return 0;
}

void pixel()
{
	putpixel(random(640), random(480), random(15));
}

void grid()
{
	int y = newRandom(0, 6) * 100 + 30;
	int x = newRandom(0, 8) * 100 + 15;
	setcolor(random(14) + 1);
	line(x, 0, x, 480);
	setcolor(random(14) + 1);
	line(0, y, 640, y);
}

void grid2()
{
	int y = newRandom(0, 6) * 100 + 30;
	int x = newRandom(0, 8) * 100 + 15;
	setcolor(random(14) + 1);
	for (int i = 0; i < 480; i++)
		line(x, 0, x, 0 + i);
	setcolor(random(14) + 1);
	for (i = 0; i < 640; i++)
		line(0, y, 0 + i, y);
}

int main()
{
	int gd = DETECT, gm;
	initgraph(&gd, &gm, "c:\\tc\\bgi");
	cleardevice();
	i = 0;
	j = 0;
	settextstyle(4, 0, 4);
	while (!kbhit())
	{

		gridshow();
		br

		anm1();
		br

		anm2();
		br

		gridshow();
		br

		anm3();
		br

		anm4();
		br

		anm5();
		br
		main();
	}
}

void gridshow()
{
	int count = 0;
	while (count <= 10)
	{
		grid2();
		count++;
	}
	grid();
}

void anm1()
{
	int x = 50, y = 50, x1, y1, color;
heart1:
	//horizontal vertical random
	for (y1 = 0; y1 < 400; y1 += 100)
	{
		for (x1 = 0; x1 < 600; x1 += 100)
		{
			color = random(14) + 1;
			//	styles[counter]=r();
			grid();
			text();
			heart(xarray[i] = x1 - 250, yarray[j] = y1 - 180, color, r(), 0);
			i++;
			j++;
			pixel();
			if (kbhit())
				break;
		}
		delay(100);
		if (kbhit())
			break;
	}

	for (y1 = 30; y1 < 400; y1 += 100)
	{
		for (x1 = 0; x1 < 600; x1 += 1)
		{
			if (x1 % 100 == 0)
			{
				delay(200);
				x1 += 10;
			}
			if (x1 % 5 == 0)
				text();
			br
			pixel();
			setcolor(0);
			line(15 + x1, 10 + y1, 15 + x1, 95 + y1);
			delay(0);
		}
	}
}

void anm2()
{

	int count = 0;
heart2:
	while (count <= 2000)
	{
		count++;
		xindex = newRandom(0, 24);
		yindex = newRandom(0, 24);
		delay(0);
		if (count % 10 == 0)
			text();
		br int color = random(14) + 1;
		heart(xarray[xindex], yarray[yindex], color, r(), 0);
		pixel();
	}
}

void anm3()
{
	int x1, y1;
	int count = 0;
	i = 0;
	j = 0;
heart3:
	// vertical horizontal random
	for (x1 = 0; x1 < 600; x1 += 100)
	{
		for (y1 = 0; y1 < 400; y1 += 100)
		{
			int color = random(14) + 1;
			//	styles[counter]=r();
			grid();
			text();
			heart(xarray[i] = x1 - 250, yarray[j] = y1 - 180, color, r(), 0);
			i++;
			j++;
			pixel();
			if (kbhit())
				break;
		}
		delay(100);
		if (kbhit())
			break;
	}
}

void anm4()
{
	int x1, y1;
	setcolor(0);
	for (x1 = 0; x1 < 600; x1 += 100)
	{
		for (y1 = 0; y1 < 400; y1 += 1)
		{
			if (y1 % 100 == 0)
			{
				delay(200);
				y1 += 20;
			}
			br if (y1 % 5 == 0)
					text();
			pixel();
			setcolor(0);
			line(20 + x1, 20 + y1, 110 + x1, 20 + y1);
			delay(0);
		}
	}
}

void anm5()
{
	int count = 0;
heart4:
	while (count <= 2000)
	{
		count++;
		int xindex = newRandom(0, 24);
		int yindex = newRandom(0, 24);
		delay(1);
		if (count % 10 == 0)
			text();
		br int color = random(14) + 1;
		heart(xarray[xindex], yarray[yindex], color, r(), 0);
		pixel();
	}
}