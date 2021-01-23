
//Rectangle Animation made by TSP
#include <graphics.h>
#include <conio.h>
#include <stdio.h>
#include <dos.h>
#include <tsp.h>
int count = 0;

int c = 1;

void rect(int x, int y, int size1, int size2, int DELAY, int color)
{
    int x1 = x, y1 = y;
    for (int i = 0; i < size1; i++)
    {
        br if (color == 0)
            setcolor(0);
        else setcolor(RANDOM);
        rectangle(x--, y--, x1++, y1++);
        delay(DELAY);
    }
    //   //clear
    // rectangle(0,0,630,470);
    for (i = 0; i < size2; i++)
    {
        br if (color == 0)
            setcolor(0);
        else setcolor(RANDOM);

        rectangle(x--, y, x1++, y1);
        delay(DELAY);
    }
}

void rectGrid(int size1, int size2, int DELAY)
{
    int flag = 1;
    //clear
    int j = 0, k = 0;
    int x, y;
    int xpos = 0, ypos = 0;
    ypos = 0;
    while (ypos < 480)
    {
        br
            xpos = 0;
        while (xpos < 640)
        {
            br int x1 = x = 10, y1 = y = 10;
            for (int i = 0; i < size1; i++)
            {
                br if (flag == 0)
                    setcolor(0);
                else setcolor(RANDOM);
                // for( j=0;j<howMuchX;j++)
                //for( k=0;k<howMuchY;k++){br
                rectangle(xpos + x--, ypos + y--, xpos + x1++, ypos + y1++);
                delay(DELAY);
                //	}
            }
            xpos += 50;
        }
        ypos += 50;
    }
    //   //clear
    ypos = 0;
    while (ypos < 480)
    {
        br
            xpos = 0;
        while (xpos < 640)
        {
            br
                rectangle(0, 0, 630, 470);
            int x1 = x = 10, y1 = y = 10;
            for (int i = 0; i < size2; i++)
            {
                br if (flag == 0)
                    setcolor(0);
                else setcolor(RANDOM);
                //for( j=0;j<howMuchX;j++)
                // for( k=0;k<howMuchY;k++){br
                rectangle(xpos + x--, ypos + y--, xpos + x1++, ypos + y1++);
                delay(DELAY);
                //}
            }
            if (flag == 1)
                flag = 0;
            else
                flag = 1;
            xpos += 50;
        }
        ypos += 50;
    }
}

void smallRectGrid(int size1, int size2, int DELAY, int color)
{
    int flag = 1;
    int j = 0, k = 0;
    int x, y;
    int xpos = 0, ypos = 0;
    for (int i = 0; i < 1; i++)
    {
        br if (color == 16)
            setcolor(RANDOM);
        else setcolor(color);
        ypos = 0;
        while (ypos < 480)
        {
            br
                xpos = 0;
            while (xpos < 640)
            {
                br int x1 = x = 10, y1 = y = 10;
                rectangle(xpos + x--, ypos + y--, xpos + x1++, ypos + y1++);
                delay(DELAY);
                xpos += 50;
            }
            ypos += 50;
        }
    }

    for (i = 0; i < 1; i++)
    {
        br if (color == 16)
            setcolor(RANDOM);
        else setcolor(color);
        ypos = 0;
        while (ypos < 480)
        {
            br
                xpos = 0;
            while (xpos < 640)
            {
                br int x1 = x = 10, y1 = y = 10;
                rectangle(xpos + x--, ypos + y--, xpos + x1++, ypos + y1++);
                delay(DELAY);
                xpos += 50;
            }
            ypos += 50;
        }
    }
}

void rectGridIncrmnt_(int size1, int size2, int DELAY)
{
    int flag = 1;
    int j = 0, k = 0;
    int x, y;
    int xpos = 0, ypos = 0;
    for (int i = 0; i < size1; i++)
    {
        br if (flag == 0)
            setcolor(0);
        else setcolor(RANDOM);
        ypos = 0;
        while (ypos < 480)
        {
            br int x1 = x = 10, y1 = y = 15;
            xpos = 0;
            while (xpos < 640)
            {
                br
                    setcolor(RANDOM);
                rectangle(xpos + x--, ypos + y--, xpos + x1++, ypos + y1++);
                delay(DELAY);
                xpos += 50;
            }
            ypos += 50;
        }
        //   }
    }

    for (i = 0; i < size2; i++)
    {
        br if (flag == 0)
            setcolor(0);
        else setcolor(RANDOM);
        ypos = 0;
        while (ypos < 480)
        {
            br int x1 = x = 10, y1 = y = 15;
            xpos = 0;
            while (xpos < 640)
            {
                br int x1 = x = 10, y1 = y = 10;
                rectangle(xpos + x--, ypos + y--, xpos + x1++, ypos + y1++);
                delay(DELAY);
                xpos += 50;
            }
            ypos += 50;
        }
        //}
    }
    if (flag == 1)
        flag = 0;
    else
        flag = 1;
}

