//made by tsp
#include <graphics.h>
#include <stdio.h>
#include <dos.h>
#include <conio.h>
#include <stdlib.h>
#include <tsp.h>
void birthday1();
int greetingVar;
int DelayVar;
int speed;
int myNum(int num)
{
	if (num > 0)
		return random(num);
	else
		return 0;
}
void greeting(int case_of_letter, int color, int size)
{
	settextstyle(4, 0, size);
	if (color != 0)
		setcolor(myNum(15) + 1);
	else
		setcolor(0);
	int x1, y1, x2, y2, x3, y3;
	if (case_of_letter == 1)
	{
		switch (size)
		{
		case 1:
			x1 = 210;
			y1 = 90;
			x2 = 190;
			y2 = 190;
			x3 = 260;
			y3 = 290;
			break;
		case 2:
			x1 = 210;
			y1 = 90;
			x2 = 190;
			y2 = 190;
			x3 = 260;
			y3 = 290;
			break;
		case 3:
			x1 = 210;
			y1 = 90;
			x2 = 190;
			y2 = 190;
			x3 = 260;
			y3 = 290;
			break;
		case 4:
			x1 = 210;
			y1 = 90;
			x2 = 190;
			y2 = 190;
			x3 = 260;
			y3 = 290;
			break;
		case 5:
			x1 = 210;
			y1 = 90;
			x2 = 190;
			y2 = 190;
			x3 = 260;
			y3 = 290;
			break;
		case 6:
			x1 = 210;
			y1 = 90;
			x2 = 190;
			y2 = 190;
			x3 = 260;
			y3 = 290;
			break;
		case 7:
			x1 = 210;
			y1 = 90;
			x2 = 190;
			y2 = 190;
			x3 = 260;
			y3 = 290;
			break;
		case 8:
			x1 = 210;
			y1 = 90;
			x2 = 190;
			y2 = 190;
			x3 = 260;
			y3 = 290;
			break;
		case 9:
			x1 = 210;
			y1 = 90;
			x2 = 190;
			y2 = 190;
			x3 = 260;
			y3 = 290;
			break;
		case 10:
			x1 = 210;
			y1 = 90;
			x2 = 190;
			y2 = 190;
			x3 = 260;
			y3 = 290;
			break;
		}
	}
	else
	{
		switch (size)
		{
		case 1:
			x1 = 210;
			y1 = 90;
			x2 = 135;
			y2 = 190;
			x3 = 260;
			y3 = 290;
			break;
		case 2:
			x1 = 220;
			y1 = 90;
			x2 = 135;
			y2 = 190;
			x3 = 260;
			y3 = 290;
			break;
		case 3:
			x1 = 210;
			y1 = 90;
			x2 = 135;
			y2 = 190;
			x3 = 260;
			y3 = 290;
			break;
		case 4:
			x1 = 210;
			y1 = 90;
			x2 = 135;
			y2 = 190;
			x3 = 260;
			y3 = 290;
			break;
		case 5:
			x1 = 210;
			y1 = 90;
			x2 = 135;
			y2 = 190;
			x3 = 260;
			y3 = 290;
			break;
		case 6:
			x1 = 210;
			y1 = 90;
			x2 = 135;
			y2 = 190;
			x3 = 260;
			y3 = 290;
			break;
		case 7:
			x1 = 210;
			y1 = 90;
			x2 = 135;
			y2 = 190;
			x3 = 260;
			y3 = 290;
			break;
		case 8:
			x1 = 210;
			y1 = 90;
			x2 = 135;
			y2 = 190;
			x3 = 260;
			y3 = 290;
			break;
		case 9:
			x1 = 210;
			y1 = 90;
			x2 = 135;
			y2 = 190;
			x3 = 260;
			y3 = 290;
			break;
		case 10:
			x1 = 210;
			y1 = 90;
			x2 = 135;
			y2 = 190;
			x3 = 260;
			y3 = 290;
			break;
		}
	}

	if (case_of_letter == 1)
	{
		outtextxy(x1, y1, "Happy");
		outtextxy(x2, y2, "Birthday");
		outtextxy(x3, y3, "Sir");
	}
	else
	{
		outtextxy(x1, y1, "HAPPY");
		outtextxy(x2, y2, "BIRTHDAY");
		outtextxy(x3, y3, "SIR");
	}
}

void pixelRight(int color, int displace, int Delay);
void pixelLeft(int color, int displace, int Delay);
void pixelUp(int color, int displace, int Delay);
void pixelDown(int color, int displace, int Delay);

void main(int flag)
{
	open

	birthday1();
	if0

			close
}

