//EID Animation made by TSP
#include <graphics.h>
#include <conio.h>
#include <dos.h>
#include <tsp.h>
int count = 0;

#define CIRCLE(x1, y1)                           \
	drawCircle(speed, x1, y1, xpos, ypos);         \
	drawCircle(speed, x, y, xpos - 50, ypos - 50); \
	drawCircle(speed, x, y, xpos + 50, ypos + 50); \
	drawCircle(speed, x, y, xpos + 50, ypos - 50); \
	drawCircle(speed, x, y, xpos - 50, ypos + 50); \
	drawCircle(speed, x, y, xpos + 50, ypos);      \
	drawCircle(speed, x, y, xpos - 50, ypos);      \
	drawCircle(speed, x, y, xpos, ypos + 50);      \
	drawCircle(speed, x, y, xpos, ypos - 50);

void pixel(int signal)
{
	if (signal == 1)
		putpixel(random(640), random(480), RANDOM);
	else
		putpixel(random(640), random(480), 0);
}

void pixelBunch(int times, int signal)
{
	for (int i = 0; i < times; i++)
		pixel(signal);
}

//drawCircle(speed,++x,y,xpos,ypos);
int colorFlag = 1;
void bhc(int xpos, int ypos, int r, int speed);
void bhc2(int xpos, int ypos, int r, int speed);
void bhc7(int xpos, int ypos, int r, int speed);
void bhc3(int xpos, int ypos, int r, int speed);
void bhc4(int xpos, int ypos, int r, int speed);
void drawCircle(int speed, int x, int y, int xpos, int ypos);
void drawCircle7(int speed, int x, int y, int xpos, int ypos);
void circles(int x, int y, int rad, int color, int speed);
void circles2(int xpos, int ypos, int rad, int color, int speed);
void circles5(int xpos, int ypos, int rad, int color, int speed);
void circles6(int xpos, int ypos, int rad, int color, int speed);
void circles7(int xpos, int ypos, int rad, int color, int speed);
void circles3(int rad, int color, int speed);
void circles4(int rad, int color, int speed);
int text;

void happy_eid(int speed)
{
	settextstyle(4, 0, 8);

	setcolor(RANDOM);
	outtextxy(170, 50, "HAPPY");
	outtextxy(90, 180, "RAMADAN");
	outtextxy(230, 280, "EID");
	delay(0 * speed);
	setcolor(0);
	outtextxy(170, 50, "HAPPY");
	outtextxy(90, 180, "RAMADAN");
	outtextxy(230, 280, "EID");
	delay(0 * speed);
}

void eid_mubarak(int speed)
{
	settextstyle(4, 0, 9);

	setcolor(RANDOM);
	outtextxy(220, 100, "EID");
	line(230, 200, 380, 200);
	line(230, 201, 380, 201);
	outtextxy(70, 200, "MUBARAK");
	line(80, 300, 540, 300);
	line(80, 301, 540, 301);
	delay(0 * speed);
	setcolor(0);
	outtextxy(220, 100, "EID");
	line(230, 200, 380, 200);
	line(230, 201, 380, 201);
	outtextxy(70, 200, "MUBARAK");
	line(80, 300, 540, 300);
	line(80, 301, 540, 301);
	delay(0 * speed);
}

void anm1()
{
	text = 0;
	int time = 5;
	while (time != 0)
	{
		time--;
		circles3(6, 1, 0);
		circles3(6, 0, 0);
	}

	text = 1;
	time = 5;
	while (time != 0)
	{
		time--;
		circles4(6, 1, 0);
		circles4(6, 0, 0);
	}
}

void anm2()
{
	text = 0;
	int time = 5;
	while (time != 0)
	{
		time--;
		circles4(6, 1, 0);
		circles4(6, 0, 0);
	}

	text = 1;
	time = 5;
	while (time != 0)
	{
		time--;
		circles3(6, 1, 0);
		circles3(6, 0, 0);
	}
}

