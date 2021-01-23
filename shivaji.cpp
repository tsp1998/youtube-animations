//Shivaji Maharaj Animation
//Made by TSP

#include <conio.h>
#include <graphics.h>
#include <string.h>
#include <stdlib.h>
#include <dos.h>
#include <tsp.h>
int gd = DETECT, gm;
#define clear cleardevice();
#define clr clrscr();
#define get getch();
#define exit exit(0);
#define close closegraph();
#define flush flushall();
#define init initgraph(&gd, &gm, "c:\\tc\\bgi");
int stringX = 200, stringY = 200, stringX2 = 200, stringY2 = 400;
int color = 4;
int radius = 200;
int stringFlag = 1;
const char *string = "19 February 2018";
const char *string2 = "Jay Shivaji";
const char *string3 = "Jay Bhavani";
const char *string4 = "pratipachchandralekhev*vardhishnurvishvavandita&saahasnoshivasaishya#mudra bhadraay raajate!";
const char *temp1 = "pratipachchandralekhev", *temp2 = "vardhishnurvishvavandita", *temp3 = "saahasnoshivasaishya", *temp4 = "mudra bhadraay raajate!";
const char *string5 = "The glory of this Mudra of Shahaji's son Shivaji will grow like the first day moon, it will be worshiped by the world & it will shine only for well being of people!";

void anmHelper();
void flag();
void anm4();
void anm1(int stringX, int stringY);
void anm2(int stringX, int stringY, int stringX2, int stringY2);
void anm3(int stringX, int stringY, int stringX2, int stringY2);
void flag(int x1, int y1);
void flag2(int x1, int y1);
void pixel(int color)
{
	putpixel(random(640), random(480), 4);
}
void circleRandom(int color, int radius)
{
	setfillstyle(1, color);
	setcolor(color);
	unsigned int x, y;
	circle(x = random(640), y = random(480), radius);
	floodfill(x, y, color);
}

#define pixelCall                                                 \
	pixel(color);                                                   \
	pixel(color);                                                   \
	pixel(color);                                                   \
	pixel(color);                                                   \
	pixel(color);                                                   \
	pixel(color);                                                   \
	pixel(color);                                                   \
	pixel(color);                                                   \
	pixel(color);                                                   \
	pixel(color);                                                   \
	pixel(color);                                                   \
	pixel(color);                                                   \
	pixel(color);                                                   \
	pixel(color);                                                   \
	pixel(color);                                                   \
	pixel(color);                                                   \
	pixel(color);                                                   \
	pixel(color);                                                   \
	pixel(color);                                                   \
	pixel(color);                                                   \
	pixel(color);                                                   \
	pixel(color);                                                   \
	pixel(color);                                                   \
	pixel(color);                                                   \
	pixel(color);                                                   \
/*                                                                \
pixel(color);pixel(color);pixel(color);pixel(color);pixel(color); \
pixel(color);pixel(color);pixel(color);pixel(color);pixel(color); \
pixel(color);pixel(color);pixel(color);pixel(color);pixel(color); \
*/
short universal = 1;
int main()
{
	init
			settextstyle(1, 0, 5);
	//outtextxy(150,300,"3.Exit");
	//1
	stringX = 150;
	stringY = 200;
	anm1(stringX, stringY);
	//br//get
	clear
			//2
			stringX = 200;
	stringY = 150;
	stringX2 = 200;
	stringY2 = 250;
	anm3(stringX, stringY, stringX2, stringY2);
	clear //br//get
			universal = 0;
	short time = 0, i = 0;

	//3
	while (time < 25)
	{
		unsigned x = time * 20, y = (100);
		//if(y<300)
		//y+=300;
		flag2(x, y);
		delay(10);
		br
				time++;
	}
	clear
			//br//get
			//4
			stringX = 200;
	stringY = 150;
	stringX2 = 200;
	stringY2 = 250;
	anm3(stringX, stringY, stringX2, stringY2);
	clear //br//get

			//5
			time = 0;
	while (time < 25)
	{
		unsigned x = time * 20, y = random(600);
		if (y < 300)
			y += 300;
		flag(x, y);
		br
				time++;
	}

	clear //br//get
			//6
			stringX = 200;
	stringY = 150;
	stringX2 = 200;
	stringY2 = 250;
	anm4();
	clear //br//get

			//7
			time = 0,
			i = 0;
	while (time < 25)
	{
		unsigned x = time * 20, y = (100);
		//if(y<300)
		//y+=300;
		flag2(x, y);
		delay(10);
		br
				time++;
	}
	clear
			//br//get

			//8
			time = 12;
	while (time < 25)
	{
		unsigned x = time * 20, x2 = time * 20 - 250, y = (100);
		flag2(x, y);
		flag2(x2, y);
		delay(10);
		br
				time++;
	}
	clear //br//get

			//9
			stringX = 200;
	stringY = 150;
	stringX2 = 200;
	stringY2 = 250;
	anm3(stringX, stringY, stringX2, stringY2);
	clear //br//get

			//10
			time = 0,
			i = 0;
	while (time < 25)
	{
		unsigned x = time * 20, y = (100);
		//if(y<300)
		//y+=300;
		flag2(x, y);
		delay(10);
		br
				time++;
	}
	clear
			//br//get

			//13
			stringX = 150;
	stringY = 200;
	anm1(stringX, stringY);
	//br//get
	clear
			//br//get

			//stringX=200;stringY=150;stringX2=200;stringY2=250;
			//anm3(stringX,stringY,stringX2,stringY2);
			//printf("%s",string4);
			clear
					flush
					//anm4();
					/*
while(1){
	flag2(time*(10)+10,600);
	delay(500);
	//br//if0
	if(time>=50){
		time=0;
	//clear
	}
	time++;
br
}
*/

					getch();
	closegraph();
	return 0;
}