void rectGrid2(int size1, int size2, int DELAY)
{
    int flag = 1;
    int howMuchX = 640 / (size1 + size2);
    int howMuchY = 480 / (size1 + size2);

    int j = 0, k = 0;
    int x, y;
    int xpos = 0, ypos = 0;
    int x1 = x = 20, y1 = y = 15;
    for (int i = 0; i < size1; i++)
    {
        br if (flag == 0)
            setcolor(0);
        else setcolor(RANDOM);
        ypos = 0;
        while (ypos < 480)
        {
            br
                xpos = 0;
            while (xpos < 640)
            {
                br
                    rectangle(xpos + x, ypos + y, xpos + x1, ypos + y1);
                delay(DELAY);
                xpos += 50;
            }
            ypos += 50;
        }
        x--;
        y--;
        x1++;
        y1++;
        //   }
    }

    //   //clear
    x1 = x = 20, y1 = y = 15;
    for (i = 0; i < size2; i++)
    {
        br if (flag == 0)
            setcolor(0);
        else setcolor(RANDOM);
        ypos = 0;
        while (ypos < 480)
        {
            br int x1 = x = 20, y1 = y = 20;
            xpos = 0;
            while (xpos < 640)
            {
                br int x1 = x = 10, y1 = y = 10;
                rectangle(xpos + x, ypos + y, xpos + x1, ypos + y1);
                delay(DELAY);
                xpos += 50;
            }
            ypos += 50;
        }
        x--;
        y--;
        x1++;
        y1++;

        //}
    }
    if (flag == 1)
        flag = 0;
    else
        flag = 1;
}

void rectGridIncrmnt(int DELAY, int color)
{
    int x, y;
    int xpos, ypos;
    ypos = 0;
    while (ypos < 480)
    {
        br int x1 = x = 10, y1 = y = 15;
        xpos = 0;
        while (xpos < 640)
        {
            br if (color == 16)
                setcolor(RANDOM);
            else setcolor(color);
            rectangle(xpos + x--, ypos + y--, xpos + x1++, ypos + y1++);
            delay(DELAY);
            xpos += 50;
        }
        ypos += 50;
    }
}
void rectGridIncrmnt2(int DELAY, int color)
{
    int x, y;
    int xpos, ypos;
    ypos = 480;
    while (ypos > 0)
    {
        br int x1 = x = 10, y1 = y = 15;
        xpos = 640;
        while (xpos > 0)
        {
            br if (color == 16)
                setcolor(RANDOM);
            else setcolor(color);
            rectangle(xpos + x--, ypos + y--, xpos + x1++, ypos + y1++);
            delay(DELAY);
            xpos -= 50;
        }
        ypos -= 50;
    }
}