void anm3(int time, int speed)
{
	text = 0;
	while (time != 0)
	{
		time--;
		Br
				circles2(100, 100, 5, 1, speed);
		circles2(500, 100, 5, 1, speed);
		circles2(100, 400, 5, 1, speed);
		circles2(500, 400, 5, 1, speed);
		circles2(300, 400, 5, 1, speed);

		circles2(100, 100, 5, 0, speed);
		circles2(500, 100, 5, 0, speed);
		circles2(100, 400, 5, 0, speed);
		circles2(500, 400, 5, 0, speed);
		circles2(300, 400, 5, 0, speed);
	}
}

void anm4(int speed)
{
	circles5(70, 80, 2, 1, speed);
	circles5(70, 80, 2, 0, speed);
}

void anm5(int speed)
{
	circles6(70, 80, 2, 1, speed);
	circles6(70, 80, 2, 0, speed);
}

void anm7(int speed)
{
	circles7(70, 40, 2, 1, speed);
	circles7(70, 40, 2, 0, speed);
}

void circles(int x, int y, int rad, int color, int speed)
{
	int xpos = x, ypos = y;
	int r = rad;
	if (color == 1)
	{
		colorFlag = 1;
		while (r != 0)
		{
			//if(r%2==0)
			bhc(xpos, ypos, rad - r, speed);
			Br
					r--;
		}
	}
	else
	{
		colorFlag = 0;
		r = rad;
		while (r != 0)
		{
			//if(r%2==0)
			bhc(xpos, ypos, r, speed);
			Br
					r--;
		}
	}
}

void bhc(int xpos, int ypos, int r, int speed)
{
	int error, x, y;
	error = 3 - 2 * r;
	x = 0;
	y = r;
	CIRCLE(x, y)
	while (x < y)
	{
		Br if (error <= 0)
		{
			error = error + (4 * x) + 6;
			CIRCLE(++x, y)
		}

		else
		{
			error = error + (4 * (x - y)) + 10;
			CIRCLE(++x, --y)
		}
	}
}
void circles2(int xpos, int ypos, int rad, int color, int speed)
{
	int r = rad;
	if (color == 1)
	{
		colorFlag = 1;
		while (r != 0)
		{
			bhc2(xpos, ypos, rad - r, speed);
			Br
					r--;
		}
	}
	else
	{
		colorFlag = 0;
		while (r != 0)
		{
			bhc2(xpos, ypos, r, speed);
			Br
					r--;
		}
	}
end:
}

void circles5(int xpos, int ypos, int rad, int color, int speed)
{
	int r = rad;

	if (color == 1)
	{
		colorFlag = 1;
		while (r != 0)
		{
			happy_eid(10);
			for (int i = 0; i < 6; i++)
			{
				Br for (int j = 0; j < 4; j++)
				{
					Br
							bhc2(xpos + i * 100, ypos + j * 100, rad - r, 0);
					delay(0 * speed);
				}
				Br
			}
			Br
					r--;
		}
	}
	else
	{
		colorFlag = 0;
		while (r != 0)
		{
			happy_eid(10);
			for (int i = 0; i < 6; i++)
			{
				Br for (int j = 0; j < 4; j++)
				{
					Br
							bhc2(xpos + i * 100, ypos + j * 100, r, 0);
					delay(0 * speed);
					Br
				}
			}

			Br
					r--;
		}
	}
end:
}

void circles6(int xpos, int ypos, int rad, int color, int speed)
{
	int r = rad;
	if (color == 1)
	{
		colorFlag = 1;
		while (r != 0)
		{
			eid_mubarak(10);
			for (int j = 0; j < 4; j++)
			{
				Br for (int i = 0; i < 6; i++)
				{
					Br
							bhc2(xpos + i * 100, ypos + j * 100, rad - r, 0);
					delay(0 * speed);
				}
				Br
			}
			Br
					r--;
		}
	}
	else
	{
		colorFlag = 0;
		while (r != 0)
		{
			eid_mubarak(10);
			for (int j = 0; j < 4; j++)
			{
				Br for (int i = 0; i < 6; i++)
				{
					Br
							bhc2(xpos + i * 100, ypos + j * 100, r, 0);
					delay(0 * speed);
					Br
				}
			}

			Br
					r--;
		}
	}
end:
}

