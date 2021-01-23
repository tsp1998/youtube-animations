/* std Functions defined by TSP */
/*Time Saving Protocol*/
/*
Tandale Shubham Parmeshwar
Programmer
SKNSCOE,Korti
Email-tsp@outlook.in
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define pf printf
#define sf scanf
#define sl strlen
#define scmp strcmp
#define scp strcpy
#define sct strcat
#define sr strrev
#define gs gets
#define ps puts
#define clr clrscr();
#define clear cleardevice();
#define kbh while (!kbhit())
#define br     \
	if (kbhit()) \
		break;
#define if0           \
	if (getch() == '0') \
		exit(0);
#define get getch();
#define exit exit(0);
#define go goto

void rev(char str[])
{
	int i;
	char c;
	for (i = 0; i < strlen(str) / 2; i++)
	{
		c = str[i];
		str[i] = str[strlen(str) - 1 - i];
		str[strlen(str) - 1 - i] = c;
	}
}

int palindrome(char str[])
{
	int i, flag = 1;
	char c;
	for (i = 0; i < strlen(str) / 2; i++)
	{
		c = str[i];
		if (str[i] != str[strlen(str) - 1 - i])
			flag = 0;
	}
	if (flag == 0)
		return 0;
	else
		return 1;
}

void its(char str[], long long int num)
{
	int r, i = 0;
	while (num != 0)
	{
		r = num % 10;
		str[i] = '0' + r;
		num /= 10;
		i++;
	}
	rev(str);
}
void ii(int p)
{
	printf("%d", p);
}
int sci()
{
	int s;
	scanf("%d", &s);
	return s;
}

void ff(float p)
{
	printf("%f", p);
}
float scf()
{
	float s;
	scanf("%f", &s);
	return s;
}

void cc(char p)
{
	printf("%c", p);
}
char scc()
{
	char s;
	scanf("%c", &s);
	return s;
}

void is(char str[], int p)
{
	printf("%s", str);
	printf("%d", p);
}

void fs(char str[], float p)
{
	printf("%s", str);
	printf("%f", p);
}

void cs(char str[], char p)
{
	printf("%s", str);
	printf("%c", p);
}

void scs(char str[])
{
	printf("%s", str);
}
void in(int p)
{
	printf("%d\n", p);
}

void fn(float p)
{
	printf("%f\n", p);
}

void cn(char p)
{
	printf("%c\n", p);
}
void sn(char str[])
{
	printf("%s\n", str);
}
int randomFromto(int start, int end)
{
	int r = rand() % end;
	while (1)
	{
		if (r >= start && r <= end)
			return r;
		else if (r <= start)
			r += start;
		if (r >= start && r <= end)
			return r;
		r = rand() % end;
	}
}