void rectInc(int Delay, int color)
{
    int displace = -12;
    for (int i = 0; i < 640; i += 50)
    {
        br
            delay(Delay);
        rectangle(13 + i - i / 50, displace + 25 - i / 50, 15 + i + i / 50, 27 + i / 50);
        if (color == 16)
            setcolor(RANDOM);
        else
            setcolor(color);
        rectangle(13 + i - i / 50, displace + 65 - i / 50, 15 + i + i / 50, 67 + i / 50);
        if (color == 16)
            setcolor(RANDOM);
        else
            setcolor(color);
        rectangle(13 + i - i / 50, displace + 105 - i / 50, 15 + i + i / 50, 107 + i / 50);
        if (color == 16)
            setcolor(RANDOM);
        else
            setcolor(color);
        rectangle(13 + i - i / 50, displace + 145 - i / 50, 15 + i + i / 50, 147 + i / 50);
        if (color == 16)
            setcolor(RANDOM);
        else
            setcolor(color);
        rectangle(13 + i - i / 50, displace + 185 - i / 50, 15 + i + i / 50, 187 + i / 50);
        if (color == 16)
            setcolor(RANDOM);
        else
            setcolor(color);
        rectangle(13 + i - i / 50, displace + 225 - i / 50, 15 + i + i / 50, 227 + i / 50);
        if (color == 16)
            setcolor(RANDOM);
        else
            setcolor(color);
        rectangle(13 + i - i / 50, displace + 265 - i / 50, 15 + i + i / 50, 267 + i / 50);
        if (color == 16)
            setcolor(RANDOM);
        else
            setcolor(color);
        rectangle(13 + i - i / 50, displace + 305 - i / 50, 15 + i + i / 50, 307 + i / 50);
        if (color == 16)
            setcolor(RANDOM);
        else
            setcolor(color);
        rectangle(13 + i - i / 50, displace + 345 - i / 50, 15 + i + i / 50, 347 + i / 50);
        if (color == 16)
            setcolor(RANDOM);
        else
            setcolor(color);
        rectangle(13 + i - i / 50, displace + 385 - i / 50, 15 + i + i / 50, 387 + i / 50);
        if (color == 16)
            setcolor(RANDOM);
        else
            setcolor(color);
        rectangle(13 + i - i / 50, displace + 425 - i / 50, 15 + i + i / 50, 427 + i / 50);
        if (color == 16)
            setcolor(RANDOM);
        else
            setcolor(color);
        rectangle(13 + i - i / 50, displace + 465 - i / 50, 15 + i + i / 50, 467 + i / 50);
        if (color == 16)
            setcolor(RANDOM);
        else
            setcolor(color);
    }
    //    rectangle(10+i-i/40,25-i/40,12+i+i/40,27+i/40);
}

void sqaureInc(int Delay, int color)
{
    int displace = -8;
    for (int i = 0; i < 640; i += 50)
    {
        br
            delay(Delay);
        rectangle(13 + i - i / 50, displace + 25 - i / 50, 15 + i + i / 50, 27 + i / 50 + displace);
        if (color == 16)
            setcolor(RANDOM);
        else
            setcolor(color);
        rectangle(13 + i - i / 50, displace + 65 - i / 50, 15 + i + i / 50, 67 + i / 50 + displace);
        if (color == 16)
            setcolor(RANDOM);
        else
            setcolor(color);
        rectangle(13 + i - i / 50, displace + 105 - i / 50, 15 + i + i / 50, 107 + i / 50 + displace);
        if (color == 16)
            setcolor(RANDOM);
        else
            setcolor(color);
        rectangle(13 + i - i / 50, displace + 145 - i / 50, 15 + i + i / 50, 147 + i / 50 + displace);
        if (color == 16)
            setcolor(RANDOM);
        else
            setcolor(color);
        rectangle(13 + i - i / 50, displace + 185 - i / 50, 15 + i + i / 50, 187 + i / 50 + displace);
        if (color == 16)
            setcolor(RANDOM);
        else
            setcolor(color);
        rectangle(13 + i - i / 50, displace + 225 - i / 50, 15 + i + i / 50, 227 + i / 50 + displace);
        if (color == 16)
            setcolor(RANDOM);
        else
            setcolor(color);
        rectangle(13 + i - i / 50, displace + 265 - i / 50, 15 + i + i / 50, 267 + i / 50 + displace);
        if (color == 16)
            setcolor(RANDOM);
        else
            setcolor(color);
        rectangle(13 + i - i / 50, displace + 305 - i / 50, 15 + i + i / 50, 307 + i / 50 + displace);
        if (color == 16)
            setcolor(RANDOM);
        else
            setcolor(color);
        rectangle(13 + i - i / 50, displace + 345 - i / 50, 15 + i + i / 50, 347 + i / 50 + displace);
        if (color == 16)
            setcolor(RANDOM);
        else
            setcolor(color);
        rectangle(13 + i - i / 50, displace + 385 - i / 50, 15 + i + i / 50, 387 + i / 50 + displace);
        if (color == 16)
            setcolor(RANDOM);
        else
            setcolor(color);
        rectangle(13 + i - i / 50, displace + 425 - i / 50, 15 + i + i / 50, 427 + i / 50 + displace);
        if (color == 16)
            setcolor(RANDOM);
        else
            setcolor(color);
        rectangle(13 + i - i / 50, displace + 465 - i / 50, 15 + i + i / 50, 467 + i / 50 + displace);
        if (color == 16)
            setcolor(RANDOM);
        else
            setcolor(color);
    }
    //    rectangle(10+i-i/40,25-i/40,12+i+i/40,27+i/40);
}