void circles7(int xpos, int ypos, int rad, int color, int speed)
{
	int r = rad;
	if (color == 1)
	{
		colorFlag = 1;
		while (r != 0)
		{
			eid_mubarak(10);
			//	for(int j=0;j<4;j++){Br
			//for(int i=0;i<6;i++){	Br
			bhc7(xpos, ypos, rad - r, 0);
			delay(0 * speed);
			Br
					r--;
		}
	}
	else
	{
		colorFlag = 0;
		while (r != 0)
		{
			eid_mubarak(10);
			//for(int j=0;j<4;j++){Br
			//for(int i=0;i<6;i++){Br
			bhc7(xpos, ypos, r, 0);
			delay(0 * speed);

			Br
					r--;
		}
	}
end:
}
void bhc7(int xpos, int ypos, int r, int speed)
{
	int error, x, y;
	error = 3 - 2 * r;
	x = 0;
	y = r;
	//int i=0,j=0;
	for (int i = 1; i <= 6; i++)
	{
		Br for (int j = 1; j <= 4; j++)
		{
			Br
					drawCircle7(speed, x + i, y + j, xpos, ypos);
			eid_mubarak(10);
		}
	}

	while (x < y)
	{
		Br if (error <= 0)
		{
			error = error + (4 * x) + 6;
			for (int i = 1; i <= 6; i++)
			{
				Br for (int j = 1; j <= 4; j++)
				{
					Br
							drawCircle7(speed, ++x + i, y + j, xpos, ypos);
				}
			}
		}

		else
		{
			error = error + (4 * (x - y)) + 10;
			for (int i = 1; i <= 6; i++)
			{
				Br for (int j = 1; j <= 4; j++)
				{
					Br
							drawCircle7(speed, ++x + i, --y + j, xpos, ypos);
					happy_eid(1);
				}
			}
		}
	}
}
void drawCircle7(int speed, int x, int y, int xpos, int ypos)
{
	int color;
	//color=4;
	if (colorFlag == 1)
		color = random(15);
	else
		color = 0;
	for (int i = 0; i < 6; i++)
	{
		Br for (int j = 0; j < 5; j++)
		{
			Br
					delay(0 * speed);
			putpixel(x + xpos + i * 100, y + ypos + j * 100, color);
			delay(0 * speed);
			putpixel(-x + xpos + i * 100, y + ypos + j * 100, color);
			delay(0 * speed);
			putpixel(x + xpos + i * 100, -y + ypos + j * 100, color);
			delay(0 * speed);
			putpixel(-x + xpos + i * 100, -y + ypos + j * 100, color);
			delay(0 * speed);
			putpixel(y + xpos + i * 100, x + ypos + j * 100, color);
			delay(0 * speed);
			putpixel(y + xpos + i * 100, -x + ypos + j * 100, color);
			delay(0 * speed);
			putpixel(-y + xpos + i * 100, x + ypos + j * 100, color);
			delay(0 * speed);
			putpixel(-y + xpos + i * 100, -x + ypos + j * 100, color);
		}
	}
}

