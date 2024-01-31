#include<conio.h>
#include<graphics.h>
main()
{
int d,m;
d= DETECT;
initgraph(&d, &m, "");
cleardevice();
rectangle(100,300,500,200);
getch();
closegraph();

}
