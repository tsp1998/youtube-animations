//synopsis

/*YouTube*/
/*
Tandale Shubham Parmeshwar
Programmer
SKNSCOE,Korti
Email-tsp@outlook.in
*/
#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
char str[10] = {'\0'};
void its(int t); //integer to string
//void main(int font=1,int size=1);
int flag = 0;
char ch = '0';
void anm(int font, int size);
void main()
{
	FILE *r;
	int gd = DETECT, gm, x = 0, y = 0, f = 0, j = 50;
	int font, size;
	int i = 10;
	char str[2] = {'\0'};
	if (flag == 0)
	{
		font = 0;
		size = 1;
		flag = 1;
	}
	clrscr();
	initgraph(&gd, &gm, "c:\\tc\\bgi");
	cleardevice();
	settextstyle(font, 0, size);
	setbkcolor(15);
	r = fopen("s.txt", "r");
	if (r == NULL)
		exit(0);
	setcolor(random(14) + 1);
	while (1)
	{
		if (str[0] == EOF)
		{
			ch = getch();
			if (ch == '0')
				exit(0);
			main();
		}
		str[0] = fgetc(r);
		if (str[0] == '\0')
		{
			y += j;
			x = 0;
			setcolor(random(14));
		}
		//printf("%c",str[0]);
		outtextxy(x, y, str);
		x += i;
	}

	cleardevice();
	fclose(r);
	closegraph();
}
void anm(int font, int size)
{
}