void bhc2(int xpos, int ypos, int r, int speed)
{
	int error, x, y;
	error = 3 - 2 * r;
	x = 0;
	y = r;
	//int i=0,j=0;
	for (int i = 1; i <= 6; i++)
	{
		Br for (int j = 1; j <= 4; j++)
		{
			Br
					drawCircle(speed, x + i, y + j, xpos, ypos);
			eid_mubarak(1);
		}
	}

	while (x < y)
	{
		Br if (error <= 0)
		{
			error = error + (4 * x) + 6;
			for (int i = 1; i <= 6; i++)
			{
				Br for (int j = 1; j <= 4; j++)
				{
					Br
							drawCircle(speed, ++x + i, y + j, xpos, ypos);
				}
			}
		}

		else
		{
			error = error + (4 * (x - y)) + 10;
			for (int i = 1; i <= 6; i++)
			{
				Br for (int j = 1; j <= 4; j++)
				{
					Br
							drawCircle(speed, ++x + i, --y + j, xpos, ypos);
					happy_eid(1);
				}
			}
		}
	}
}

void circles3(int rad, int color, int speed)
{
	int xpos = 20, ypos = 15;
	int r = rad;
	if (color == 1)
	{
		colorFlag = 1;
		while (r != 0)
		{
			//if(r%2==0)
			bhc3(xpos, ypos, rad - r, speed);
			Br
					r--;
		}
	}
	else
	{
		colorFlag = 0;
		r = rad;
		while (r != 0)
		{
			//if(r%2==0)
			bhc3(xpos, ypos, r, speed);
			Br
					r--;
		}
	}
}
void greeting()
{
	if (text == 1)
	{
		setcolor(RANDOM);
		outtextxy(200, 50, "EID");
		outtextxy(160, 250, "2018");
	}
}
void bhc3(int xpos, int ypos, int r, int speed)
{
	greeting();
	int error, x, y;
	error = 3 - 2 * r;
	x = 0;
	y = r;
	for (int i = 0; i < 15; i++)
		for (int j = 0; j < 12; j++)
			drawCircle(speed, x, y, xpos + i * 50, ypos + j * 50);
	while (x < y)
	{
		Br if (error <= 0)
		{
			error = error + (4 * x) + 6;
			//CIRCLE(++x,y)
			++x;
			for (i = 0; i < 15; i++)
				for (j = 0; j < 12; j++)
					drawCircle(speed, x, y, xpos + i * 50, ypos + j * 50);
		}

		else
		{
			error = error + (4 * (x - y)) + 10;
			// CIRCLE(++x,--y)
			++x;
			--y;
			for (i = 0; i < 15; i++)
				for (j = 0; j < 12; j++)
					drawCircle(speed, x, y, xpos + i * 50, ypos + j * 50);
		}
	}
}

void circles4(int rad, int color, int speed)
{
	int xpos = 20, ypos = 15;
	int r = rad;
	if (color == 1)
	{
		colorFlag = 1;
		while (r != 0)
		{
			//if(r%2==0)
			bhc3(xpos, ypos, rad - r, speed);
			Br
					r--;
		}
	}
	else
	{
		colorFlag = 0;
		r = rad;
		while (r != 0)
		{
			//if(r%2==0)
			bhc3(xpos, ypos, rad - r, speed);
			Br
					r--;
		}
	}
}

void bhc4(int xpos, int ypos, int r, int speed)
{
	greeting();

	int error, x, y;
	error = 3 - 2 * r;
	x = 0;
	y = r;
	for (int i = 0; i < 15; i++)
		for (int j = 0; j < 12; j++)
			drawCircle(speed, x, y, xpos + i * 50, ypos + j * 50);
	while (x < y)
	{
		Br if (error <= 0)
		{
			error = error + (4 * x) + 6;
			//CIRCLE(++x,y)
			++x;
			for (i = 0; i < 15; i++)
				for (j = 0; j < 12; j++)
					drawCircle(speed, x, y, xpos + i * 50, ypos + j * 50);
		}

		else
		{
			error = error + (4 * (x - y)) + 10;
			// CIRCLE(++x,--y)
			++x;
			--y;
			for (i = 0; i < 15; i++)
				for (j = 0; j < 12; j++)
					drawCircle(speed, x, y, xpos + i * 50, ypos + j * 50);
		}
	}
}

int color = random(15) + 1;

