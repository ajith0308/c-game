#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include<dos.h>
void end();
int welcome();
void selection();
int port();
void late();
void late1();
void firstscreen();
void secscreen();
void ball();
void moveballleft();
void moveballdown();
void moveballright();
void game1();
void kik();
void game2();
void sec();
void one();
int main(void)
{      int i;
   /* request auto detection */
   int gdriver = EGA, gmode = EGAHI, errorcode;
    initgraph(&gdriver, &gmode,"C:\\turboc3\\bgi");
    delay(1000);
port();
delay(100);
welcome();
delay(1000);
port();
setbkcolor(GREEN);
delay(1000);
cleardevice();
selection();
cleardevice();
end();
   getch();
   closegraph();
return 0;
}

int welcome()
   {
	setbkcolor(3);
	setcolor(BLUE);
settextstyle(0,0,1);//10 font number 0 direction 6 size
outtextxy(180,200,"WELCOME TO FOOTBALL WORLD");
getch();
return 0;
}
int port()
{
	int x=300,y=  10,z=300,k=450;
setbkcolor(0);
setfillstyle(SOLID_FILL,GREEN);
bar(10,10,620,450);
floodfill(15,590,GREEN);
setlinestyle(2,0,2);
setcolor(WHITE);
line(x,y,z,k);
circle(300,210,40);
line(10,10,620,10);
line(10,10,10,450);
line(10,450,620,450);
line(620,10,620,450);
rectangle(10,170,40,250);
rectangle(10,140,80,280);
rectangle(590,170,620,250);
rectangle(550,140,620,280);
rectangle(0,190,10,230);
rectangle(630,190,620,230);
return 0;
}

void game1()
{
  /* select a driver and mode that supports multiple pages. */

  int x, y, ht;
  int i,j,k;
  int a,s,w;
  char l;
   x = getmaxx() / 2;
  y = getmaxy() / 2;
  ht = textheight("W");
  firstscreen();
  late1();
  cleardevice();
  secscreen();
  delay(1000);
  cleardevice();
	     ball();
    outtextxy(400,200,"enter a to left");
  outtextxy(400,210,"enter w to down");
    outtextxy(400,230,"enter s to right");
    outtextxy(100,230,"enter * to exit");
   scanf("%s",&l);

  if(l=='a')
  {
  ball();
  moveballleft();
     cleardevice();
  outtextxy(300,300,"come again");
  }
 else if(l=='w')
 {
  ball();
  moveballdown();
     cleardevice();
  outtextxy(300,300,"come again");
 }
  else if(l== 's')
  {
  ball();
  moveballright();
     cleardevice();
  outtextxy(300,300,"come again");
  }

  else
  {
   cleardevice();
  outtextxy(300,300,"come again");
  }


  getch();
  //closegraph();
}

void firstscreen()
{
  int x, y, ht;
  int i,j,k;

   x = getmaxx() / 2;
  y = getmaxy() / 2;
  ht = textheight("W");

  /* draw a line on page #1 */
  line(0, 0, 650, 0);
  line(0,0,0,400);
  line(650,0,650,400);

  setcolor(RED);
  setbkcolor(GREEN);
  /* output a message on page #1 */
  settextjustify(CENTER_TEXT, CENTER_TEXT);
  outtextxy(x, y, "WELCOME YOU TO FOOD BALL WORLD :");
  outtextxy(x, y+ht, "Press any key");
    delay(100);
    }
  void secscreen()
  {
   int x, y, ht;
  int i,j,k;
   x = getmaxx() / 2;
  y = getmaxy() / 2;
  ht = textheight("W");


 outtextxy(x, y, "GAME LODDING....");
  outtextxy(x, y+ht, "Please white:");
  late();

  }
    void late()