void flag(int x1, int y1)
{
	int x2 = x1 + 200, y2 = y1 + 100;
	settextstyle(4, 0, 5);
	setcolor(0);
	outtextxy(50, 20, string2);
	outtextxy(350, 20, string3);
	setcolor(random(14) + 1);
	outtextxy(50, 20, string2);
	outtextxy(350, 20, string3);
	for (short i = 0; i < 200; i += 20)
	{
		/*
setcolor(0);
	line(x1,y1*2-i,x1,y1*4-i);
	line(x1-1,y1-i,x1-1,y1*4-i);
setfillstyle(1,0);
	//setcolor(0);
	line(x1,y1-i,x1,y1*2-i);
	line(x1,y1-i,x1+200,y1-i);
	
	line(x1+100,y1+50-i,x1+200,y1-i);
	line(x1+100,y1+50-i,x1+200,y2-i);
	
	line(x1,y2-i,x1+200,y2-i);
	floodfill(x1+50,y1+50-i,0);
	br

*/
		//clear

		setcolor(14);
		line(x1, y1 * 2 - i, x1, y1 * 4 - i);
		line(x1 - 1, y1 - i, x1 - 1, y1 * 4 - i);
		setfillstyle(1, 12);
		setcolor(12);
		line(x1, y1 - i, x1, y1 * 2 - i);
		line(x1, y1 - i, x1 + 200, y1 - i);

		line(x1 + 100, y1 + 50 - i, x1 + 200, y1 - i);
		line(x1 + 100, y1 + 50 - i, x1 + 200, y2 - i);

		line(x1, y2 - i, x1 + 200, y2 - i);

		floodfill(x1 + 50, y1 + 50 - i, 12);
		floodfill(x1 + 170, y1 + 5 - i, 12);
		floodfill(x1 + 150, y1 + 20 - i, 12);
		br
				delay(0);

		setcolor(0);
		line(x1, y1 * 2 - i, x1, y1 * 4 - i);
		line(x1 - 1, y1 - i, x1 - 1, y1 * 4 - i);
		setfillstyle(1, 0);
		setcolor(0);
		line(x1, y1 - i, x1, y1 * 2 - i);
		line(x1, y1 - i, x1 + 200, y1 - i);

		line(x1 + 100, y1 + 50 - i, x1 + 200, y1 - i);
		line(x1 + 100, y1 + 50 - i, x1 + 200, y2 - i);

		line(x1, y2 - i, x1 + 200, y2 - i);

		floodfill(x1 + 50, y1 + 50 - i, 0);
		floodfill(x1 + 170, y1 + 5 - i, 0);
		floodfill(x1 + 150, y1 + 20 - i, 0);
		br
				delay(0);
	}

	setcolor(0);
	outtextxy(50, 20, string2);
	outtextxy(350, 20, string3);
	setcolor(random(14) + 1);
	outtextxy(50, 20, string2);
	outtextxy(350, 20, string3);

	setcolor(14);
	line(x1, y1 * 2 - i, x1, y1 * 4 - i);
	line(x1 - 1, y1 - i, x1 - 1, y1 * 4 - i);
	setfillstyle(1, 12);
	setcolor(12);
	line(x1, y1 - i, x1, y1 * 2 - i);
	line(x1, y1 - i, x1 + 200, y1 - i);

	line(x1 + 100, y1 + 50 - i, x1 + 200, y1 - i);
	line(x1 + 100, y1 + 50 - i, x1 + 200, y2 - i);

	line(x1, y2 - i, x1 + 200, y2 - i);

	floodfill(x1 + 50, y1 + 50 - i, 12);
	floodfill(x1 + 170, y1 + 5 - i, 12);
	floodfill(x1 + 150, y1 + 20 - i, 12);

	setcolor(0);
	outtextxy(50, 20, string2);
	outtextxy(350, 20, string3);
	setcolor(random(14) + 1);
	outtextxy(50, 20, string2);
	outtextxy(350, 20, string3);
}