void drawCircle(int speed, int x, int y, int xpos, int ypos)
{
	//color=4;
	if (colorFlag == 1)
		color = random(15);
	else
		color = 0;

	delay(0 * speed);
	putpixel(x + xpos, y + ypos, color);
	delay(0 * speed);
	putpixel(-x + xpos, y + ypos, color);
	delay(0 * speed);
	putpixel(x + xpos, -y + ypos, color);
	delay(0 * speed);
	putpixel(-x + xpos, -y + ypos, color);
	delay(0 * speed);
	putpixel(y + xpos, x + ypos, color);
	delay(0 * speed);
	putpixel(y + xpos, -x + ypos, color);
	delay(0 * speed);
	putpixel(-y + xpos, x + ypos, color);
	delay(0 * speed);
	putpixel(-y + xpos, -x + ypos, color);
}

void textAnm(char str[], int x, int y, int speed, int time)
{
	char tsp[2] = {'\0', '\0'};
	int i = 0;
	//x=strlen(str)*80;
	settextstyle(4, 0, 10);
	while (x != -1800)
	{
		Br
				pixelBunch(1, 1);
		i = 0;
		while (str[i] != '\0')
		{
			tsp[0] = str[i];
			setcolor(MyColors());
			outtextxy(x + i * 80, y, tsp);
			i++;
		}
		delay(0 * speed);

		i = 0;
		while (str[i] != '\0')
		{
			tsp[0] = str[i];
			setcolor(0);
			outtextxy(x + i * 80, y, tsp);
			i++;
		}
		x--;
	}
}

void paint(int *x, int xpos, int ypos, int time, int speed, int color, int signal)
{
	int j = 0;
	char flag = '0';
	if (color == 16)
		flag = '1';
	while (time != 0)
	{
		time--;
		Br if (flag == '1')
				color = random(16);
		if (signal == 1)
		{
			if (flag == '1')
			{
				pixelBunch(1, 1);
				color = random(16);
			}
			else
				pixelBunch(1, 0);
		}
		j = random(count);
		if (j % 2 == 0)
			putpixel(x[j] + xpos, x[j + 1] + ypos, color);
		else
			putpixel(x[j - 1] + xpos, x[j] + ypos, color);
		delay(0 * speed);
	}
}

int *retrive9(char ch)
{
	FILE *fp;
	switch (ch)
	{
	case 'A':
		fp = fOpen("c:\\tc\\bin\\tsp\\pixels\\size9\\a.txt", "r");
		break;
	case 'H':
		fp = fOpen("c:\\tc\\bin\\tsp\\pixels\\size9\\h.txt", "r");
		break;
	case 'P':
		fp = fOpen("c:\\tc\\bin\\tsp\\pixels\\size9\\p.txt", "r");
		break;
	case 'Y':
		fp = fOpen("c:\\tc\\bin\\tsp\\pixels\\size9\\y.txt", "r");
		break;
	}
	if (fp == NULL)
	{
		printf("File not Opened");
		If0 exit(1);
	}
	int x[20000];
	int i = 0, j = 0;
	char str[4] = {'\0'};
	count = 0;
	ch;
	while (!feof(fp))
	{
		ch = fgetc(fp);

		if (ch == ',')
		{
			x[j] = atoi(str);
			//printf("%d",x[j]);
			j++;
			count++;
			str[0] = '\0';
			str[1] = '\0';
			str[2] = '\0';
			i = 0;
			continue;
		}

		str[i] = ch;
		i++;
	}
	fClose(fp);
	return x;
}

