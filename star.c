
#include <stdlib.h>
#include <stdio.h>
#include <graphics.h>
#include <conio.h>
int counter = 0;
int total = 0;
int check;
void star();
void star2();
void tsp()
{
	delay(0);
	if (check == 1)
		setcolor(random(15) + 1);
	if (kbhit())
		exit(0);
}
int xarray[100], yarray[100];
void main4()
{
	star2();
}
void main3()
{
	star();
}

void main2()
{
	int count = 0;
	unsigned int x, y;
	while (count < 20)
	{
		if (kbhit())
			break;
		x = time(0) + rand();
		y = time(0) + rand();
		x %= 570;
		y %= 420;
		total++;
		//printf("%d",total);
		if (total == 50)
			main3();
		anmr(x + 30, y + 30, count++);
		if (kbhit())
			break;
	}
}

int anmr(int x, int y, int count)
{
	int i, j, i1, j1, k = 0;
	unsigned int r = random(count);
	counter = 0;

	xarray[count] = x;
	yarray[count] = y;
	count++;
	while (counter <= 1)
	{
		if (kbhit())
			break;
		for (i = 0; i < count; i++)
		{
			if (kbhit())
				break;
			for (i1 = 0; i1 < 15; i1++)
			{
				if (kbhit())
					break;
				r = random(count);
				j1 = i1 / 2;
				setcolor(random(15) + 1);
				//hr
				line(xarray[r], yarray[r], xarray[r] + 35 - i1, yarray[r] + i1);
				line(xarray[r], yarray[r], xarray[r] - 35 + i1, yarray[r] + i1);

				line(xarray[r], yarray[r], xarray[r] + 35 - i1, yarray[r] - i1);
				line(xarray[r], yarray[r], xarray[r] - 35 + i1, yarray[r] - i1);
				//vr
				line(xarray[r], yarray[r], xarray[r] + i1, yarray[r] - 35 + i1);
				line(xarray[r], yarray[r], xarray[r] + i1, yarray[r] + 35 - i1);

				line(xarray[r], yarray[r], xarray[r] - i1, yarray[r] - 35 + i1);
				line(xarray[r], yarray[r], xarray[r] - i1, yarray[r] + 35 - i1);

				//slant front
				line(xarray[r], yarray[r], xarray[r] + 20 + j1, yarray[r] - 20 + j1);
				line(xarray[r], yarray[r], xarray[r] + 20 + j1, yarray[r] + 20 - j1);

				line(xarray[r], yarray[r], xarray[r] + 20 - j1, yarray[r] - 20 - j1);
				line(xarray[r], yarray[r], xarray[r] + 20 - j1, yarray[r] + 20 + j1);
				//slant back
				line(xarray[r], yarray[r], xarray[r] - 20 + j1, yarray[r] - 20 + j1);
				line(xarray[r], yarray[r], xarray[r] - 20 + j1, yarray[r] + 20 - j1);

				line(xarray[r], yarray[r], xarray[r] - 20 - j1, yarray[r] - 20 + j1);
				line(xarray[r], yarray[r], xarray[r] - 20 - j1, yarray[r] + 20 - j1);
				delay(2);

				//pixarray[r]el();pixarray[r]el();

				setcolor(0);
				//hr
				line(xarray[r], yarray[r], xarray[r] + 35 - i1, yarray[r] + i1);
				line(xarray[r], yarray[r], xarray[r] - 35 + i1, yarray[r] + i1);

				line(xarray[r], yarray[r], xarray[r] + 35 - i1, yarray[r] - i1);
				line(xarray[r], yarray[r], xarray[r] - 35 + i1, yarray[r] - i1);
				//vr
				line(xarray[r], yarray[r], xarray[r] + i1, yarray[r] - 35 + i1);
				line(xarray[r], yarray[r], xarray[r] + i1, yarray[r] + 35 - i1);

				line(xarray[r], yarray[r], xarray[r] - i1, yarray[r] - 35 + i1);
				line(xarray[r], yarray[r], xarray[r] - i1, yarray[r] + 35 - i1);

				//slant front
				line(xarray[r], yarray[r], xarray[r] + 20 + j1, yarray[r] - 20 + j1);
				line(xarray[r], yarray[r], xarray[r] + 20 + j1, yarray[r] + 20 - j1);

				line(xarray[r], yarray[r], xarray[r] + 20 - j1, yarray[r] - 20 - j1);
				line(xarray[r], yarray[r], xarray[r] + 20 - j1, yarray[r] + 20 + j1);
				//slant back
				line(xarray[r], yarray[r], xarray[r] - 20 + j1, yarray[r] - 20 + j1);
				line(xarray[r], yarray[r], xarray[r] - 20 + j1, yarray[r] + 20 - j1);

				line(xarray[r], yarray[r], xarray[r] - 20 - j1, yarray[r] - 20 + j1);
				line(xarray[r], yarray[r], xarray[r] - 20 - j1, yarray[r] + 20 - j1);

				delay(2);

				if (kbhit())
					break;
			}
			if (kbhit())
				break;
			counter++;
		}
		if (kbhit())
			break;
	}
	if (total == 30)
		main2();
	return count;
}

void anm(int x, int y, int count)
{
	int i, j, i1, j1, k = 0;
	while (count <= 2)
	{
		//	puts("0");
		for (i1 = 0; i1 < 15; i1++)
		{
			//pixel();pixel();
			j1 = i1 / 2;
			setcolor(14);
			//hr
			line(x, y, x + 35 - i1, y + i1);
			line(x, y, x - 35 + i1, y + i1);

			line(x, y, x + 35 - i1, y - i1);
			line(x, y, x - 35 + i1, y - i1);
			//vr
			line(x, y, x + i1, y - 35 + i1);
			line(x, y, x + i1, y + 35 - i1);

			line(x, y, x - i1, y - 35 + i1);
			line(x, y, x - i1, y + 35 - i1);

			//slant front
			line(x, y, x + 20 + j1, y - 20 + j1);
			line(x, y, x + 20 + j1, y + 20 - j1);

			line(x, y, x + 20 - j1, y - 20 - j1);
			line(x, y, x + 20 - j1, y + 20 + j1);
			//slant back
			line(x, y, x - 20 + j1, y - 20 + j1);
			line(x, y, x - 20 + j1, y + 20 - j1);

			line(x, y, x - 20 - j1, y - 20 + j1);
			line(x, y, x - 20 - j1, y + 20 - j1);
			delay(50);

			//pixel();pixel();

			setcolor(0);
			//hr
			line(x, y, x + 35 - i1, y + i1);
			line(x, y, x - 35 + i1, y + i1);

			line(x, y, x + 35 - i1, y - i1);
			line(x, y, x - 35 + i1, y - i1);
			//vr
			line(x, y, x + i1, y - 35 + i1);
			line(x, y, x + i1, y + 35 - i1);

			line(x, y, x - i1, y - 35 + i1);
			line(x, y, x - i1, y + 35 - i1);

			//slant front
			line(x, y, x + 20 + j1, y - 20 + j1);
			line(x, y, x + 20 + j1, y + 20 - j1);

			line(x, y, x + 20 - j1, y - 20 - j1);
			line(x, y, x + 20 - j1, y + 20 + j1);
			//slant back
			line(x, y, x - 20 + j1, y - 20 + j1);
			line(x, y, x - 20 + j1, y + 20 - j1);

			line(x, y, x - 20 - j1, y - 20 + j1);
			line(x, y, x - 20 - j1, y + 20 - j1);
			delay(50);
		}
		if (kbhit())
			break;
		count++;
	}

end:
}