void flag2(int x1, int y1)
{
	int x2 = x1 + 200, y2 = y1 + 100;
	short i = 0;
	settextstyle(4, 0, 5);
	setcolor(0);
	outtextxy(50, 20, string2);
	outtextxy(350, 20, string3);
	setcolor(random(14) + 1);
	outtextxy(50, 20, string2);
	outtextxy(350, 20, string3);
	//clear
	setcolor(14);
	line(x1, y1 * 2 - i, x1, y1 * 4 - i);
	line(x1 - 1, y1 - i, x1 - 1, y1 * 4 - i);
	setfillstyle(1, 12);
	setcolor(12);
	line(x1, y1 - i, x1, y1 * 2 - i);
	line(x1, y1 - i, x1 + 200, y1 - i);

	line(x1 + 100, y1 + 50 - i, x1 + 200, y1 - i);
	line(x1 + 100, y1 + 50 - i, x1 + 200, y2 - i);

	line(x1, y2 - i, x1 + 200, y2 - i);

	floodfill(x1 + 50, y1 + 50 - i, 12);
	floodfill(x1 + 170, y1 + 5 - i, 12);
	floodfill(x1 + 150, y1 + 20 - i, 12);

	setcolor(0);
	outtextxy(50, 20, string2);
	outtextxy(350, 20, string3);
	setcolor(random(14) + 1);
	outtextxy(50, 20, string2);
	outtextxy(350, 20, string3);
	/*
	setfillstyle(1,12);
	setcolor(4);
	
	line(x1,y1-i,x1,y1*2-i);
	line(x1,y1-i,x1+200,y1-i);
	
	line(x1+100,y1+50-i,x1+200,y1-i);
	line(x1+100,y1+50-i,x1+200,y2-i);
	
	line(x1,y2-i,x1+200,y2-i);
	floodfill(x2-20,y1+5-i,4);
	*/
}

void anm1(int stringX, int stringY)
{
	int i = 0;
	char *str = "";
	settextstyle(4, 0, 5);
	setcolor(12);
	while (string[i] != '\0')
	{
		str[0] = string[i];
		outtextxy(150 + 20 * i, 200, str);
		pixel(color);
		pixel(color);
		pixel(color);
		pixel(color);
		pixel(color);
		delay(20);
		i++;
		br
	}

	i = strlen(string);
	setcolor(0);
	while (i >= 0)
	{
		br
				str[0] = string[i];
		outtextxy(150 + 20 * i, 200, str);
		pixelCall
				delay(20);
		i--;
	}
	stringFlag = 1;
	int count = 0, time = 0;
	while (time < 120)
	{
		setcolor(0);
		outtextxy(stringX, stringY, string);
		pixelCall pixelCall pixelCall
				delay(20);
		setcolor(12);
		outtextxy(stringX, stringY, string);
		pixelCall pixelCall pixelCall
				delay(20);
		count++;
		time++;
		if (count == 40)
		{
			br
					color = 0;
			anmHelper();
			anmHelper();
			anmHelper();
			br
			anmHelper();
			anmHelper();
			anmHelper();
			br
			anmHelper();
			anmHelper();
			anmHelper();
			br
		}
		if (count == 60)
		{
			color = 12;
			count = 0;
		}
		br
	}
}

