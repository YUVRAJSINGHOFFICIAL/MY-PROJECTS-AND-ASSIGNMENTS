#include<graphics.h>

 int main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"");
line(250,100,320,100);
line(250,270,320,270);
line(250,100,200,150);
line(250,270,200,220);
line(200,150,200,220);
line(320,100,370,150);
line(320,270,370,220);
line(370,150,370,220);
setfillstyle(1,5);
arc(285,100,0,180,35);
floodfill(285,100,WHITE);
arc(285,270,180,0,35);
arc(200,185,90,270,35);
arc(370,185,270,90,35);
arc(225,125,35,225,35);
arc(225,250,135,315,35);
arc(345,125,315,135,35);
arc(345,245,225,45,35);
setcolor(YELLOW);
circle(285,185,60);
getch();
closegraph();

}
