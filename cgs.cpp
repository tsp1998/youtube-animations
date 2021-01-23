/*
Made by TSP
*/

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <dos.h>
#include <graphics.h>
#include <conio.h>
#include <tsp.h>
char *string = " Happy Birthday Sir !";
void pixel();
void anm1();
void anm11(int r);
void anm2();

void font()
{
	int r, i = 0;
	char str[4] = {'\0'};
	while (i <= 15)
	{
		its(str, i);
		settextstyle(i, 0, 5);
		outtextxy(0, 0, str);
		outtextxy(0, 200, string);
		get
				clear
						i++;
	}
}

void load()
{
	char str[4] = {'\0'};
	int i;
	settextstyle(4, 0, 5);
	for (i = 1; i <= 500; i++)
	{
		its(str, i / 5);
		setcolor(15);
		line(70 + i, 250, 70 + i, 270);
		setcolor(15);
		outtextxy(230, 150, str);
		outtextxy(310, 150, "%");
		delay(5);
		setcolor(0);
		outtextxy(230, 150, str);
		if (kbhit())
			break;
	}
	setcolor(15);
	outtextxy(230, 150, str);
}
void main(int flag)
{
	char ch;
	int gd = DETECT, gm;
	clrscr();
	initgraph(&gd, &gm, "C:\\TC\\BGI");
	cleardevice();

	//   load();
	//get

	cleardevice();
	//   font();
	load();
	clear
	anm1();
	clear
	anm2();
	getch();
	cleardevice();
	closegraph();
}

void pixel()
{
	putpixel(random(640), random(480), random(15));
}

void anm1()
{
	unsigned int i, j;
	int count = 0;
	int count1 = 0;
	char tsp[2] = {'\0'};
	int x = 10, y = 200;
	i = 0;
	settextstyle(4, 0, 1);
	while (count1 <= 10000)
	{
		count1++;
		setcolor(random(15) + 1);
		if (i == strlen(string))
		{
			i = 0;
			x = 10;
			continue;
		}
		if (count == 100)
		{
			count = 0;
			cleardevice();
			unsigned int r = rand() % 10 + 1;
			//r=10;
			while (r >= 9)
			{
				anm11(r);
				r = rand() % 10 + 1;
				if (kbhit())
					exit(0);
			}
			if (r == 2)
				settextstyle(r, 0, 10);
			else
				settextstyle(r, 0, 5);
		}
		count++;

		tsp[0] = string[i];
		int i1 = 0;
		setcolor(random(15) + 1);
		outtextxy(x, y + i1, tsp);
		delay(1);
		setcolor(0);
		pixel();
		pixel();
		pixel();
		pixel();
		pixel();
		pixel();
		pixel();
		pixel();
		pixel();
		pixel();
		pixel();
		pixel();
		pixel();
		pixel();
		pixel();
		pixel();
		pixel();
		pixel();
		pixel();
		pixel();
		pixel();
		pixel();
		pixel();
		pixel();
		outtextxy(x, y + i1, tsp);
		delay(1);
		setcolor(random(15) + 1);
		outtextxy(x, y + i1, tsp);
		x += 30;

		i++;
		if (kbhit())
			break;
	}
}

void anm11(int r)
{
	unsigned int i, j;
	int count = 0;
	char tsp[2] = {'\0'};
	int x, y = -150;
	i = 0;
	settextstyle(r, 0, 7);
	while (!kbhit())
	{
		setcolor(random(15) + 1);
		if (i == strlen(string))
		{
			i = 0;
			x = 10;
			continue;
		}
		if (count == 50)
		{
			count = 0;
			clear return;
		}
		count++;

		tsp[0] = string[i];
		if (string[i] == 'H' || string[i] == 'S')
		{
			if (string[i - 1] == ' ')
			{
				y += 150;
				x = 150;
			}
		}
		else if (string[i] == 'B')
		{
			if (string[i - 1] == ' ')
			{
				y += 150;
				x = 50;
			}
		}
		int i1 = 0;
		setcolor(random(15) + 1);
		outtextxy(x, y + i1, tsp);
		delay(2);
		setcolor(0);
		pixel();
		pixel();
		pixel();
		pixel();
		pixel();
		pixel();
		pixel();
		pixel();
		pixel();
		pixel();
		pixel();
		pixel();
		pixel();
		pixel();
		pixel();
		pixel();
		pixel();
		pixel();
		pixel();
		pixel();
		pixel();
		pixel();
		pixel();
		pixel();
		outtextxy(x, y + i1, tsp);
		delay(2);
		setcolor(random(15) + 1);
		outtextxy(x, y + i1, tsp);
		x += 70;

		i++;
		if (kbhit())
			break;
	}
}

void anm2()
{
	unsigned int i, j;
	int count = 0;
	char tsp[2] = {'\0'};
	int x = -20, y = 200;
	i = 0;
	settextstyle(4, 0, 6);
	while (!kbhit())
	{
		setcolor(random(15) + 1);
		if (i == strlen(string))
		{
			i = 0;
			x = -25;
			continue;
		}
		if (count == 21)
		{
			count = 0;
			cleardevice();
			unsigned int r = rand() % 7 + 1;
			if (r == 2)
				settextstyle(r, 0, 10);
			else
				settextstyle(r, 0, 5);
		}
		count++;

		tsp[0] = string[i];
		y = 0;
		for (int i1 = 0; i1 < 200; i1++)
		{
			setcolor(random(15) + 1);
			if (count % 2 != 0)
				outtextxy(x, y + i1, tsp);
			else
				outtextxy(x, 480 - (y + i1), tsp);
			delay(0);
			setcolor(0);
			pixel();
			pixel();
			pixel();
			if (count % 2 != 0)
				outtextxy(x, y + i1, tsp);
			else
				outtextxy(x, 480 - (y + i1), tsp);
			delay(0);
			if (kbhit())
				break;
		}

		setcolor(random(15) + 1);
		outtextxy(x, y + i1, tsp);
		x += 35;

		i++;
		if (kbhit())
			break;
	}
}