{
int i,j;
for(i=1;i<1000;i++)
  {
   for(j=1;j<5000;j++)
  {
  }
  }

  }

  void ball()
  { int x,y;
  setcolor(BLUE);
  circle(300,100,10);
  circle(300,200,10);
  circle(150,100,10);
  circle(455,100,10);
  late();
  }
  void moveballleft()
  {
  int i;
  setcolor(RED);
  circle(305,100,5);
  for(i=0;i<150;i++)
  {
  ball();
  setcolor(RED);
  circle(305+i,100,5);

  late();
  cleardevice(); }

  if(i=149)
  ball();
  setcolor(RED);
  circle(300+i,100,5);

getch();

  }
  void moveballdown()
  {
  int i;
  setcolor(RED);
  circle(305,100,5);
  for(i=0;i<100;i++)
  {
  ball();
  setcolor(RED);
  circle(305,100+i,5);

  late();
  cleardevice(); }

  if(i=100)
  ball();
  setcolor(RED);
  circle(305,100+i,5);

getch();


}

void moveballright()
  {
  int i;
  setcolor(RED);
  circle(305,100,5);
  for(i=0;i<150;i++)
  {
  ball();
  setcolor(RED);
  circle(305-i,100,5);

  late();
  cleardevice(); }

  if(i=150)
  ball();
  setcolor(RED);
  circle(305-i,100,5);

getch();


}
 void late1()

{
int i,j;
for(i=1;i<1000;i++)
  {
   for(j=1;j<5000;j++)
  {
  }
  }

  }
  void game2()
  {
   int midx, midy,i;
   char l;
   int radius = 100;
   int z,temp;
   midx =100 ;
   midy = 80+40 ;
   setcolor(RED);
   circle(midx, midy, 20);
   line(100,100+40,100,200+40);//body
   line(50,140+40,100,120+40);//lefthand
   line(100,120+40,150,130+40);//right hand
   line(100,200+40,80,230+40);
   line(100,200+40,150,230+40);
   circle(190,230+40,20);   //ball
   line(500,200,450,40);          //pool
   line(500,200,500,400);          //pool
      line(500,200,450,40);
   line(450,40,450,140);
   temp=0;
      outtextxy(300,300,"Enter ANY KEY TO KICK  ");
  scanf("%c",l);
    kik();
    temp=temp+1;
    outtextxy(200,200,"YES IT IS GOAL");
    outtextxy(100,250,"you have 1 goal");
    getch();
    end();
    delay(1000);
   closegraph();


}

void kik()
{
  int i,j;
  int midx =100 ;
  int midy = 80 ;
  getch();
   setcolor(RED);
      i=0;
       for(;i<30;i++)
       {
       if(i<30)
       {
       circle(midx, midy, 20);
   line(100,100+40,100,200+40);//body
   line(50,140+40,100,120+40);//lefthand
   line(100,120+40,150,130+40);//right hand
   line(100,200+40,80,230+40);
   line(100,200+40,150,230+40);
   circle(190,230+40,20);   //ball
   line(500,200,450,40);          //pool
   line(500,200,500,400);          //pool
      line(500,200,450,40);
   line(450,40,450,140);}
    else
    {
      circle(190+i,230,20);  //ball

   // delay(1);
    }

   cleardevice();
   }
   for(j=30;j<400;j++)
   {
	circle(midx, midy, 20);
line(100,100,100,200);//body
   line(50,140,100,120);//lefthand
   line(100,120,150,130);//right hand
   line(100,200,50,230);//left leg
   line(100,200,150,230); //right leg
   circle(190+j,230,20);
   line(500,200,500,400);
   line(500,200,450,40);
   line(450,40,450,140);
   cleardevice();
   }

}

void sec()
{
game2();
}
void one()
{
game1();
}
void selection()
{
int i;
outtextxy(250,200,"Enter 1 FOR  PASSING OF BALL");
outtextxy(250,250,"2 FOR KICKING OF BALL");
scanf("%d",&i);
cleardevice();
if(i==1)
{
one();
}
else if(i==2)
{
sec();
}
else
{
outtextxy(200,200,"Try again");

}

}
void end()
{
 setcolor(BLUE);
 setbkcolor(RED);
 settextstyle(8,0,1);
 getch();
 outtextxy(300,200,"GAME OVER");
 delay(1000);
cleardevice();
delay(200);
 outtextxy(200,400," BY AJITH VENKADESH K AND  AJITH S");
 delay(200);
 }