void starline(int i1, int j1)
{
	int x = 70, y = 40;
	int h = 100;
	int x1 = x + 1 * h, x2 = x + 2 * h, x3 = x + 3 * h, x4 = x + 4 * h, x5 = x + 5 * h, x6 = x6, y1 = y + 1 * h, y2 = y + 2 * h, y3 = y + 3 * h, y4 = y + 4 * h;

pattern1:
	//hr
	tsp();
	line(x, y, x + 35 - i1, y + i1);

	tsp();
	line(x1, y, x1 + 35 - i1, y + i1);

	tsp();
	line(x2, y, x2 + 35 - i1, y + i1);

	tsp();
	line(x3, y, x3 + 35 - i1, y + i1);

	tsp();
	line(x4, y, x4 + 35 - i1, y + i1);

	tsp();
	line(x5, y, x5 + 35 - i1, y + i1);

	tsp();
	line(x, y, x + 35 - i1, y + i1);

	tsp();
	line(x, y1, x + 35 - i1, y1 + i1);

	tsp();
	line(x, y2, x + 35 - i1, y2 + i1);

	tsp();
	line(x, y3, x + 35 - i1, y3 + i1);

	tsp();
	line(x, y4, x + 35 - i1, y4 + i1);

	tsp();
	line(x, y, x - 35 + i1, y + i1);

	tsp();
	line(x1, y, x1 - 35 + i1, y + i1);

	tsp();
	line(x2, y, x2 - 35 + i1, y + i1);

	tsp();
	line(x3, y, x3 - 35 + i1, y + i1);

	tsp();
	line(x4, y, x4 - 35 + i1, y + i1);

	tsp();
	line(x5, y, x5 - 35 + i1, y + i1);

	tsp();
	line(x, y, x - 35 + i1, y + i1);

	tsp();
	line(x, y1, x - 35 + i1, y1 + i1);

	tsp();
	line(x, y2, x - 35 + i1, y2 + i1);

	tsp();
	line(x, y3, x - 35 + i1, y3 + i1);

	tsp();
	line(x, y4, x - 35 + i1, y4 + i1);

	tsp();
	line(x, y, x + 35 - i1, y - i1);

	tsp();
	line(x1, y, x1 + 35 - i1, y - i1);

	tsp();
	line(x2, y, x2 + 35 - i1, y - i1);

	tsp();
	line(x3, y, x3 + 35 - i1, y - i1);

	tsp();
	line(x4, y, x4 + 35 - i1, y - i1);

	tsp();
	line(x5, y, x5 + 35 - i1, y - i1);

	tsp();
	line(x, y, x + 35 - i1, y - i1);

	tsp();
	line(x, y1, x + 35 - i1, y1 - i1);

	tsp();
	line(x, y2, x + 35 - i1, y2 - i1);

	tsp();
	line(x, y3, x + 35 - i1, y3 - i1);

	tsp();
	line(x, y4, x + 35 - i1, y4 - i1);

	tsp();
	line(x, y, x - 35 + i1, y - i1);

	tsp();
	line(x1, y, x1 - 35 + i1, y - i1);

	tsp();
	line(x2, y, x2 - 35 + i1, y - i1);

	tsp();
	line(x3, y, x3 - 35 + i1, y - i1);

	tsp();
	line(x4, y, x4 - 35 + i1, y - i1);

	tsp();
	line(x5, y, x5 - 35 + i1, y - i1);

	tsp();
	line(x, y, x - 35 + i1, y - i1);

	tsp();
	line(x, y1, x - 35 + i1, y1 - i1);

	tsp();
	line(x, y2, x - 35 + i1, y2 - i1);

	tsp();
	line(x, y3, x - 35 + i1, y3 - i1);

	tsp();
	line(x, y4, x - 35 + i1, y4 - i1);

	//vr
	tsp();
	line(x, y, x + i1, y - 35 + i1);

	tsp();
	line(x1, y, x1 + i1, y - 35 + i1);

	tsp();
	line(x2, y, x2 + i1, y - 35 + i1);

	tsp();
	line(x3, y, x3 + i1, y - 35 + i1);

	tsp();
	line(x4, y, x4 + i1, y - 35 + i1);

	tsp();
	line(x5, y, x5 + i1, y - 35 + i1);

	tsp();
	line(x, y, x + i1, y - 35 + i1);

	tsp();
	line(x, y1, x + i1, y1 - 35 + i1);

	tsp();
	line(x, y2, x + i1, y2 - 35 + i1);

	tsp();
	line(x, y3, x + i1, y3 - 35 + i1);

	tsp();
	line(x, y4, x + i1, y4 - 35 + i1);

	tsp();
	line(x, y, x + i1, y + 35 - i1);

	tsp();
	line(x1, y, x1 + i1, y + 35 - i1);

	tsp();
	line(x2, y, x2 + i1, y + 35 - i1);

	tsp();
	line(x3, y, x3 + i1, y + 35 - i1);

	tsp();
	line(x4, y, x4 + i1, y + 35 - i1);

	tsp();
	line(x5, y, x5 + i1, y + 35 - i1);

	tsp();
	line(x, y, x + i1, y + 35 - i1);

	tsp();
	line(x, y1, x + i1, y1 + 35 - i1);

	tsp();
	line(x, y2, x + i1, y2 + 35 - i1);

	tsp();
	line(x, y3, x + i1, y3 + 35 - i1);

	tsp();
	line(x, y4, x + i1, y4 + 35 - i1);

	tsp();
	line(x, y, x - i1, y - 35 + i1);

	tsp();
	line(x1, y, x1 - i1, y - 35 + i1);

	tsp();
	line(x2, y, x2 - i1, y - 35 + i1);

	tsp();
	line(x3, y, x3 - i1, y - 35 + i1);

	tsp();
	line(x4, y, x4 - i1, y - 35 + i1);

	tsp();
	line(x5, y, x5 - i1, y - 35 + i1);

	tsp();
	line(x, y, x - i1, y - 35 + i1);

	tsp();
	line(x, y1, x - i1, y1 - 35 + i1);

	tsp();
	line(x, y2, x - i1, y2 - 35 + i1);

	tsp();
	line(x, y3, x - i1, y3 - 35 + i1);

	tsp();
	line(x, y4, x - i1, y4 - 35 + i1);

	tsp();
	line(x, y, x - i1, y + 35 - i1);

	tsp();
	line(x1, y, x1 - i1, y + 35 - i1);

	tsp();
	line(x2, y, x2 - i1, y + 35 - i1);

	tsp();
	line(x3, y, x3 - i1, y + 35 - i1);

	tsp();
	line(x4, y, x4 - i1, y + 35 - i1);

	tsp();
	line(x5, y, x5 - i1, y + 35 - i1);

	tsp();
	line(x, y, x - i1, y + 35 - i1);

	tsp();
	line(x, y1, x - i1, y1 + 35 - i1);

	tsp();
	line(x, y2, x - i1, y2 + 35 - i1);

	tsp();
	line(x, y3, x - i1, y3 + 35 - i1);

	tsp();
	line(x, y4, x - i1, y4 + 35 - i1);

	//slant front
	//hr
	tsp();
	line(x, y, x + 20 + j1, y - 20 + j1);

	tsp();
	line(x1, y, x1 + 20 + j1, y - 20 + j1);

	tsp();
	line(x2, y, x2 + 20 + j1, y - 20 + j1);

	tsp();
	line(x3, y, x3 + 20 + j1, y - 20 + j1);

	tsp();
	line(x4, y, x4 + 20 + j1, y - 20 + j1);

	tsp();
	line(x5, y, x5 + 20 + j1, y - 20 + j1);
	//6,y,x6+20+j1,y-20+j1);
	//vr
	tsp();
	line(x, y, x + 20 + j1, y - 20 + j1);

	tsp();
	line(x, y1, x + 20 + j1, y1 - 20 + j1);

	tsp();
	line(x, y2, x + 20 + j1, y2 - 20 + j1);

	tsp();
	line(x, y3, x + 20 + j1, y3 - 20 + j1);

	tsp();
	line(x, y4, x + 20 + j1, y4 - 20 + j1);

	tsp();
	line(x, y, x + 20 + j1, y + 20 - j1);

	tsp();
	line(x1, y, x1 + 20 + j1, y + 20 - j1);

	tsp();
	line(x2, y, x2 + 20 + j1, y + 20 - j1);

	tsp();
	line(x3, y, x3 + 20 + j1, y + 20 - j1);

	tsp();
	line(x4, y, x4 + 20 + j1, y + 20 - j1);

	tsp();
	line(x5, y, x5 + 20 + j1, y + 20 - j1);
	//6,y,x6+20+j1,y+20-j1);

	tsp();
	line(x, y, x + 20 + j1, y + 20 - j1);

	tsp();
	line(x, y1, x + 20 + j1, y1 + 20 - j1);

	tsp();
	line(x, y2, x + 20 + j1, y2 + 20 - j1);

	tsp();
	line(x, y3, x + 20 + j1, y3 + 20 - j1);

	tsp();
	line(x, y4, x + 20 + j1, y4 + 20 - j1);

	tsp();
	line(x, y, x + 20 - j1, y - 20 - j1);

	tsp();
	line(x1, y, x1 + 20 - j1, y - 20 - j1);

	tsp();
	line(x2, y, x2 + 20 - j1, y - 20 - j1);

	tsp();
	line(x3, y, x3 + 20 - j1, y - 20 - j1);

	tsp();
	line(x4, y, x4 + 20 - j1, y - 20 - j1);

	tsp();
	line(x5, y, x5 + 20 - j1, y - 20 - j1);
	//6,y,x6+20-j1,y-20-j1);

	tsp();
	line(x, y, x + 20 - j1, y - 20 - j1);

	tsp();
	line(x, y1, x + 20 - j1, y1 - 20 - j1);

	tsp();
	line(x, y2, x + 20 - j1, y2 - 20 - j1);

	tsp();
	line(x, y3, x + 20 - j1, y3 - 20 - j1);

	tsp();
	line(x, y4, x + 20 - j1, y4 - 20 - j1);

	tsp();
	line(x, y, x + 20 - j1, y + 20 + j1);

	tsp();
	line(x1, y, x1 + 20 - j1, y + 20 + j1);

	tsp();
	line(x2, y, x2 + 20 - j1, y + 20 + j1);

	tsp();
	line(x3, y, x3 + 20 - j1, y + 20 + j1);

	tsp();
	line(x4, y, x4 + 20 - j1, y + 20 + j1);

	tsp();
	line(x5, y, x5 + 20 - j1, y + 20 + j1);
	//6,y,x6+20-j1,y+20+j1);

	tsp();
	line(x, y, x + 20 - j1, y + 20 + j1);

	tsp();
	line(x, y1, x + 20 - j1, y1 + 20 + j1);

	tsp();
	line(x, y2, x + 20 - j1, y2 + 20 + j1);

	tsp();
	line(x, y3, x + 20 - j1, y3 + 20 + j1);

	tsp();
	line(x, y4, x + 20 - j1, y4 + 20 + j1);

	//slant back
	tsp();
	line(x, y, x - 20 + j1, y - 20 - j1);

	tsp();
	line(x1, y, x1 - 20 + j1, y - 20 - j1);

	tsp();
	line(x2, y, x2 - 20 + j1, y - 20 - j1);

	tsp();
	line(x3, y, x3 - 20 + j1, y - 20 - j1);

	tsp();
	line(x4, y, x4 - 20 + j1, y - 20 - j1);

	tsp();
	line(x5, y, x5 - 20 + j1, y - 20 - j1);
	//6,y,x6-20+j1,y-20+j1);

	tsp();
	line(x, y, x - 20 + j1, y - 20 - j1);

	tsp();
	line(x, y1, x - 20 + j1, y1 - 20 - j1);

	tsp();
	line(x, y2, x - 20 + j1, y2 - 20 - j1);

	tsp();
	line(x, y3, x - 20 + j1, y3 - 20 - j1);

	tsp();
	line(x, y4, x - 20 + j1, y4 - 20 - j1);

	tsp();
	line(x, y, x - 20 + j1, y + 20 + j1);

	tsp();
	line(x1, y, x1 - 20 + j1, y + 20 + j1);

	tsp();
	line(x2, y, x2 - 20 + j1, y + 20 + j1);

	tsp();
	line(x3, y, x3 - 20 + j1, y + 20 + j1);

	tsp();
	line(x4, y, x4 - 20 + j1, y + 20 + j1);

	tsp();
	line(x5, y, x5 - 20 + j1, y + 20 + j1);
	//6,y,x6-20+j1,y+20-j1);

	tsp();
	line(x, y, x - 20 + j1, y + 20 + j1);

	tsp();
	line(x, y1, x - 20 + j1, y1 + 20 + j1);

	tsp();
	line(x, y2, x - 20 + j1, y2 + 20 + j1);

	tsp();
	line(x, y3, x - 20 + j1, y3 + 20 + j1);

	tsp();
	line(x, y4, x - 20 + j1, y4 + 20 + j1);

	tsp();
	line(x, y, x - 20 - j1, y - 20 + j1);

	tsp();
	line(x1, y, x1 - 20 - j1, y - 20 + j1);

	tsp();
	line(x2, y, x2 - 20 - j1, y - 20 + j1);

	tsp();
	line(x3, y, x3 - 20 - j1, y - 20 + j1);

	tsp();
	line(x4, y, x4 - 20 - j1, y - 20 + j1);

	tsp();
	line(x5, y, x5 - 20 - j1, y - 20 + j1);
	//6,y,x6-20-j1,y-20+j1);

	tsp();
	line(x, y, x - 20 - j1, y - 20 + j1);

	tsp();
	line(x, y1, x - 20 - j1, y1 - 20 + j1);

	tsp();
	line(x, y2, x - 20 - j1, y2 - 20 + j1);

	tsp();
	line(x, y3, x - 20 - j1, y3 - 20 + j1);

	tsp();
	line(x, y4, x - 20 - j1, y4 - 20 + j1);

	tsp();
	line(x, y, x - 20 - j1, y + 20 - j1);

	tsp();
	line(x1, y, x1 - 20 - j1, y + 20 - j1);

	tsp();
	line(x2, y, x2 - 20 - j1, y + 20 - j1);

	tsp();
	line(x3, y, x3 - 20 - j1, y + 20 - j1);

	tsp();
	line(x4, y, x4 - 20 - j1, y + 20 - j1);

	tsp();
	line(x5, y, x5 - 20 - j1, y + 20 - j1);
	//6,y,x6-20-j1,y+20-j1);

	tsp();
	line(x, y, x - 20 - j1, y + 20 - j1);

	tsp();
	line(x, y1, x - 20 - j1, y1 + 20 - j1);

	tsp();
	line(x, y2, x - 20 - j1, y2 + 20 - j1);

	tsp();
	line(x, y3, x - 20 - j1, y3 + 20 - j1);

	tsp();
	line(x, y4, x - 20 - j1, y4 + 20 - j1);

pattern2:
	tsp();
	line(x1, y1, x1 + 35 - i1, y1 + i1);

	tsp();
	line(x2, y1, x2 + 35 - i1, y1 + i1);

	tsp();
	line(x3, y1, x3 + 35 - i1, y1 + i1);

	tsp();
	line(x4, y1, x4 + 35 - i1, y1 + i1);

	tsp();
	line(x5, y1, x5 + 35 - i1, y1 + i1);

	tsp();
	line(x1, y1, x1 + 35 - i1, y1 + i1);

	tsp();
	line(x1, y2, x1 + 35 - i1, y2 + i1);

	tsp();
	line(x1, y3, x1 + 35 - i1, y3 + i1);

	tsp();
	line(x1, y4, x1 + 35 - i1, y4 + i1);

	tsp();
	line(x1, y1, x1 - 35 + i1, y1 + i1);

	tsp();
	line(x2, y1, x2 - 35 + i1, y1 + i1);

	tsp();
	line(x3, y1, x3 - 35 + i1, y1 + i1);

	tsp();
	line(x4, y1, x4 - 35 + i1, y1 + i1);

	tsp();
	line(x5, y1, x5 - 35 + i1, y1 + i1);

	tsp();
	line(x1, y1, x1 - 35 + i1, y1 + i1);

	tsp();
	line(x1, y2, x1 - 35 + i1, y2 + i1);

	tsp();
	line(x1, y3, x1 - 35 + i1, y3 + i1);

	tsp();
	line(x1, y4, x1 - 35 + i1, y4 + i1);

	tsp();
	line(x1, y1, x1 + 35 - i1, y1 - i1);

	tsp();
	line(x2, y1, x2 + 35 - i1, y1 - i1);

	tsp();
	line(x3, y1, x3 + 35 - i1, y1 - i1);

	tsp();
	line(x4, y1, x4 + 35 - i1, y1 - i1);

	tsp();
	line(x5, y1, x5 + 35 - i1, y1 - i1);

	tsp();
	line(x1, y1, x1 + 35 - i1, y1 - i1);

	tsp();
	line(x1, y2, x1 + 35 - i1, y2 - i1);

	tsp();
	line(x1, y3, x1 + 35 - i1, y3 - i1);

	tsp();
	line(x1, y4, x1 + 35 - i1, y4 - i1);

	tsp();
	line(x1, y1, x1 - 35 + i1, y1 - i1);

	tsp();
	line(x2, y1, x2 - 35 + i1, y1 - i1);

	tsp();
	line(x3, y1, x3 - 35 + i1, y1 - i1);

	tsp();
	line(x4, y1, x4 - 35 + i1, y1 - i1);

	tsp();
	line(x5, y1, x5 - 35 + i1, y1 - i1);

	tsp();
	line(x1, y1, x1 - 35 + i1, y1 - i1);

	tsp();
	line(x1, y2, x1 - 35 + i1, y2 - i1);

	tsp();
	line(x1, y3, x1 - 35 + i1, y3 - i1);

	tsp();
	line(x1, y4, x1 - 35 + i1, y4 - i1);

	//vr
	tsp();
	line(x1, y1, x1 + i1, y1 - 35 + i1);

	tsp();
	line(x2, y1, x2 + i1, y1 - 35 + i1);

	tsp();
	line(x3, y1, x3 + i1, y1 - 35 + i1);

	tsp();
	line(x4, y1, x4 + i1, y1 - 35 + i1);

	tsp();
	line(x5, y1, x5 + i1, y1 - 35 + i1);

	tsp();
	line(x1, y1, x1 + i1, y1 - 35 + i1);

	tsp();
	line(x1, y2, x1 + i1, y2 - 35 + i1);

	tsp();
	line(x1, y3, x1 + i1, y3 - 35 + i1);

	tsp();
	line(x1, y4, x1 + i1, y4 - 35 + i1);

	tsp();
	line(x1, y1, x1 + i1, y1 + 35 - i1);

	tsp();
	line(x2, y1, x2 + i1, y1 + 35 - i1);

	tsp();
	line(x3, y1, x3 + i1, y1 + 35 - i1);

	tsp();
	line(x4, y1, x4 + i1, y1 + 35 - i1);

	tsp();
	line(x5, y1, x5 + i1, y1 + 35 - i1);

	tsp();
	line(x1, y1, x1 + i1, y1 + 35 - i1);

	tsp();
	line(x1, y2, x1 + i1, y2 + 35 - i1);

	tsp();
	line(x1, y3, x1 + i1, y3 + 35 - i1);

	tsp();
	line(x1, y4, x1 + i1, y4 + 35 - i1);

	tsp();
	line(x1, y1, x1 - i1, y1 - 35 + i1);

	tsp();
	line(x2, y1, x2 - i1, y1 - 35 + i1);

	tsp();
	line(x3, y1, x3 - i1, y1 - 35 + i1);

	tsp();
	line(x4, y1, x4 - i1, y1 - 35 + i1);

	tsp();
	line(x5, y1, x5 - i1, y1 - 35 + i1);

	tsp();
	line(x1, y1, x1 - i1, y1 - 35 + i1);

	tsp();
	line(x1, y2, x1 - i1, y2 - 35 + i1);

	tsp();
	line(x1, y3, x1 - i1, y3 - 35 + i1);

	tsp();
	line(x1, y4, x1 - i1, y4 - 35 + i1);

	tsp();
	line(x1, y1, x1 - i1, y1 + 35 - i1);

	tsp();
	line(x2, y1, x2 - i1, y1 + 35 - i1);

	tsp();
	line(x3, y1, x3 - i1, y1 + 35 - i1);

	tsp();
	line(x4, y1, x4 - i1, y1 + 35 - i1);

	tsp();
	line(x5, y1, x5 - i1, y1 + 35 - i1);

	tsp();
	line(x1, y1, x1 - i1, y1 + 35 - i1);

	tsp();
	line(x1, y2, x1 - i1, y2 + 35 - i1);

	tsp();
	line(x1, y3, x1 - i1, y3 + 35 - i1);

	tsp();
	line(x1, y4, x1 - i1, y4 + 35 - i1);

	//slant front
	//hr
	tsp();
	line(x1, y1, x1 + 20 + j1, y1 - 20 + j1);

	tsp();
	line(x2, y1, x2 + 20 + j1, y1 - 20 + j1);

	tsp();
	line(x3, y1, x3 + 20 + j1, y1 - 20 + j1);

	tsp();
	line(x4, y1, x4 + 20 + j1, y1 - 20 + j1);

	tsp();
	line(x5, y1, x5 + 20 + j1, y1 - 20 + j1);

	//vr
	tsp();
	line(x1, y1, x1 + 20 + j1, y1 - 20 + j1);

	tsp();
	line(x1, y2, x1 + 20 + j1, y2 - 20 + j1);

	tsp();
	line(x1, y3, x1 + 20 + j1, y3 - 20 + j1);

	tsp();
	line(x1, y4, x1 + 20 + j1, y4 - 20 + j1);

	tsp();
	line(x1, y1, x1 + 20 + j1, y1 + 20 - j1);

	tsp();
	line(x2, y1, x2 + 20 + j1, y1 + 20 - j1);

	tsp();
	line(x3, y1, x3 + 20 + j1, y1 + 20 - j1);

	tsp();
	line(x4, y1, x4 + 20 + j1, y1 + 20 - j1);

	tsp();
	line(x5, y1, x5 + 20 + j1, y1 + 20 - j1);

	tsp();
	line(x1, y1, x1 + 20 + j1, y1 + 20 - j1);

	tsp();
	line(x1, y2, x1 + 20 + j1, y2 + 20 - j1);

	tsp();
	line(x1, y3, x1 + 20 + j1, y3 + 20 - j1);

	tsp();
	line(x1, y4, x1 + 20 + j1, y4 + 20 - j1);

	tsp();
	line(x1, y1, x1 + 20 - j1, y1 - 20 - j1);

	tsp();
	line(x2, y1, x2 + 20 - j1, y1 - 20 - j1);

	tsp();
	line(x3, y1, x3 + 20 - j1, y1 - 20 - j1);

	tsp();
	line(x4, y1, x4 + 20 - j1, y1 - 20 - j1);

	tsp();
	line(x5, y1, x5 + 20 - j1, y1 - 20 - j1);

	tsp();
	line(x1, y1, x1 + 20 - j1, y1 - 20 - j1);

	tsp();
	line(x1, y2, x1 + 20 - j1, y2 - 20 - j1);

	tsp();
	line(x1, y3, x1 + 20 - j1, y3 - 20 - j1);

	tsp();
	line(x1, y4, x1 + 20 - j1, y4 - 20 - j1);

	tsp();
	line(x1, y1, x1 + 20 - j1, y1 + 20 + j1);

	tsp();
	line(x2, y1, x2 + 20 - j1, y1 + 20 + j1);

	tsp();
	line(x3, y1, x3 + 20 - j1, y1 + 20 + j1);

	tsp();
	line(x4, y1, x4 + 20 - j1, y1 + 20 + j1);

	tsp();
	line(x5, y1, x5 + 20 - j1, y1 + 20 + j1);

	tsp();
	line(x1, y1, x1 + 20 - j1, y1 + 20 + j1);

	tsp();
	line(x1, y2, x1 + 20 - j1, y2 + 20 + j1);

	tsp();
	line(x1, y3, x1 + 20 - j1, y3 + 20 + j1);

	tsp();
	line(x1, y4, x1 + 20 - j1, y4 + 20 + j1);

	//slant back
	tsp();
	line(x1, y1, x1 - 20 + j1, y1 - 20 - j1);

	tsp();
	line(x2, y1, x2 - 20 + j1, y1 - 20 - j1);

	tsp();
	line(x3, y1, x3 - 20 + j1, y1 - 20 - j1);

	tsp();
	line(x4, y1, x4 - 20 + j1, y1 - 20 - j1);

	tsp();
	line(x5, y1, x5 - 20 + j1, y1 - 20 - j1);

	tsp();
	line(x1, y1, x1 - 20 + j1, y1 - 20 - j1);

	tsp();
	line(x1, y2, x1 - 20 + j1, y2 - 20 - j1);

	tsp();
	line(x1, y3, x1 - 20 + j1, y3 - 20 - j1);

	tsp();
	line(x1, y4, x1 - 20 + j1, y4 - 20 - j1);

	tsp();
	line(x1, y1, x1 - 20 + j1, y1 + 20 + j1);

	tsp();
	line(x2, y1, x2 - 20 + j1, y1 + 20 + j1);

	tsp();
	line(x3, y1, x3 - 20 + j1, y1 + 20 + j1);

	tsp();
	line(x4, y1, x4 - 20 + j1, y1 + 20 + j1);

	tsp();
	line(x5, y1, x5 - 20 + j1, y1 + 20 + j1);

	tsp();
	line(x1, y1, x1 - 20 + j1, y1 + 20 + j1);

	tsp();
	line(x1, y2, x1 - 20 + j1, y2 + 20 + j1);

	tsp();
	line(x1, y3, x1 - 20 + j1, y3 + 20 + j1);

	tsp();
	line(x1, y4, x1 - 20 + j1, y4 + 20 + j1);

	tsp();
	line(x1, y1, x1 - 20 - j1, y1 - 20 + j1);

	tsp();
	line(x2, y1, x2 - 20 - j1, y1 - 20 + j1);

	tsp();
	line(x3, y1, x3 - 20 - j1, y1 - 20 + j1);

	tsp();
	line(x4, y1, x4 - 20 - j1, y1 - 20 + j1);

	tsp();
	line(x5, y1, x5 - 20 - j1, y1 - 20 + j1);

	tsp();
	line(x1, y1, x1 - 20 - j1, y1 - 20 + j1);

	tsp();
	line(x1, y2, x1 - 20 - j1, y2 - 20 + j1);

	tsp();
	line(x1, y3, x1 - 20 - j1, y3 - 20 + j1);

	tsp();
	line(x1, y4, x1 - 20 - j1, y4 - 20 + j1);

	tsp();
	line(x1, y1, x1 - 20 - j1, y1 + 20 - j1);

	tsp();
	line(x2, y1, x2 - 20 - j1, y1 + 20 - j1);

	tsp();
	line(x3, y1, x3 - 20 - j1, y1 + 20 - j1);

	tsp();
	line(x4, y1, x4 - 20 - j1, y1 + 20 - j1);

	tsp();
	line(x5, y1, x5 - 20 - j1, y1 + 20 - j1);

	tsp();
	line(x1, y1, x1 - 20 - j1, y1 + 20 - j1);

	tsp();
	line(x1, y2, x1 - 20 - j1, y2 + 20 - j1);

	tsp();
	line(x1, y3, x1 - 20 - j1, y3 + 20 - j1);

	tsp();
	line(x1, y4, x1 - 20 - j1, y4 + 20 - j1);

pattern3:
	tsp();
	line(x2, y2, x2 + 35 - i1, y2 + i1);

	tsp();
	line(x3, y2, x3 + 35 - i1, y2 + i1);

	tsp();
	line(x4, y2, x4 + 35 - i1, y2 + i1);

	tsp();
	line(x5, y2, x5 + 35 - i1, y2 + i1);
	//5,y2,x6+35-i1,y2+i1);

	tsp();
	line(x2, y2, x2 + 35 - i1, y2 + i1);

	tsp();
	line(x2, y2 + h, x2 + 35 - i1, y2 + h + i1);

	tsp();
	line(x2, y3 + h, x2 + 35 - i1, y3 + h + i1);
	//1+h,y4+h,x2+35-i1,y4+h+i1);

	tsp();
	line(x2, y2, x2 - 35 + i1, y2 + i1);

	tsp();
	line(x3, y2, x3 - 35 + i1, y2 + i1);

	tsp();
	line(x4, y2, x4 - 35 + i1, y2 + i1);

	tsp();
	line(x5, y2, x5 - 35 + i1, y2 + i1);
	//5,y2,x5-35+i1,y2+i1);

	tsp();
	line(x2, y2, x2 - 35 + i1, y2 + i1);

	tsp();
	line(x2, y2 + h, x2 - 35 + i1, y2 + h + i1);

	tsp();
	line(x2, y3 + h, x2 - 35 + i1, y3 + h + i1);
	//1+h,y4+h,x2-35+i1,y4+h+i1);

	tsp();
	line(x2, y2, x2 + 35 - i1, y2 - i1);

	tsp();
	line(x3, y2, x3 + 35 - i1, y2 - i1);

	tsp();
	line(x4, y2, x4 + 35 - i1, y2 - i1);

	tsp();
	line(x5, y2, x5 + 35 - i1, y2 - i1);
	//5,y2,x5+35-i1,y2-i1);

	tsp();
	line(x2, y2, x2 + 35 - i1, y2 - i1);

	tsp();
	line(x2, y2 + h, x2 + 35 - i1, y2 + h - i1);

	tsp();
	line(x2, y3 + h, x2 + 35 - i1, y3 + h - i1);
	//1+h,y4+h,x2+35-i1,y4+h-i1);

	tsp();
	line(x2, y2, x2 - 35 + i1, y2 - i1);

	tsp();
	line(x3, y2, x3 - 35 + i1, y2 - i1);

	tsp();
	line(x4, y2, x4 - 35 + i1, y2 - i1);

	tsp();
	line(x5, y2, x5 - 35 + i1, y2 - i1);
	//5,y2,x5-35+i1,y2-i1);

	tsp();
	line(x2, y2, x2 - 35 + i1, y2 - i1);

	tsp();
	line(x2, y2 + h, x2 - 35 + i1, y2 + h - i1);

	tsp();
	line(x2, y3 + h, x2 - 35 + i1, y3 + h - i1);
	//1+h,y4+h,x2-35+i1,y4+h-i1);

	//vr
	tsp();
	line(x2, y2, x2 + i1, y2 - 35 + i1);

	tsp();
	line(x3, y2, x3 + i1, y2 - 35 + i1);

	tsp();
	line(x4, y2, x4 + i1, y2 - 35 + i1);

	tsp();
	line(x5, y2, x5 + i1, y2 - 35 + i1);
	//5,y2,x5+i1,y2-35+i1);

	tsp();
	line(x2, y2, x2 + i1, y2 - 35 + i1);

	tsp();
	line(x2, y2 + h, x2 + i1, y2 + h - 35 + i1);

	tsp();
	line(x2, y3 + h, x2 + i1, y3 + h - 35 + i1);
	//1+h,y4+h,x2+i1,y4+h-35+i1);

	tsp();
	line(x2, y2, x2 + i1, y2 + 35 - i1);

	tsp();
	line(x3, y2, x3 + i1, y2 + 35 - i1);

	tsp();
	line(x4, y2, x4 + i1, y2 + 35 - i1);

	tsp();
	line(x5, y2, x5 + i1, y2 + 35 - i1);
	//5,y2,x5+i1,y2+35-i1);

	tsp();
	line(x2, y2, x2 + i1, y2 + 35 - i1);

	tsp();
	line(x2, y2 + h, x2 + i1, y2 + h + 35 - i1);

	tsp();
	line(x2, y3 + h, x2 + i1, y3 + h + 35 - i1);
	//1+h,y4+h,x2+i1,y4+h+35-i1);

	tsp();
	line(x2, y2, x2 - i1, y2 - 35 + i1);

	tsp();
	line(x3, y2, x3 - i1, y2 - 35 + i1);

	tsp();
	line(x4, y2, x4 - i1, y2 - 35 + i1);

	tsp();
	line(x5, y2, x5 - i1, y2 - 35 + i1);
	//5,y2,x5-i1,y2-35+i1);

	tsp();
	line(x2, y2, x2 - i1, y2 - 35 + i1);

	tsp();
	line(x2, y2 + h, x2 - i1, y2 + h - 35 + i1);

	tsp();
	line(x2, y3 + h, x2 - i1, y3 + h - 35 + i1);
	//1+h,y4+h,x2-i1,y4+h-35+i1);

	tsp();
	line(x2, y2, x2 - i1, y2 + 35 - i1);

	tsp();
	line(x3, y2, x3 - i1, y2 + 35 - i1);

	tsp();
	line(x4, y2, x4 - i1, y2 + 35 - i1);

	tsp();
	line(x5, y2, x5 - i1, y2 + 35 - i1);
	//5,y2,x5-i1,y2+35-i1);

	tsp();
	line(x2, y2, x2 - i1, y2 + 35 - i1);

	tsp();
	line(x2, y2 + h, x2 - i1, y2 + h + 35 - i1);

	tsp();
	line(x2, y3 + h, x2 - i1, y3 + h + 35 - i1);
	//1+h,y4+h,x2-i1,y4+h+35-i1);

	//slant front
	//hr
	tsp();
	line(x2, y2, x2 + 20 + j1, y2 - 20 + j1);

	tsp();
	line(x3, y2, x3 + 20 + j1, y2 - 20 + j1);

	tsp();
	line(x4, y2, x4 + 20 + j1, y2 - 20 + j1);

	tsp();
	line(x5, y2, x5 + 20 + j1, y2 - 20 + j1);
	//5,y2,x5+20+j1,y2-20+j1);

	//vr
	tsp();
	line(x2, y2, x2 + 20 + j1, y2 - 20 + j1);

	tsp();
	line(x2, y2 + h, x2 + 20 + j1, y2 + h - 20 + j1);

	tsp();
	line(x2, y3 + h, x2 + 20 + j1, y3 + h - 20 + j1);
	//1+h,y4+h,x2+20+j1,y4+h-20+j1);

	tsp();
	line(x2, y2, x2 + 20 + j1, y2 + 20 - j1);

	tsp();
	line(x3, y2, x3 + 20 + j1, y2 + 20 - j1);

	tsp();
	line(x4, y2, x4 + 20 + j1, y2 + 20 - j1);

	tsp();
	line(x5, y2, x5 + 20 + j1, y2 + 20 - j1);
	//5,y2,x5+20+j1,y2+20-j1);

	tsp();
	line(x2, y2, x2 + 20 + j1, y2 + 20 - j1);

	tsp();
	line(x2, y2 + h, x2 + 20 + j1, y2 + h + 20 - j1);

	tsp();
	line(x2, y3 + h, x2 + 20 + j1, y3 + h + 20 - j1);
	//1+h,y4+h,x2+20+j1,y4+h+20-j1);

	tsp();
	line(x2, y2, x2 + 20 - j1, y2 - 20 - j1);

	tsp();
	line(x3, y2, x3 + 20 - j1, y2 - 20 - j1);

	tsp();
	line(x4, y2, x4 + 20 - j1, y2 - 20 - j1);

	tsp();
	line(x5, y2, x5 + 20 - j1, y2 - 20 - j1);
	//5,y2,x5+20-j1,y2-20-j1);

	tsp();
	line(x2, y2, x2 + 20 - j1, y2 - 20 - j1);

	tsp();
	line(x2, y2 + h, x2 + 20 - j1, y2 + h - 20 - j1);

	tsp();
	line(x2, y3 + h, x2 + 20 - j1, y3 + h - 20 - j1);
	//1+h,y4+h,x2+20-j1,y4+h-20-j1);

	tsp();
	line(x2, y2, x2 + 20 - j1, y2 + 20 + j1);

	tsp();
	line(x3, y2, x3 + 20 - j1, y2 + 20 + j1);

	tsp();
	line(x4, y2, x4 + 20 - j1, y2 + 20 + j1);

	tsp();
	line(x5, y2, x5 + 20 - j1, y2 + 20 + j1);
	//5,y2,x5+20-j1,y2+20+j1);

	tsp();
	line(x2, y2, x2 + 20 - j1, y2 + 20 + j1);

	tsp();
	line(x2, y2 + h, x2 + 20 - j1, y2 + h + 20 + j1);

	tsp();
	line(x2, y3 + h, x2 + 20 - j1, y3 + h + 20 + j1);
	//1+h,y4+h,x2+20-j1,y4+h+20+j1);

	//slant back
	tsp();
	line(x2, y2, x2 - 20 + j1, y2 - 20 - j1);

	tsp();
	line(x3, y2, x3 - 20 + j1, y2 - 20 - j1);

	tsp();
	line(x4, y2, x4 - 20 + j1, y2 - 20 - j1);

	tsp();
	line(x5, y2, x5 - 20 + j1, y2 - 20 - j1);
	//5,y2,x5-20+j1,y2-20-j1);

	tsp();
	line(x2, y2, x2 - 20 + j1, y2 - 20 - j1);

	tsp();
	line(x2, y2 + h, x2 - 20 + j1, y2 + h - 20 - j1);

	tsp();
	line(x2, y3 + h, x2 - 20 + j1, y3 + h - 20 - j1);
	//1+h,y4+h,x2-20+j1,y4+h-20-j1);

	tsp();
	line(x2, y2, x2 - 20 + j1, y2 + 20 + j1);

	tsp();
	line(x3, y2, x3 - 20 + j1, y2 + 20 + j1);

	tsp();
	line(x4, y2, x4 - 20 + j1, y2 + 20 + j1);

	tsp();
	line(x5, y2, x5 - 20 + j1, y2 + 20 + j1);
	//5,y2,x5-20+j1,y2+20+j1);

	tsp();
	line(x2, y2, x2 - 20 + j1, y2 + 20 + j1);

	tsp();
	line(x2, y2 + h, x2 - 20 + j1, y2 + h + 20 + j1);

	tsp();
	line(x2, y3 + h, x2 - 20 + j1, y3 + h + 20 + j1);
	//1+h,y4+h,x2-20+j1,y4+h+20+j1);

	tsp();
	line(x2, y2, x2 - 20 - j1, y2 - 20 + j1);

	tsp();
	line(x3, y2, x3 - 20 - j1, y2 - 20 + j1);

	tsp();
	line(x4, y2, x4 - 20 - j1, y2 - 20 + j1);

	tsp();
	line(x5, y2, x5 - 20 - j1, y2 - 20 + j1);

	tsp();
	line(x2, y2, x2 - 20 - j1, y2 - 20 + j1);

	tsp();
	line(x2, y2 + h, x2 - 20 - j1, y2 + h - 20 + j1);

	tsp();
	line(x2, y3 + h, x2 - 20 - j1, y3 + h - 20 + j1);

	tsp();
	line(x2, y2, x2 - 20 - j1, y2 + 20 - j1);

	tsp();
	line(x3, y2, x3 - 20 - j1, y2 + 20 - j1);

	tsp();
	line(x4, y2, x4 - 20 - j1, y2 + 20 - j1);

	tsp();
	line(x5, y2, x5 - 20 - j1, y2 + 20 - j1);

	tsp();
	line(x2, y2, x2 - 20 - j1, y2 + 20 - j1);

	tsp();
	line(x2, y2 + h, x2 - 20 - j1, y2 + h + 20 - j1);

	tsp();
	line(x2, y3 + h, x2 - 20 - j1, y3 + h + 20 - j1);

pattern4:
	tsp();
	line(x3, y3, x3 + 35 - i1, y3 + i1);

	tsp();
	line(x4, y3, x4 + 35 - i1, y3 + i1);

	tsp();
	line(x5, y3, x5 + 35 - i1, y3 + i1);
	//4+h+h,y3,x6+35-i1,y3+i1);
	//5+h,y3,x6+h+35-i1,y3+i1);

	tsp();
	line(x3, y3, x3 + 35 - i1, y3 + i1);

	tsp();
	line(x3, y2 + h + h, x3 + 35 - i1, y2 + h + h + i1);
	//1+h+h,y3+h+h,x3+35-i1,y3+h+h+i1);
	//1+h+h,y4+h+h,x3+35-i1,y4+h+h+i1);

	tsp();
	line(x3, y3, x3 - 35 + i1, y3 + i1);

	tsp();
	line(x4, y3, x4 - 35 + i1, y3 + i1);

	tsp();
	line(x5, y3, x5 - 35 + i1, y3 + i1);
	//4+h+h,y3,x6-35+i1,y3+i1);
	//5+h,y3,x6-35+i1,y3+i1);

	tsp();
	line(x3, y3, x3 - 35 + i1, y3 + i1);

	tsp();
	line(x3, y2 + h + h, x3 - 35 + i1, y2 + h + h + i1);
	//1+h+h,y3+h+h,x3-35+i1,y3+h+h+i1);
	//1+h+h,y4+h+h,x3-35+i1,y4+h+h+i1);

	tsp();
	line(x3, y3, x3 + 35 - i1, y3 - i1);

	tsp();
	line(x4, y3, x4 + 35 - i1, y3 - i1);

	tsp();
	line(x5, y3, x5 + 35 - i1, y3 - i1);
	//4+h+h,y3,x6+35-i1,y3-i1);
	//5+h,y3,x6+35-i1,y3-i1);

	tsp();
	line(x3, y3, x3 + 35 - i1, y3 - i1);

	tsp();
	line(x3, y2 + h + h, x3 + 35 - i1, y2 + h + h - i1);
	//1+h+h,y3+h+h,x3+35-i1,y3+h+h-i1);
	//1+h+h,y4+h+h,x3+35-i1,y4+h+h-i1);

	tsp();
	line(x3, y3, x3 - 35 + i1, y3 - i1);

	tsp();
	line(x4, y3, x4 - 35 + i1, y3 - i1);

	tsp();
	line(x5, y3, x5 - 35 + i1, y3 - i1);
	//4+h+h,y3,x6-35+i1,y3-i1);
	//5+h,y3,x6-35+i1,y3-i1);

	tsp();
	line(x3, y3, x3 - 35 + i1, y3 - i1);

	tsp();
	line(x3, y2 + h + h, x3 - 35 + i1, y2 + h + h - i1);

	//vr
	tsp();
	line(x3, y3, x3 + i1, y3 - 35 + i1);

	tsp();
	line(x4, y3, x4 + i1, y3 - 35 + i1);

	tsp();
	line(x5, y3, x5 + i1, y3 - 35 + i1);

	tsp();
	line(x3, y3, x3 + i1, y3 - 35 + i1);

	tsp();
	line(x3, y2 + h + h, x3 + i1, y2 + h + h - 35 + i1);

	tsp();
	line(x3, y3, x3 + i1, y3 + 35 - i1);

	tsp();
	line(x4, y3, x4 + i1, y3 + 35 - i1);

	tsp();
	line(x5, y3, x5 + i1, y3 + 35 - i1);

	tsp();
	line(x3, y3, x3 + i1, y3 + 35 - i1);

	tsp();
	line(x3, y2 + h + h, x3 + i1, y2 + h + h + 35 - i1);

	tsp();
	line(x3, y3, x3 - i1, y3 - 35 + i1);

	tsp();
	line(x4, y3, x4 - i1, y3 - 35 + i1);

	tsp();
	line(x5, y3, x5 - i1, y3 - 35 + i1);

	tsp();
	line(x3, y3, x3 - i1, y3 - 35 + i1);

	tsp();
	line(x3, y2 + h + h, x3 - i1, y2 + h + h - 35 + i1);

	tsp();
	line(x3, y3, x3 - i1, y3 + 35 - i1);

	tsp();
	line(x4, y3, x4 - i1, y3 + 35 - i1);

	tsp();
	line(x5, y3, x5 - i1, y3 + 35 - i1);

	tsp();
	line(x3, y3, x3 - i1, y3 + 35 - i1);

	tsp();
	line(x3, y2 + h + h, x3 - i1, y2 + h + h + 35 - i1);

	//slant front
	//hr
	tsp();
	line(x3, y3, x3 + 20 + j1, y3 - 20 + j1);

	tsp();
	line(x4, y3, x4 + 20 + j1, y3 - 20 + j1);

	tsp();
	line(x5, y3, x5 + 20 + j1, y3 - 20 + j1);

	//vr
	tsp();
	line(x3, y3, x3 + 20 + j1, y3 - 20 + j1);

	tsp();
	line(x3, y2 + h + h, x3 + 20 + j1, y2 + h + h - 20 + j1);

	tsp();
	line(x3, y3, x3 + 20 + j1, y3 + 20 - j1);

	tsp();
	line(x4, y3, x4 + 20 + j1, y3 + 20 - j1);

	tsp();
	line(x5, y3, x5 + 20 + j1, y3 + 20 - j1);

	tsp();
	line(x3, y3, x3 + 20 + j1, y3 + 20 - j1);

	tsp();
	line(x3, y2 + h + h, x3 + 20 + j1, y2 + h + h + 20 - j1);

	tsp();
	line(x3, y3, x3 + 20 - j1, y3 - 20 - j1);

	tsp();
	line(x4, y3, x4 + 20 - j1, y3 - 20 - j1);

	tsp();
	line(x5, y3, x5 + 20 - j1, y3 - 20 - j1);

	tsp();
	line(x3, y3, x3 + 20 - j1, y3 - 20 - j1);

	tsp();
	line(x3, y2 + h + h, x3 + 20 - j1, y2 + h + h - 20 - j1);

	tsp();
	line(x3, y3, x3 + 20 - j1, y3 + 20 + j1);

	tsp();
	line(x4, y3, x4 + 20 - j1, y3 + 20 + j1);

	tsp();
	line(x5, y3, x5 + 20 - j1, y3 + 20 + j1);

	tsp();
	line(x3, y3, x3 + 20 - j1, y3 + 20 + j1);

	tsp();
	line(x3, y2 + h + h, x3 + 20 - j1, y2 + h + h + 20 + j1);

	//slant back
	tsp();
	line(x3, y3, x3 - 20 + j1, y3 - 20 - j1);

	tsp();
	line(x4, y3, x4 - 20 + j1, y3 - 20 - j1);

	tsp();
	line(x5, y3, x5 - 20 + j1, y3 - 20 - j1);

	tsp();
	line(x3, y3, x3 - 20 + j1, y3 - 20 - j1);

	tsp();
	line(x3, y2 + h + h, x3 - 20 + j1, y2 + h + h - 20 - j1);

	tsp();
	line(x3, y3, x3 - 20 + j1, y3 + 20 + j1);

	tsp();
	line(x4, y3, x4 - 20 + j1, y3 + 20 + j1);

	tsp();
	line(x5, y3, x5 - 20 + j1, y3 + 20 + j1);

	tsp();
	line(x3, y3, x3 - 20 + j1, y3 + 20 + j1);

	tsp();
	line(x3, y2 + h + h, x3 - 20 + j1, y2 + h + h + 20 + j1);

	tsp();
	line(x3, y3, x3 - 20 - j1, y3 - 20 + j1);

	tsp();
	line(x4, y3, x4 - 20 - j1, y3 - 20 + j1);

	tsp();
	line(x5, y3, x5 - 20 - j1, y3 - 20 + j1);

	tsp();
	line(x3, y3, x3 - 20 - j1, y3 - 20 + j1);

	tsp();
	line(x3, y2 + h + h, x3 - 20 - j1, y2 + h + h - 20 + j1);

	tsp();
	line(x3, y3, x3 - 20 - j1, y3 + 20 - j1);

	tsp();
	line(x4, y3, x4 - 20 - j1, y3 + 20 - j1);

	tsp();
	line(x5, y3, x5 - 20 - j1, y3 + 20 - j1);

	tsp();
	line(x3, y3, x3 - 20 - j1, y3 + 20 - j1);

	tsp();
	line(x3, y2 + h + h, x3 - 20 - j1, y2 + h + h + 20 - j1);

pattern5:
	tsp();
	line(x4, y4, x4 + 35 - i1, y4 + i1);

	tsp();
	line(x5, y4, x5 + 35 - i1, y4 + i1);

	tsp();
	line(x4, y4, x4 + 35 - i1, y4 + i1);

	tsp();
	line(x4, y4, x4 - 35 + i1, y4 + i1);

	tsp();
	line(x5, y4, x5 - 35 + i1, y4 + i1);

	tsp();
	line(x4, y4, x4 - 35 + i1, y4 + i1);

	tsp();
	line(x4, y4, x4 + 35 - i1, y4 - i1);

	tsp();
	line(x5, y4, x5 + 35 - i1, y4 - i1);

	tsp();
	line(x4, y4, x4 + 35 - i1, y4 - i1);

	tsp();
	line(x4, y4, x4 - 35 + i1, y4 - i1);

	tsp();
	line(x5, y4, x5 - 35 + i1, y4 - i1);

	tsp();
	line(x4, y4, x4 - 35 + i1, y4 - i1);

	//vr
	tsp();
	line(x4, y4, x4 + i1, y4 - 35 + i1);

	tsp();
	line(x5, y4, x5 + i1, y4 - 35 + i1);

	tsp();
	line(x4, y4, x4 + i1, y4 - 35 + i1);

	tsp();
	line(x4, y4, x4 + i1, y4 + 35 - i1);

	tsp();
	line(x5, y4, x5 + i1, y4 + 35 - i1);

	tsp();
	line(x4, y4, x4 + i1, y4 + 35 - i1);

	tsp();
	line(x4, y4, x4 - i1, y4 - 35 + i1);

	tsp();
	line(x5, y4, x5 - i1, y4 - 35 + i1);

	tsp();
	line(x4, y4, x4 - i1, y4 - 35 + i1);

	tsp();
	line(x4, y4, x4 - i1, y4 + 35 - i1);

	tsp();
	line(x5, y4, x5 - i1, y4 + 35 - i1);

	tsp();
	line(x4, y4, x4 - i1, y4 + 35 - i1);

	//slant front
	//hr
	tsp();
	line(x4, y4, x4 + 20 + j1, y4 - 20 + j1);

	tsp();
	line(x5, y4, x5 + 20 + j1, y4 - 20 + j1);

	//vr
	tsp();
	line(x4, y4, x4 + 20 + j1, y4 - 20 + j1);

	tsp();
	line(x4, y4, x4 + 20 + j1, y4 + 20 - j1);

	tsp();
	line(x5, y4, x5 + 20 + j1, y4 + 20 - j1);

	tsp();
	line(x4, y4, x4 + 20 + j1, y4 + 20 - j1);

	tsp();
	line(x4, y4, x4 + 20 - j1, y4 - 20 - j1);

	tsp();
	line(x5, y4, x5 + 20 - j1, y4 - 20 - j1);

	tsp();
	line(x4, y4, x4 + 20 - j1, y4 - 20 - j1);

	tsp();
	line(x4, y4, x4 + 20 - j1, y4 + 20 + j1);

	tsp();
	line(x5, y4, x5 + 20 - j1, y4 + 20 + j1);

	tsp();
	line(x4, y4, x4 + 20 - j1, y4 + 20 + j1);

	//slant back
	tsp();
	line(x4, y4, x4 - 20 + j1, y4 - 20 - j1);

	tsp();
	line(x5, y4, x5 - 20 + j1, y4 - 20 - j1);

	tsp();
	line(x4, y4, x4 - 20 + j1, y4 - 20 - j1);

	tsp();
	line(x4, y4, x4 - 20 + j1, y4 + 20 + j1);

	tsp();
	line(x5, y4, x5 - 20 + j1, y4 + 20 + j1);

	tsp();
	line(x4, y4, x4 - 20 + j1, y4 + 20 + j1);

	tsp();
	line(x4, y4, x4 - 20 - j1, y4 - 20 + j1);

	tsp();
	line(x5, y4, x5 - 20 - j1, y4 - 20 + j1);

	tsp();
	line(x4, y4, x4 - 20 - j1, y4 - 20 + j1);

	tsp();
	line(x4, y4, x4 - 20 - j1, y4 + 20 - j1);

	tsp();
	line(x5, y4, x5 - 20 - j1, y4 + 20 - j1);

	tsp();
	line(x4, y4, x4 - 20 - j1, y4 + 20 - j1);
}