void anm2(int stringX, int stringY, int stringX2, int stringY2)
{
	int i = 0;
	char *str = "\0";
	char *str2 = "";
	settextstyle(4, 0, 5);
	setcolor(12);
	stringY = 150;
	stringY2 = 300;
	while (string2[i] != '\0')
	{
		str[0] = string2[i];
		str2[0] = string3[i];
		////br//if0
		outtextxy(stringX + 22 * i, stringY, str);
		outtextxy(stringX2 + 22 * i, stringY2, str2);
		pixel(color);
		pixel(color);
		pixel(color);
		pixel(color);
		pixel(color);
		delay(20);
		i++;
		br
	}

	i = strlen(string);
	setcolor(0);
	while (i >= 0)
	{
		br
				str[0] = string2[i];
		str2[0] = string3[i];
		outtextxy(stringX + 22 * i, stringY, str);
		outtextxy(stringX2 + 22 * i, stringY2, str2);
		pixelCall
				delay(20);
		i--;
	}

	stringFlag = 2;
	int count = 0, time = 0;
	while (time < 120)
	{
		setcolor(0);
		outtextxy(stringX, stringY, string);
		outtextxy(stringX2, stringY2, string3);
		pixelCall pixelCall pixelCall
				delay(20);
		setcolor(12);
		outtextxy(stringX, stringY, string2);
		outtextxy(stringX2, stringY2, string3);
		pixelCall pixelCall pixelCall
				delay(20);
		count++;
		time++;
		if (count == 40)
		{
			br
					color = 0;
			anmHelper();
			anmHelper();
			anmHelper();
			br
			anmHelper();
			anmHelper();
			anmHelper();
			br
			anmHelper();
			anmHelper();
			anmHelper();
			br
		}
		if (count == 60)
		{
			color = 12;
			count = 0;
		}
		br
	}
}

void anm3(int stringX, int stringY, int stringX2, int stringY2)
{
	int i = 0;
	char *str = "";
	char *str2 = "";
	settextstyle(4, 0, 5);
	setcolor(12);
	i = 0;
	if (universal == 1)
	{
		while (string2[i] != '\0')
		{
			str[0] = string2[i];
			//str2[0]=string3[i];
			outtextxy(stringX + 20 * i, stringY, str);
			//outtextxy(stringX2+20*i,stringY2,str2);
			pixel(color);
			pixel(color);
			pixel(color);
			pixel(color);
			pixel(color);
			delay(20);
			i++;
			br
		}

		i = 0;
		while (string3[i] != '\0')
		{
			//str[0]=string2[i];
			str2[0] = string3[i];
			//outtextxy(stringX+20*i,stringY,str);
			outtextxy(stringX2 + 20 * i, stringY2, str2);
			pixel(color);
			pixel(color);
			pixel(color);
			pixel(color);
			pixel(color);
			delay(20);
			i++;
			br
		}
	}

	i = strlen(string);
	setcolor(0);
	while (i >= 0)
	{
		br
				str[0] = string2[i];
		//str2[0]=string3[i];
		outtextxy(stringX + 20 * i, stringY, str);
		//outtextxy(stringX2+20*i,stringY2,str2);
		pixelCall
				delay(20);
		i--;
	}
	i = strlen(string);
	setcolor(0);
	while (i >= 0)
	{
		br
				//str[0]=string2[i];
				str2[0] = string3[i];
		//outtextxy(stringX+20*i,stringY,str);
		outtextxy(stringX2 + 20 * i, stringY2, str2);
		pixelCall
				delay(20);
		i--;
	}

	//br//get

	stringFlag = 2;
	int count = 0, time = 0;
	while (time < 120)
	{
		setcolor(0);
		outtextxy(stringX, stringY, string2);
		outtextxy(stringX2, stringY2, string3);
		pixelCall pixelCall pixelCall
				delay(20);
		setcolor(12);
		outtextxy(stringX, stringY, string2);
		outtextxy(stringX2, stringY2, string3);
		pixelCall pixelCall pixelCall
				delay(20);
		count++;
		time++;
		if (count == 40)
		{
			br
					color = 0;
			anmHelper();
			anmHelper();
			anmHelper();
			br
			anmHelper();
			anmHelper();
			anmHelper();
			br
			anmHelper();
			anmHelper();
			anmHelper();
			br
		}
		if (count == 60)
		{
			color = 12;
			count = 0;
		}
		br
	}
}