int *retrive8(char ch)
{
	FILE *fp;
	switch (ch)
	{
	case 'A':
		fp = fOpen("c:\\tc\\bin\\tsp\\pixels\\size8\\a.txt", "r");
		break;
	case 'B':
		fp = fOpen("c:\\tc\\bin\\tsp\\pixels\\size8\\b.txt", "r");
		break;
	case 'D':
		fp = fOpen("c:\\tc\\bin\\tsp\\pixels\\size8\\d.txt", "r");
		break;
	case 'H':
		fp = fOpen("c:\\tc\\bin\\tsp\\pixels\\size8\\h.txt", "r");
		break;
	case 'K':
		fp = fOpen("c:\\tc\\bin\\tsp\\pixels\\size8\\k.txt", "r");
		break;
	case 'M':
		fp = fOpen("c:\\tc\\bin\\tsp\\pixels\\size8\\m.txt", "r");
		break;
	case 'N':
		fp = fOpen("c:\\tc\\bin\\tsp\\pixels\\size8\\n.txt", "r");
		break;
	case 'P':
		fp = fOpen("c:\\tc\\bin\\tsp\\pixels\\size8\\p.txt", "r");
		break;
	case 'R':
		fp = fOpen("c:\\tc\\bin\\tsp\\pixels\\size8\\r.txt", "r");
		break;
	case 'U':
		fp = fOpen("c:\\tc\\bin\\tsp\\pixels\\size8\\u.txt", "r");
		break;
	case 'Y':
		fp = fOpen("c:\\tc\\bin\\tsp\\pixels\\size8\\y.txt", "r");
		break;
	}
	if (fp == NULL)
	{
		printf("File not Opened");
		If0 exit(1);
	}
	int x[20000];
	int i = 0, j = 0;
	char str[4] = {'\0'};
	count = 0;
	ch;
	while (!feof(fp))
	{
		ch = fgetc(fp);

		if (ch == ',')
		{
			x[j] = atoi(str);
			//printf("%d",x[j]);
			j++;
			count++;
			str[0] = '\0';
			str[1] = '\0';
			str[2] = '\0';
			i = 0;
			continue;
		}

		str[i] = ch;
		i++;
	}
	fClose(fp);
	return x;
}

int *retrive10(char ch)
{
	FILE *fp;
	switch (ch)
	{
	case 'A':
		fp = fOpen("c:\\tc\\bin\\tsp\\pixels\\size10\\a.txt", "r");
		break;
	case 'E':
		fp = fOpen("c:\\tc\\bin\\tsp\\pixels\\size10\\e.txt", "r");
		break;
	case 'D':
		fp = fOpen("c:\\tc\\bin\\tsp\\pixels\\size10\\d.txt", "r");
		break;
	case 'H':
		fp = fOpen("c:\\tc\\bin\\tsp\\pixels\\size10\\h.txt", "r");
		break;
	case 'I':
		fp = fOpen("c:\\tc\\bin\\tsp\\pixels\\size10\\i.txt", "r");
		break;
	case 'M':
		fp = fOpen("c:\\tc\\bin\\tsp\\pixels\\size10\\m.txt", "r");
		break;
	case 'N':
		fp = fOpen("c:\\tc\\bin\\tsp\\pixels\\size10\\n.txt", "r");
		break;
	case 'P':
		fp = fOpen("c:\\tc\\bin\\tsp\\pixels\\size10\\p.txt", "r");
		break;
	case 'R':
		fp = fOpen("c:\\tc\\bin\\tsp\\pixels\\size10\\r.txt", "r");
		break;
	case 'Y':
		fp = fOpen("c:\\tc\\bin\\tsp\\pixels\\size10\\y.txt", "r");
		break;
	}
	if (fp == NULL)
	{
		printf("File not Opened");
		If0 exit(1);
	}
	int x[20000];
	int i = 0, j = 0;
	char str[4] = {'\0'};
	count = 0;
	ch;
	while (!feof(fp))
	{
		ch = fgetc(fp);

		if (ch == ',')
		{
			x[j] = atoi(str);
			//printf("%d",x[j]);
			j++;
			count++;
			str[0] = '\0';
			str[1] = '\0';
			str[2] = '\0';
			i = 0;
			continue;
		}

		str[i] = ch;
		i++;
	}
	fClose(fp);
	return x;
}
/*
int * retrive(char ch,int size){
FILE *fp;
char file[2]={ch,'\0'};
char *path; empty(path);
strcpy(path,"c:\\tc\\bin\\tsp\\pixels\\");
char *temp; empty(temp); its(temp,size);
char *folder; empty(folder);
strcpy(folder,"size"); strcat(folder,temp); strcat(folder,"\\");
strcat(path,folder); strcat(path,file); strcat(path,".txt");

fp=fOpen(path,"r");
if(fp==NULL){
		printf("%s",path);
printf("File not Opened");
    If0 exit(0);
}
int x[20000];
int i=0,j=0;
char str[4]={'\0'};
count=0;
while(!feof(fp)){
    ch=fget setcolor(0); outtextxy(x,y,"2018"); x-=10; y-=10;c(fp);

    if(ch==','){
	x[j]=atoi(str);
		//printf("%d",x[j]);
	j++;
	count++;
    str[0]='\0';    str[1]='\0';     str[2]='\0';
    i=0;
    continue;
      }

    str[i]=ch;
    i++;
}
fClose(fp);
get setcolor(0); outtextxy(x,y,"2018"); x-=10; y-=10;
return x;
}
*/