int randomColor = 0, myNumDelay = 0, delayVar = 0;
void cracker2(int x, int y, int color, int dl)
{

	int speed = 0;
	int i, j, k, xmax = 650, ymax = 450, xmin = 0, ymin = 0;
	randomColor = 0;
	if (randomColor == 1)
		color = myNum(15) + 1;
	// displace=myNum(700);
	myNumDelay = 1;
	delay(delayVar);
	for (i = 0; i < 4; i += 2)
	{
		br

				for (j = ymin; j < ymax; j += 40) for (k = xmin; k < xmax; k += 40)
						putpixel(x + k, y + j, color);
		delay(dl);
		if (myNumDelay == 1)
			dl = myNum(speed);
		if (randomColor == 1)
			color = myNum(15) + 1;

		for (j = 0; j < ymax; j += 40)
			for (k = 0; k < xmax; k += 40)
				putpixel(x + k - i, y + j, color);
		delay(dl);
		if (myNumDelay == 1)
			dl = myNum(speed);
		if (randomColor == 1)
			color = myNum(15) + 1;

		for (j = 0; j < ymax; j += 40)
			for (k = 0; k < xmax; k += 40)
				putpixel(x + k + i, y + j, color);
		delay(dl);
		if (myNumDelay == 1)
			dl = myNum(speed);
		if (randomColor == 1)
			color = myNum(15) + 1;

		for (j = 0; j < ymax; j += 40)
			for (k = 0; k < xmax; k += 40)
				putpixel(x + k, y + j + i, color);
		delay(dl);
		if (myNumDelay == 1)
			dl = myNum(speed);
		if (randomColor == 1)
			color = myNum(15) + 1;

		for (j = 0; j < ymax; j += 40)
			for (k = 0; k < xmax; k += 40)
				putpixel(x + k, y + j - i, color);
		delay(dl);
		if (myNumDelay == 1)
			dl = myNum(speed);
		if (randomColor == 1)
			color = myNum(15) + 1;

		for (j = 0; j < ymax; j += 40)
			for (k = 0; k < xmax; k += 40)
				putpixel(x + k + i, y + j + i, color);
		delay(dl);
		if (myNumDelay == 1)
			dl = myNum(speed);
		if (randomColor == 1)
			color = myNum(15) + 1;

		for (j = 0; j < ymax; j += 40)
			for (k = 0; k < xmax; k += 40)
				putpixel(x + k - i, y + j - i, color);
		delay(dl);
		if (myNumDelay == 1)
			dl = myNum(speed);
		if (randomColor == 1)
			color = myNum(15) + 1;

		for (j = 0; j < ymax; j += 40)
			for (k = 0; k < xmax; k += 40)
				putpixel(x + k + i, y + j - i, color);
		delay(dl);
		if (myNumDelay == 1)
			dl = myNum(speed);
		if (randomColor == 1)
			color = myNum(15) + 1;

		for (j = 0; j < ymax; j += 40)
			for (k = 0; k < xmax; k += 40)
				putpixel(x + k - i, y + j + i, color);
		delay(dl);
		if (myNumDelay == 1)
			dl = myNum(speed);
		if (randomColor == 1)
			color = myNum(15) + 1;
	}
}

void cracker(int x, int y, int color, int dl, int size)
{

	int speed = 0;
	int i, j = 0, k = 0, xmax = 650, ymax = 450, xmin = 0, ymin = 0;
	randomColor = 0;
	// displace=myNum(700);
	myNumDelay = 0;
	delay(delayVar);
	for (i = 0; i < size; i += 2)
	{
		br

				putpixel(x + k, y + j, color);
		delay(dl);
		if (myNumDelay == 1)
			dl = myNum(speed);

		putpixel(x + k - i, y + j, color);
		delay(dl);
		if (myNumDelay == 1)
			dl = myNum(speed);

		putpixel(x + k + i, y + j, color);
		delay(dl);
		if (myNumDelay == 1)
			dl = myNum(speed);

		putpixel(x + k, y + j + i, color);
		delay(dl);
		if (myNumDelay == 1)
			dl = myNum(speed);

		putpixel(x + k, y + j - i, color);
		delay(dl);
		if (myNumDelay == 1)
			dl = myNum(speed);

		putpixel(x + k + i, y + j + i, color);
		delay(dl);
		if (myNumDelay == 1)
			dl = myNum(speed);

		putpixel(x + k - i, y + j - i, color);
		delay(dl);
		if (myNumDelay == 1)
			dl = myNum(speed);

		putpixel(x + k + i, y + j - i, color);
		delay(dl);
		if (myNumDelay == 1)
			dl = myNum(speed);

		putpixel(x + k - i, y + j + i, color);
		delay(dl);
		if (myNumDelay == 1)
			dl = myNum(speed);
	}
}

int yes = 0;
int textsize = 7;
int flag = 1;
void pixelRight(int x, int y, int color, int displace, int del)
{
	if (color == 0 || color >= 15)
		color = 10;
	for (; displace >= 0; displace--)
	{
		putpixel(x, y, color);
		x++;
		delay(del);

		if (displace % 5 == 0)
		{
			int size = 4;
			greeting(2, 7, textsize);
			int x2 = random(16) * 40 + 20;
			int y2 = random(12) * 40 + 20;
			int color2 = random(15);
			cracker(x2, y2, color2, del, size);
		}
	}
}