void anm4()
{
	int i = 0, down = 0, x;
	char *str = "\0", *temp = "s";
	short flag = 1;
	flush
			/*
while(1){
	switch(flag){
	case 1:
	str[0]=temp1[i];
	outtextxy(stringX,stringY+down,str);
	br
	goto increment;
	case 2:
	str[0]=temp2[i];
	outtextxy(stringX,stringY+down,str);
	br
	goto increment;
	case 3:
	str[0]=temp3[i];
	outtextxy(stringX,stringY+down,str);
	br
	goto increment;
	case 4:
	str[0]=temp4[i];
	if(temp4[i]=='\0')
	temp[0]=temp4[i];
	outtextxy(stringX,stringY+down,str);
	br
	goto increment;
	}
	increment:
	if(str[0]=='\0'){
	down+=70;
	stringX=40;
	flag++;
	i=0;
	br
	continue;
	}
	
	if(temp[i]=='\0')
	break;
	temp[i]='s';
pixel(color);pixel(color);pixel(color);pixel(color);pixel(color);
delay(20);
i++;
br
	stringX+=25;
}
*/

			settextstyle(4, 0, 5);
	setcolor(12);
	down = 0;
	stringX = 40;
	stringY = 90;
	i = 0;
	while (temp1[i] != '\0')
	{
		str[0] = temp1[i];
		outtextxy(stringX, stringY + down, str);
		pixel(color);
		pixel(color);
		pixel(color);
		pixel(color);
		pixel(color);
		i++;
		stringX += 25;
		delay(10);
	}

	down += 50;
	stringX = 20;
	stringY = 120;
	i = 0;
	while (temp2[i] != '\0')
	{
		str[0] = temp2[i];
		outtextxy(stringX, stringY + down, str);
		pixel(color);
		pixel(color);
		pixel(color);
		pixel(color);
		pixel(color);
		i++;
		stringX += 25;
		delay(10);
	}

	down += 50;
	stringX = 50;
	stringY = 150;
	i = 0;
	while (temp3[i] != '\0')
	{
		str[0] = temp3[i];
		outtextxy(stringX, stringY + down, str);
		pixel(color);
		pixel(color);
		pixel(color);
		pixel(color);
		pixel(color);
		i++;
		stringX += 25;
		delay(10);
	}

	down += 50;
	stringX = 25;
	stringY = 180;
	i = 0;
	while (temp4[i] != '\0')
	{
		str[0] = temp4[i];
		outtextxy(stringX, stringY + down, str);
		pixel(color);
		pixel(color);
		pixel(color);
		pixel(color);
		pixel(color);
		i++;
		stringX += 25;
		delay(10);
	}

	//br//get
	clear
			settextstyle(4, 0, 6);
	stringFlag = 4;
	int count = 0, time = 0;
	stringX = 50;
	stringY = 10;
	while (time < 50)
	{
		setcolor(0);
		outtextxy(stringX + 35, stringY + 70, temp1);
		outtextxy(stringX, stringY + 150, temp2);
		outtextxy(stringX + 45, stringY + 220, temp3);
		outtextxy(stringX + 5, stringY + 290, temp4);
		pixelCall pixelCall pixelCall
				delay(50);
		setcolor(random(14) + 1);
		outtextxy(stringX + 35, stringY + 70, temp1);
		outtextxy(stringX, stringY + 150, temp2);
		outtextxy(stringX + 45, stringY + 220, temp3);
		outtextxy(stringX + 5, stringY + 290, temp4);
		pixelCall pixelCall pixelCall
				delay(50);
		count++;
		time++;
		if (count == 20)
		{
			br
					color = 0;
			anmHelper();
			anmHelper();
			anmHelper();
			br
			anmHelper();
			anmHelper();
			anmHelper();
			br
			anmHelper();
			anmHelper();
			anmHelper();
			br
		}
		if (count == 40)
		{
			color = 12;
			count = 0;
		}
		br
	}
}

void anmHelper()
{
	circleRandom(color, radius);
	circleRandom(color, radius);
	circleRandom(color, radius);
	circleRandom(color, radius);
	circleRandom(color, radius);
	setcolor(12);
	if (stringFlag == 1)
	{
		setcolor(0);
		outtextxy(stringX, stringY, string);
		setcolor(12);
		outtextxy(stringX, stringY, string);
	}
	else if (stringFlag == 2)
	{
		setcolor(0);
		outtextxy(stringX, stringY, string2);
		outtextxy(stringX2, stringY2, string3);
		setcolor(12);
		outtextxy(stringX, stringY, string2);
		//outtextxy(stringX2,stringY2,string3);
	}
	else if (stringFlag == 4)
	{
		setcolor(0);
		outtextxy(stringX + 35, stringY + 70, temp1);
		outtextxy(stringX, stringY + 150, temp2);
		outtextxy(stringX + 45, stringY + 220, temp3);
		outtextxy(stringX + 5, stringY + 290, temp4);

		setcolor(random(14) + 1);
		outtextxy(stringX + 35, stringY + 70, temp1);
		outtextxy(stringX, stringY + 150, temp2);
		outtextxy(stringX + 45, stringY + 220, temp3);
		outtextxy(stringX + 5, stringY + 290, temp4);

		outtextxy(stringX, stringY, string2);
		outtextxy(stringX2, stringY2, string3);
		delay(10);
		setcolor(0);
		outtextxy(stringX, stringY, string2);
		outtextxy(stringX2, stringY2, string3);
	}
}