void happy(int x[], int time, int speed, int color)
{
	x = retrive9('H');
	paint(x, 0, 0, time, speed, color, 0);
	paint(x, 0, 0, time / 2, speed, color, 0);
	x = retrive9('A');
	paint(x, 0, 0, time, speed, color, 0);
	x = retrive9('P');
	paint(x, 0, 0, time, speed, color, 0);
	x = retrive9('P');
	paint(x, 100, 0, time, speed, color, 0);
	x = retrive9('Y');
	paint(x, 0, 0, time, speed, color, 0);
}
void ramadan(int x[], int time, int speed, int color)
{
	x = retrive8('R');
	paint(x, 0, 35, time, speed, color, 0);
	x = retrive8('A');
	paint(x, 0, 35, time, speed, color, 0);
	x = retrive8('M');
	paint(x, 0, 35, time, speed, color, 0);
	paint(x, 0, 35, time / 2, speed, color, 0);
	x = retrive8('A');
	paint(x, 185, 35, time, speed, color, 0);
	x = retrive8('D');
	paint(x, 0, 35, time, speed, color, 0);
	x = retrive8('A');
	paint(x, 355, 35, time, speed, color, 0);
	x = retrive8('N');
	paint(x, 0, 35, time, speed, color, 0);
	paint(x, 0, 35, time / 2, speed, color, 0);
}

void eid(int x[], int time, int speed, int color)
{
	x = retrive10('E');
	paint(x, 0, 0, time, speed, color, 0);
	paint(x, 0, 0, time / 2, speed, color, 0);
	x = retrive10('I');
	paint(x, 0, 0, time, speed, color, 0);
	x = retrive10('D');
	paint(x, 0, 0, time, speed, color, 0);
	paint(x, 0, 0, time / 2, speed, color, 0);
}

void mubarak(int x[], int time, int speed, int color)
{
	x = retrive8('M');
	paint(x, -150, 10, time, speed, color, 0);
	paint(x, -150, 10, time / 2, speed, color, 0);
	x = retrive8('U');
	paint(x, 0, -30, time, speed, color, 0);
	paint(x, 0, -30, time / 2, speed, color, 0);
	x = retrive8('B');
	paint(x, 0, -30, time, speed, color, 0);
	paint(x, 0, -30, time / 2, speed, color, 0);
	x = retrive8('A');
	paint(x, 185, 10, time, speed, color, 0);
	x = retrive8('R');
	paint(x, 350, 10, time, speed, color, 0);
	x = retrive8('A');
	paint(x, 355, 10, time, speed, color, 0);
	x = retrive8('K');
	paint(x, 0, -30, time, speed, color, 0);
}