void circleInc(int Delay, int color)
{
    int rad = 1, displace = 8;
    for (int i = 0; i < 640; i += 50)
    {
        br
            delay(Delay);
        circle(20 + i - i / 50, 25 - i / 50 + displace, rad + i / 50);
        if (color == 16)
            setcolor(RANDOM);
        else
            setcolor(color);
        circle(20 + i - i / 50, 65 - i / 50 + displace, rad + i / 50);
        if (color == 16)
            setcolor(RANDOM);
        else
            setcolor(color);
        circle(20 + i - i / 50, 105 - i / 50 + displace, rad + i / 50);
        if (color == 16)
            setcolor(RANDOM);
        else
            setcolor(color);
        circle(20 + i - i / 50, 145 - i / 50 + displace, rad + i / 50);
        if (color == 16)
            setcolor(RANDOM);
        else
            setcolor(color);
        circle(20 + i - i / 50, 185 - i / 50 + displace, rad + i / 50);
        if (color == 16)
            setcolor(RANDOM);
        else
            setcolor(color);
        circle(20 + i - i / 50, 225 - i / 50 + displace, rad + i / 50);
        if (color == 16)
            setcolor(RANDOM);
        else
            setcolor(color);
        circle(20 + i - i / 50, 265 - i / 50 + displace, rad + i / 50);
        if (color == 16)
            setcolor(RANDOM);
        else
            setcolor(color);
        circle(20 + i - i / 50, 305 - i / 50 + displace, rad + i / 50);
        if (color == 16)
            setcolor(RANDOM);
        else
            setcolor(color);
        circle(20 + i - i / 50, 345 - i / 50 + displace, rad + i / 50);
        if (color == 16)
            setcolor(RANDOM);
        else
            setcolor(color);
        circle(20 + i - i / 50, 385 - i / 50 + displace, rad + i / 50);
        if (color == 16)
            setcolor(RANDOM);
        else
            setcolor(color);
        circle(20 + i - i / 50, 425 - i / 50 + displace, rad + i / 50);
        if (color == 16)
            setcolor(RANDOM);
        else
            setcolor(color);
        circle(20 + i - i / 50, 465 - i / 50 + displace, rad + i / 50);
        if (color == 16)
            setcolor(RANDOM);
        else
            setcolor(color);
    }
    //    circle(10+i-i/40,25-i/40,12+i+i/40,27+i/40);
}

int main()
{
    //clr
    int *x;
    //clr
    open
        // rectangle(0,0,630,470);
        while (!kbhit())
            circleInc(0, 16);
    if0
        clear while (!kbhit())
            rectInc(0, 16);
    if0
        clear while (!kbhit())
            sqaureInc(0, 16);
    if0
        //  while(!kbhit())
        //rectGrid(24,8,10);
        int i = 0;
    while (!kbhit())
    {
        br
            rectGridIncrmnt(0, i);
        rectGridIncrmnt(0, 0);
        i++;
        if (i == 15)
            i = 0;
    }
    get
        clear while (!kbhit())
    {
        br
            rectGridIncrmnt(0, 16);
        rectGridIncrmnt(0, 0);
        i++;
        if (i == 15)
            i = 0;
    }
    get
        clear while (!kbhit())
    {
        br
            rectGridIncrmnt(1, 16);
        rectGridIncrmnt2(1, 16);
        rectGridIncrmnt(1, 0);
        rectGridIncrmnt2(1, 0);
    }
    get
        clear while (!kbhit())
    {
        br
            rectGridIncrmnt(0, 1);
        rectGridIncrmnt2(0, 5);
    }
    get
        clear while (!kbhit())
    {
        br
            //rectGridIncrmnt(20,5,5);
            rectGrid2(10, 5, 0);
    }

    get
        clear while (!kbhit())
    {
        br
            rectGridIncrmnt_(20, 5, 0);
        //rectGrid2(10,5,0);
    }
    /*
//get
while(!kbhit()){br
smallRectGrid(20,5,1,0);
//rectGrid2(10,5,0);
}
*/

    if0
        close
            //clr
            printf("bye");
    // get
    return 0;
}