void star2()
{
	int c;
	int i, j, i1, j1, k = 0;
	int count = 0;
	while (count < 10)
	{
		delay((10));
		c = random(15) + 1;
		for (i1 = 0; i1 < 15; i1++)
		{
			//pixel();pixel();
			j1 = i1 / 2;
			setcolor(c);
			check = 1;
			starline(i1, j1);
			starline(i1, j1);
			starline(i1, j1);
			starline(i1, j1);
			starline(i1, j1);
			starline(i1, j1);
			starline(i1, j1);
			starline(i1, j1);
			delay((2));
			setcolor(0);
			check = 0;
			starline(i1, j1);
			delay((2));
		}
		if (kbhit())
			break;
		count++;
	}
}

void star()
{
	int i, j, i1, j1, k = 0;
	int count = 0;

	check = 0;
	while (count < 15)
	{
		total++;
		//printf("%d",total);
		if (total == 65)
			main4();
		delay((2));
		for (i1 = 0; i1 < 15; i1++)
		{
			//pixel();pixel();
			j1 = i1 / 2;
			setcolor(random(15) + 1);
			starline(i1, j1);
			delay((2));
			setcolor(0);
			starline(i1, j1);
			delay((2));
		}
		if (kbhit())
			break;
		count++;
	}
}

void main(int flag)
{
	char ch;
	int gd = DETECT, gm;
	unsigned int i, j;
	int count = 0;
	//	if(kbhit())
	//	break;
	clrscr();
	initgraph(&gd, &gm, "C:\\TC\\BGI");
	cleardevice();
	//star();
	while (!kbhit())
	{
		if (kbhit())
			break;

		for (j = 0; j < 480; j += 100)
		{
			for (i = 0; i < 600; i += 100)
			{
				count = anmr(i + 70, j + 40, 0);
				total += count;
			}
		}

		count = 0;

		if (kbhit())
			break;
	}

	//anm(200,100,1);
	getch();
	cleardevice();
	closegraph();
}