void year(int speed, int time)
{
	while (time != 0)
	{
		time--;
		Br int size = 1;
		int x = 280, y = 220;
		x -= 10;
		y -= 10;
		x -= 10;
		y -= 10;
		++size;
		setcolor(random(15) + 1);
		settextstyle(4, 0, ++size);
		outtextxy(x, y, "2018");
		delay(0 * speed); //If0intf("%d",size);
		setcolor(0);
		outtextxy(x, y, "2018");
		x -= 10;
		y -= 10;
		setcolor(random(15) + 1);
		settextstyle(4, 0, ++size);
		outtextxy(x, y, "2018");
		delay(0 * speed); //If0intf("%d",size);
		setcolor(0);
		outtextxy(x, y, "2018");
		x -= 10;
		y -= 10;
		setcolor(random(15) + 1);
		settextstyle(4, 0, ++size);
		outtextxy(x, y, "2018");
		delay(0 * speed); //If0intf("%d",size);
		setcolor(0);
		outtextxy(x, y, "2018");
		x -= 10;
		y -= 10;
		setcolor(random(15) + 1);
		settextstyle(4, 0, ++size);
		outtextxy(x, y, "2018");
		delay(0 * speed); //If0intf("%d",size);
		setcolor(0);
		outtextxy(x, y, "2018");
		x -= 10;
		y -= 10;
		setcolor(random(15) + 1);
		settextstyle(4, 0, ++size);
		outtextxy(x, y, "2018");
		delay(0 * speed); //If0intf("%d",size);
		setcolor(0);
		outtextxy(x, y, "2018");
		x -= 10;
		y -= 10;
		setcolor(random(15) + 1);
		settextstyle(4, 0, ++size);
		outtextxy(x, y, "2018");
		delay(0 * speed); //If0intf("%d",size);
		setcolor(0);
		outtextxy(x, y, "2018");
		x -= 10;
		y -= 10;
		setcolor(random(15) + 1);
		settextstyle(4, 0, ++size);
		outtextxy(x, y, "2018");
		delay(0 * speed); //If0intf("%d",size);
		setcolor(0);
		outtextxy(x, y, "2018");
		x -= 10;
		y -= 10;
		setcolor(random(15) + 1);
		settextstyle(4, 0, ++size);
		outtextxy(x - 30, y, "2018");
		delay(0 * speed); //If0 //printf("%d",size);
		setcolor(0);
		outtextxy(x - 30, y, "2018");
		x -= 10;
		y -= 10;
	}
}

int main()
{
	Clr int *x;
	int c = 1;

	Clr
			Open
					anm7(0);
	If0
			CLear Close OpenAgain
					anm4(0);
	If0

			CLear Close OpenAgain
					anm5(0);
	If0

			CLear Close OpenAgain
					anm3(1000, 0);
	If0
			CLear Close OpenAgain

					textAnm("HAPPY RAMADAN EID", 600, 150, 1, 10);
	If0
			CLear Close OpenAgain

					eid(x, 1000, 1, 16);
	eid(x, 50000, 0, 0);
	year(50, 5);

	If0

			CLear Close OpenAgain
					eid(x, 1000, 1, 16);
	eid(x, 50000, 0, 0);
	mubarak(x, 1000, 1, 16);
	mubarak(x, 25000, 0, 0);
	If0
			CLear Close OpenAgain
					settextstyle(4, 0, 10);
	anm1();
	anm2();
	CLear Close OpenAgain
			If0
					happy(x, 1000, 1, 16);
	happy(x, 50000, 0, 0);
	ramadan(x, 1000, 1, 16);
	ramadan(x, 50000, 0, 0);
	eid(x, 1000, 1, 16);
	eid(x, 50000, 0, 0);
	// happy(x);
	// ramadan(x);
	//eid(x);
	CLear
			If0
					Close
							OpenAgain

									printf("bye");
	get
			Close return 0;
}