void pixelDown(int x, int y, int color, int displace, int del)
{
	if (color == 0 || color >= 15)
		color = 10;
	y--;
	for (; displace >= 0; displace--)
	{
		putpixel(x, y, color);
		y++;
		delay(del);

		if (displace % 5 == 0)
		{
			int size = 4;
			greeting(2, 7, textsize);
			int x2 = random(16) * 40 + 20;
			int y2 = random(12) * 40 + 20;
			int color2 = random(15);
			cracker(x2, y2, color2, del, size);
		}
	}
}

void birthday1()
{
	int x = 20, y = 20;
	//cracker(x,y,14,10);
	//cracker(50,50,14,10);
	if0 int del = 0;
	int size = 4;
	flag = 0;
again:
	int count = 10;
	int counter = 0;
	while (counter <= 50 * count)
	{
		br counter++;
		greeting(2, 1, 7);
		x = random(16) * 40 + 20;
		y = random(12) * 40 + 20;
		int color = random(15);
		cracker(x, y, color, del, size);
	}

	int liney = 0;
	yes = 1;
	textsize = 7;

	counter = 0;
	while (counter <= count)
	{
		br counter++;
		pixelDown(liney += 40, 0, random(15) + 1, 650, 0);
		greeting(2, 7, textsize);
		x = random(16) * 40 + 20;
		y = random(12) * 40 + 20;
		int color = random(15) + 1;
		cracker(x, y, color, del, size);
		pixelRight(0, liney += 40, color, 650, 0);
	}

	counter = 0;
	while (counter <= count * 50)
	{
		br counter++;
		greeting(2, 1, 7);
		x = random(16) * 40 + 20;
		y = random(12) * 40 + 20;
		int color = 0;
		cracker(x, y, color, del, size);
	}
	counter = 0;
	while (counter <= 200 * count)
	{
		br counter++;
		greeting(2, 1, 7);
		x = (20);
		y = (20);
		int color = (0);
		cracker2(x, y, random(15), 1);
	}

	liney = 0;
	yes = 1;
	textsize = 7;

	counter = 0;
	while (counter <= count * 2 - 5)
	{
		br counter++;
		pixelDown(liney += 40, 0, random(15) + 1, 650, 0);
		greeting(2, 7, textsize);
		x = random(16) * 40 + 20;
		y = random(12) * 40 + 20;
		int color = random(15) + 1;
		cracker(x, y, color, del, size);
		pixelRight(0, liney, color, 650, 0);
	}

	counter = 0;
	while (counter <= count)
	{
		br counter++;
		greeting(2, 1, 7);
		x = random(16) * 40 + 20;
		y = random(12) * 40 + 20;
		int color = 0;
		cracker(x, y, color, del, size);
	}

	greeting(2, 0, 7);

	counter = 0;
	while (counter <= 50 * count)
	{
		br counter++;
		greeting(2, 1, 7);
		x = (20);
		y = (20);
		int color = (0);
		cracker2(x, y, random(15), 0);
	}

	counter = 0;
	while (counter <= 50 * count)
	{
		br counter++;
		greeting(2, 1, 7);
		x = random(16) * 40 + 20;
		y = random(12) * 40 + 20;
		int color = random(15);
		cracker(x, y, color, del, size);
	}
	counter = 0;
	while (counter <= 50 * count)
	{
		br counter++;
		greeting(2, 1, 7);
		x = random(16) * 40 + 20;
		y = random(12) * 40 + 20;
		int color = (0);
		cracker(x, y, color, del, size);
	}
	counter = 0;
	while (counter <= 50 * count)
	{
		br counter++;
		greeting(2, 1, 7);
		x = random(16) * 40 + 20;
		y = random(12) * 40 + 20;
		int color = random(15);
		cracker(x, y, color, del, size);
	}
	counter = 0;
	while (counter <= 50 * count)
	{
		br counter++;
		greeting(2, 1, 7);
		x = random(16) * 40 + 20;
		y = random(12) * 40 + 20;
		int color = (0);
		cracker(x, y, color, del, size);
	}

	counter = 0;
	while (counter <= 50 * count)
	{
		br counter++;
		greeting(2, 1, 7);
		x = (20);
		y = (20);
		int color = (0);
		cracker2(x, y, random(15), 3);
	}
}

/*
void birthday1(){
pixelRight(10,300,5);

pixelDown(10,200,5);

pixelLeft(1,200,5);

pixelUp(14,200,5);
}

void pixelLeft(int color,int displace,int Delay){
    for(;displace>=0;displace--){
putpixel(x--,y,color);
delay(Delay);
    }
}

void pixelUp(int color,int displace,int Delay){
    for(;displace>=0;displace--){
putpixel(x,y--,color);
delay(Delay);
    }
}

void pixelDown(int color,int displace,int Delay){
    y--;
    for(;displace>=0;displace--){
	 x-=8*3;
putpixel(x,y,color); x+=3;
putpixel(x,y,color); x+=3;
putpixel(x,y,color); x+=3;
putpixel(x,y,color); x+=3;
putpixel(x,y,color); x+=3;
putpixel(x,y,color); x+=3;
putpixel(x,y,color); x+=3;
putpixel(x,y,color); x+=3;
y++;
delay(Delay);
    }
}


int myNumDelay=1,randomColor=0;

*/