//Binary Animation Made by TSP clocked 4
/*
Made by TSP 
Programmer
Email-tsp@outlook.in
*/

#include <graphics.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void main()
{
	int c[149] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 0, 2, 2, 3, 5, 6, 7, 9, 10, 11, 12, 13, 14, 15, 1, 4, 5, 6, 7, 8, 9, 10, 11, 14, 15, 0, 1, 4, 4, 5, 6, 8, 9, 10, 11, 14, 15, 0, 1, 3, 7, 10, 11, 13, 14, 15, 0, 1, 3, 7, 10, 11, 12, 13, 14, 15, 1, 7, 10, 11, 13, 14, 15, 0, 1, 2, 4, 5, 6, 8, 9, 10, 11, 14, 15, 0, 7, 10, 11, 13, 14, 15, 0, 7, 10, 11, 14, 15, 0, 1, 4, 5, 6, 8, 9, 0, 1, 4, 8, 0, 1, 4, 8, 10, 11, 14, 15, 0, 1, 8, 9, 11, 15, 0, 1, 3, 4, 5, 6, 8, 9, 12, 0, 1, 2, 3, 4, 5, 6, 8, 9, 12, 13, 0},
			bc[149] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 6, 6, 6, 6, 6, 6, 6, 6, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 8, 8, 8, 8, 8, 8, 8, 9, 9, 9, 9, 9, 9, 10, 10, 10, 10, 10, 10, 10, 11, 11, 11, 11, 12, 12, 12, 12, 12, 12, 12, 12, 13, 13, 13, 13, 13, 13, 14, 14, 14, 14, 14, 14, 14, 14, 14, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15};
	unsigned int r, count = 0, max, min;
	FILE *fp;
	int gd = DETECT, gm, i = 0, j = 0, x = 0, y = 0;
	char tsp[2] = {'0'};
	int i1 = 0, j1 = 0, i2, j2;
	clrscr();
	initgraph(&gd, &gm, "C:\\TC\\BGI");
	while (1)
	{
	re:
		if (kbhit())
			exit(0);
		r = random(149);
		i = c[r];
		j = bc[r];
		setbkcolor(j);
		count = 0;
		settextstyle(0, 0, 1);
		cleardevice();
		while (1)
		{
			while (1)
			{
				max = (rand() % 640 + 1) * 10;
				if (max <= 640 && max >= 0)
					break;
			}
			while (1)
			{
				min = (rand() % 480 + 1) * 10;
				if (min <= 480 && min >= 0)
					break;
			}
			setcolor(0);
			outtextxy(max, min, "1");
			outtextxy(max, min, "0");
			if (i == 0)
				setcolor(random(15) + 1);
			else
				setcolor(i);
			r = rand() % 2;
			tsp[0] = '0' + r;
			outtextxy(max, min, tsp);
			if (count == 5000)
				goto re;
			count++;
			delay(1);
			if (kbhit())
				exit(0);
		}
		cleardevice();
	}
	closegraph();
}