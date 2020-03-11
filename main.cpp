#include <iostream>
#include <fstream>
#include <conio.h>
#include <graphics.h>
#include <windows.h>
#include <time.h>
#include <cstring>

using namespace std;


void dead (int x , int y)
{
    setcolor (4);
    line(x+5,y+5,x+45,y+45);
    line(x+5,y+45,x+45,y+5);
}

void life(int x, int y, int d,int v)
{
    setcolor(5);
    if(v==3)
    {
        rectangle(x,y+d/2,x+d,y+d);
        setfillstyle(1,2);
        floodfill(x+5,y+d/2+5,5);
        rectangle(x+d,y+d/2,x+2*d,y+d);
        floodfill(x+d+5,y+d/2+5,5);
        rectangle(x+2,y+d/2,x+3*d,y+d);
        floodfill(x+2*d+5,y+d/2+5,5);
    }
    else
    if(v==2)
    {
        setfillstyle(1,4);
        floodfill(x+2*d+5,y+d/2+5,5);
    }
    else
        if(v==1)
    {
        setfillstyle(1,4);
        floodfill(x+d+5,y+d/2+5,5);
    }
    else
        if(v==0)
    {
        setfillstyle(1,4);
        floodfill(x+5,y+d/2+5,5);
    }
}

void scrie11(int x, int y,int d)
{
    setlinestyle(0,0,1);
    setcolor(5);
    rectangle(x+5,y+5,x+d-5,y+d-5);
    setfillstyle(1,9);
    floodfill(x+6,y+6,5);
    setcolor(0);
    rectangle(x+d/2-d/3,y+7,x+d/2-d/6,y+d/2-d/10);
    setfillstyle(1,11);
    floodfill(x+d/2-d/3+2,y+8,0);
    rectangle(x+d/2+d/3,y+7,x+d/2+d/6,y+d/2-d/10);
    floodfill(x+d/2+d/6+2,y+8,0);
    setfillstyle(1,10);
    rectangle(x+d/2-d/6,y+d/2-d/20,x+d/2+d/6,y+d/2+d/3);
    floodfill(x+d/2-d/6+1,y+d/2-d/20+1,0);
}
    void scrie12(int x, int y,int d)
{
    setlinestyle(0,0,1);
    setcolor(5);
    rectangle(x+5,y+5,x+d-5,y+d-5);
    setfillstyle(1,9);
    floodfill(x+6,y+6,5);
    setcolor(0);
    rectangle(x+d/2-d/3,y+7,x+d/2-d/6,y+d/2-d/10);
    setfillstyle(1,4);
    floodfill(x+d/2-d/3+2,y+8,0);
    rectangle(x+d/2+d/3,y+7,x+d/2+d/6,y+d/2-d/10);
    floodfill(x+d/2+d/6+2,y+8,0);
    setfillstyle(1,10);
    rectangle(x+d/2-d/6,y+d/2-d/20,x+d/2+d/6,y+d/2+d/3);
    floodfill(x+d/2-d/6+1,y+d/2-d/20+1,0);
}
void scrie21(int x ,int y,int d)
{
    setlinestyle(0,0,1);
    setcolor(5);
    rectangle(x+5,y+5,x+d-5,y+d-5);
    setfillstyle(1,12);
    floodfill(x+6,y+6,5);
    setcolor(0);
    circle(x+d/2-d/5,y+d/2-d/6,d/8);
    setfillstyle(1,14);
    floodfill(x+d/2-d/5,y+d/2-d/6,0);
    circle(x+d/2+d/5,y+d/2-d/6,d/8);
    floodfill(x+d/2+d/5,y+d/2-d/6,0);
    setfillstyle(1,10);
    circle(x+d/2,y+d/2+d/6,d/5);
    floodfill(x+d/2,y+d/2+d/6,0);
}
void scrie22(int x ,int y,int d)
{
    setlinestyle(0,0,1);
    setcolor(5);
    rectangle(x+5,y+5,x+d-5,y+d-5);
    setfillstyle(1,12);
    floodfill(x+6,y+6,5);
    setcolor(0);
    circle(x+d/2-d/5,y+d/2-d/6,d/8);
    setfillstyle(1,4);
    floodfill(x+d/2-d/5,y+d/2-d/6,0);
    circle(x+d/2+d/5,y+d/2-d/6,d/8);
    floodfill(x+d/2+d/5,y+d/2-d/6,0);
    setfillstyle(1,10);
    circle(x+d/2,y+d/2+d/6,d/5);
    floodfill(x+d/2,y+d/2+d/6,0);
}


void sterge(int x,int y,int d)
{
    setfillstyle(1,0);
    floodfill(x+6,y+6,5);
    setcolor(0);
    rectangle(x+5,y+5,x+d-5,y+d-5);
}

void sterge2(int x, int y,int d)
{
    setfillstyle(1,0);
    floodfill(x+6,y+6,5);
    setcolor(0);
    rectangle(x+5,y+5,x+d-5,y+d-5);
}
void margini1 (int x ,int y)
{
    setfillstyle(1,9);
    floodfill(x+3,y+3,2);
}
void margini2 (int x ,int y)
{
    setfillstyle(1,12);
    floodfill(x+3,y+3,2);
}

int a[50][50];
int v1=3,v2=3;

void stergec(int i,int j,int d)
{
    setfillstyle(1,0);
    int x ,y;
    a[i][j]=0;
    x=(j-1)*d;
    y=(i-1)*d;
    floodfill(x+d/2,y+d/2,0);
}

void coin (int xc,int yc,int xc2,int yc2,int d)
{
    int i,j,x,y;
    for(i=1;i<=12;i++)
    for(j=1;j<=20;j++)
        if(a[i][j]==-1)
            stergec(i,j,d);
    i=1;j=1;
    while(a[i][j]!=0||(j==xc&&i==yc)||(j==xc2&&i==yc2))
    {
        i=rand()%12+1;
        j=rand()%20+1;
    }
    a[i][j]=-1;
    setlinestyle(0,0,3);
    setcolor(9);
    x=(j-1)*d;
    y=(i-1)*d;
    circle(x+d/2,y+d/2,d/3);
    setfillstyle(1,14);
    floodfill(x+d/2,y+d/2,9);
}

int main()
{
    ifstream f ("date.in");
    srand(time(NULL));
    int x,y,p=0,l=0,nl=12,nc=20;;
    int xc,yc,o=0,k=0,x2,y2,p2=0,k2=0,l2=0,o2=0;
    int xc2,yc2;
    char s1[3],s2[3],s3[3],nume1[100],nume2[100],sc1[2],sc2[2];
    sc1[0]=48;
    sc1[1]=0;
    sc2[0]=48;
    sc2[1]=0;
    s1[2]=0;
    s2[2]=0;
    s1[0]=48;
    s2[0]=48;
    s2[1]=48;
    s1[1]=48;
    s3[2]=0;
    s3[1]=49;
    s3[0]=48;
    f>>xc>>yc>>xc2>>yc2;
    int i,j;
    int ok1=0,ok2=0;
    char ch=0;
    for(i=1;i<=nl;i++)
        for(j=1;j<=nc;j++)
            f>>a[i][j];
    int d=20;
    cout<<"Size of players (between 30 and 60 and divided by 2 = 0 ):";
    while(d<30||d>60||d%2==1)
        cin>>d;
    cout<<"NAME PLAYER 1: ";
    nume1[0]=0;
    nume2[0]=0;
    while(strlen(nume1)>10||strlen(nume1)<3)
    {
        cin>>nume1;
        if(strlen(nume1)>10)
            cout<<"Less than 10 characters :";
        else
            if(strlen(nume1)<3)
                cout<<"More than 3 characters :";
    }
    cout<<"NAME PLAYER 2: ";
    while(strlen(nume2)>10||strlen(nume2)<3)
    {
        cin>>nume2;
        if(strlen(nume2)>10)
            cout<<"Less than 10 characters :";
        else
            if(strlen(nume2)<3)
                cout<<"More than 3 characters :";
    }
    int W=nc*d;
    int H=nl*d+4*d;
    initwindow(W,H,"The Last Runner");
    for(i=1;i<=nl;i++)
        for(j=1;j<=nc;j++)
           if(a[i][j]==1)
           {
                x=(j-1)*d;
                y=(i-1)*d;
                setlinestyle(1,1,5);
                if(i!=nl)
                {
                    setcolor(4);
                    line(x,y+d/2-d/4,x+d,y+d/2-d/4);
                    setcolor(3);
                    line(x,y+d/2+d/4,x+d,y+d/2+d/4);
                }
                else
                {
                    setcolor(3);
                    line(x,y+d/2-d/4,x+d,y+d/2-d/4);
                    setcolor(4);
                    line(x,y+d/2+d/4,x+d,y+d/2+d/4);
                }

           }
           else
            if(a[i][j]==2)
           {
                x=(j-1)*d;
                y=(i-1)*d;
                setlinestyle(1,1,5);
                if(j!=20)
                {
                    setcolor(4);
                    line(x+d/2-d/4,y,x+d/2-d/4,y+d);
                    setcolor(3);
                    line(x+d/2+d/4,y,x+d/2+d/4,y+d);
                }
                else
                {
                    setcolor(3);
                    line(x+d/2-d/4,y,x+d/2-d/4,y+d);
                    setcolor(4);
                    line(x+d/2+d/4,y,x+d/2+d/4,y+d);
                }

           }
           else
            if(a[i][j]==3)
            {
                setlinestyle(1,1,4);
                setcolor(2);
                x=(j-1)*d;
                y=(i-1)*d;
                rectangle(x,y,x+d,y+d);
                margini1(x,y);
            }
           else
            if(a[i][j]==4)
            {
                setlinestyle(1,1,4);
                setcolor(2);
                x=(j-1)*d;
                y=(i-1)*d;
                rectangle(x,y,x+d,y+d);
                margini2(x,y);
            }
            else
            if(a[i][j]==5)
            {
                x=(j-1)*d;
                y=(i-1)*d;
                setcolor(15);
                setlinestyle(0,0,1);
                rectangle(x,y,x+d,y+d);
                setfillstyle(1,15);
                floodfill(x+5,y+5,15);
            }

    setlinestyle(0,1,1);
    x=(yc-1)*d;
    y=(xc-1)*d;
    scrie11(x,y,d);
    x2=(yc2-1)*d;
    y2=(xc2-1)*d;
    scrie21(x2,y2,d);
    settextstyle(2,1,35);
    setcolor(9);
    outtextxy(3*d,13*d,nume1);
    outtextxy(4*d,13*d+d/2,"( W,A,S,D - T,F,G,H )");
    setcolor(12);
    outtextxy(19*d-d/2,13*d,nume2);
    outtextxy(19*d,14*d-d/2,"( ARROWS - 8,4,5,6 )");
    setcolor(15);
    outtextxy(W/2+d ,H-d,"Press ` for a new round");
    setcolor(11);
    settextstyle(2,1,50);
    outtextxy(W/2,H-2*d,"Round");
    outtextxy(W/2+2*d,H-2*d,s3);
    setcolor(15);
    settextstyle(2,1,35);
    outtextxy(2*d+d/2,H-2*d,s1);
    outtextxy(W-2*d,H-2*d,s2);
    life(d,14*d,d,v1);
    life(16*d,14*d,d,v2);
    coin(xc,yc,xc2,yc2,d);
    setcolor(14);
    outtextxy(W-3*d,H-2*d,sc2);
    outtextxy(3*d+d/2,H-2*d,sc1);
    while(ch!=27)
    {
        ch=getch();
        if(ch=='w')
            p=d;
        if(ch=='s')
            l=d;
        if(ch=='d')
            o=d;
        if(ch=='a')
            k=d;
        if(ch==KEY_UP)
            p2=d;
        if(ch==KEY_DOWN)
            l2=d;
        if(ch==KEY_LEFT)
            k2=d;
        if(ch==KEY_RIGHT)
            o2=d;
        if(ch=='`'&&(ok1==2||ok2==2))
        {
            coin(xc,yc,xc2,yc2,d);

            sc1[0]=48;
            sc2[0]=48;
            setcolor(0);
            settextstyle(2,1,35);
            outtextxy(3*d+d/2,H-2*d,sc1);
            outtextxy(W-3*d,H-2*d,sc2);
            setcolor(14);
            outtextxy(3*d+d/2,H-2*d,sc1);
            outtextxy(W-3*d,H-2*d,sc2);

            sterge(x,y,d);
            sterge2(x2,y2,d);
            xc=5;
            yc=2;
            xc2=5;
            yc2=19;
            ok1=0;
            ok2=0;
            v1=3;
            v2=3;
            life(d,14*d,d,v1);
            life(16*d,14*d,d,v2);

            x=(yc-1)*d;
            y=(xc-1)*d;
            scrie11(x,y,d);
            x2=(yc2-1)*d;
            y2=(xc2-1)*d;
            scrie21(x2,y2,d);
            setcolor(0);
            settextstyle(2,1,50);
            outtextxy(W/2+2*d,H-2*d,s3);
            setcolor(11);
            if(s3[1]==57)
            {
                s3[1]=48;
                s3[0]++;
            }
            else
                s3[1]++;
            outtextxy(W/2+2*d,H-2*d,s3);
        }

        if(ok1==0&&ok2==0)
        {
        if(ch=='f')
        {
            scrie12(x,y,d);
            delay(50);
            scrie11(x,y,d);
        if(xc==xc2&&yc-1==yc2)
            {
                    v2--;
                life(16*d,14*d,d,v2);
                if(v2==0)
                    ok1=1;
            }
        }
        if(ch=='g')
        {
            scrie12(x,y,d);
            delay(50);
            scrie11(x,y,d);
        if(xc+1==xc2&&yc==yc2)
            {
                    v2--;
                life(16*d,14*d,d,v2);
                if(v2==0)
                    ok1=1;
            }
        }
        if(ch=='h')
        {
            scrie12(x,y,d);
            delay(50);
            scrie11(x,y,d);
        if(xc==xc2&&yc+1==yc2)
            {
                    v2--;
                life(16*d,14*d,d,v2);
                if(v2==0)
                    ok1=1;
            }
        }
        if(ch=='t')
        {
            scrie12(x,y,d);
            delay(50);
            scrie11(x,y,d);
        if(ch=='t'&&(xc-1==xc2&&yc==yc2))
            {
                    v2--;
                life(16*d,14*d,d,v2);
                if(v2==0)
                    ok1=1;
            }
        }

        if(ch=='8')
        {
            scrie22(x2,y2,d);
            delay(50);
            scrie21(x2,y2,d);
        if(xc2-1==xc&&yc==yc2)
            {
                v1--;
                life(d,14*d,d,v1);
                if(v1==0)
                ok2=1;
            }
        }
        if(ch=='5')
        {
            scrie22(x2,y2,d);
            delay(50);
            scrie21(x2,y2,d);
        if(xc2+1==xc&&yc==yc2)
            {
                v1--;
                life(d,14*d,d,v1);
                if(v1==0)
                ok2=1;
            }
        }
        if(ch=='4')
        {
            scrie22(x2,y2,d);
            delay(50);
            scrie21(x2,y2,d);
        if(xc==xc2&&yc2-1==yc)
            {
                v1--;
                life(d,14*d,d,v1);
                if(v1==0)
                ok2=1;
            }
        }
        if(ch=='6')
        {
            scrie22(x2,y2,d);
            delay(50);
            scrie21(x2,y2,d);
        if(xc==xc2&&yc2+1==yc)
            {
                v1--;
                life(d,14*d,d,v1);
                if(v1==0)
                ok2=1;
            }
        }
        }
        if(ok1==0&&ok2==0)
        {
            if(a[xc-1][yc]>0||(xc-1==xc2&&yc==yc2))
                p=0;
            if(a[xc+1][yc]>0||(xc+1==xc2&&yc==yc2))
                l=0;
            if(a[xc][yc+1]>0||(xc==xc2&&yc+1==yc2))
                o=0;
            if(a[xc][yc-1]>0||(xc==xc2&&yc-1==yc2))
                k=0;
            if(a[xc2-1][yc2]>0||(xc2-1==xc&&yc==yc2))
                p2=0;
            if(a[xc2+1][yc2]>0||(xc2+1==xc&&yc==yc2))
                l2=0;
            if(a[xc2][yc2+1]>0||(xc==xc2&&yc2+1==yc))
                o2=0;
            if(a[xc2][yc2-1]>0||(xc==xc2&&yc2-1==yc))
                k2=0;

            while(p>0)
            {
                sterge(x,y,d);
                p=p-d/2;
                y=y-d/2;
                if(p==0)
                    xc--;
                if(a[xc][yc]==-1)
                {
                    setcolor(0);
                    settextstyle(2,1,35);
                    outtextxy(3*d+d/2,H-2*d,sc1);
                    sc1[0]++;
                    setcolor(14);
                    outtextxy(3*d+d/2,H-2*d,sc1);
                    coin(xc,yc,xc2,yc2,d);
                }
                scrie11(x,y,d);
            }
            while(l>0)
            {
                sterge(x,y,d);
                l=l-d/2;
                y=y+d/2;
                if(l==0)
                    xc++;
                if(a[xc][yc]==-1)
                {
                    setcolor(0);
                    settextstyle(2,1,35);
                    outtextxy(3*d+d/2,H-2*d,sc1);
                    sc1[0]++;
                    setcolor(14);
                    outtextxy(3*d+d/2,H-2*d,sc1);
                    coin(xc,yc,xc2,yc2,d);
                }
                scrie11(x,y,d);
            }
            while(o>0)
            {
                sterge(x,y,d);
                o=o-d/2;
                x=x+d/2;
                if(o==0)
                    yc++;
                if(a[xc][yc]==-1)
                {
                    setcolor(0);
                    settextstyle(2,1,35);
                    outtextxy(3*d+d/2,H-2*d,sc1);
                    sc1[0]++;
                    setcolor(14);
                    outtextxy(3*d+d/2,H-2*d,sc1);
                    coin(xc,yc,xc2,yc2,d);
                }
                scrie11(x,y,d);
            }
            while(k>0)
            {
                sterge(x,y,d);
                k=k-d/2;
                x=x-d/2;
                if(k==0)
                    yc--;
                if(a[xc][yc]==-1)
                {
                    setcolor(0);
                    settextstyle(2,1,35);
                    outtextxy(3*d+d/2,H-2*d,sc1);
                    sc1[0]++;
                    setcolor(14);
                    outtextxy(3*d+d/2,H-2*d,sc1);
                    coin(xc,yc,xc2,yc2,d);
                }
                scrie11(x,y,d);
            }




            while(p2>0)
            {
                sterge2(x2,y2,d);
                p2=p2-d/2;
                y2=y2-d/2;
                if(p2==0)
                    xc2--;
                if(a[xc2][yc2]==-1)
                {
                    setcolor(0);
                    settextstyle(2,1,35);
                    outtextxy(W-3*d,H-2*d,sc2);
                    sc2[0]++;
                    setcolor(14);
                    outtextxy(W-3*d,H-2*d,sc2);
                    coin(xc,yc,xc2,yc2,d);
                }
                scrie21(x2,y2,d);
            }
            while(l2>0)
            {
                sterge2(x2,y2,d);
                l2=l2-d/2;
                y2=y2+d/2;
                if(l2==0)
                    xc2++;
                if(a[xc2][yc2]==-1)
                {
                    setcolor(0);
                    settextstyle(2,1,35);
                    outtextxy(W-3*d,H-2*d,sc2);
                    sc2[0]++;
                    setcolor(14);
                    outtextxy(W-3*d,H-2*d,sc2);
                    coin(xc,yc,xc2,yc2,d);
                }
                scrie21(x2,y2,d);
            }
            while(o2>0)
            {
                sterge2(x2,y2,d);
                o2=o2-d/2;
                x2=x2+d/2;
                if(o2==0)
                    yc2++;
                if(a[xc2][yc2]==-1)
                {
                    setcolor(0);
                    settextstyle(2,1,35);
                    outtextxy(W-3*d,H-2*d,sc2);
                    sc2[0]++;
                    setcolor(14);
                    outtextxy(W-3*d,H-2*d,sc2);
                    coin(xc,yc,xc2,yc2,d);
                }
                scrie21(x2,y2,d);
            }
            while(k2>0)
            {
                sterge2(x2,y2,d);
                k2=k2-d/2;
                x2=x2-d/2;
                if(k2==0)
                    yc2--;
                if(a[xc2][yc2]==-1)
                {
                    setcolor(0);
                    settextstyle(2,1,35);
                    outtextxy(W-3*d,H-2*d,sc2);
                    sc2[0]++;
                    setcolor(14);
                    outtextxy(W-3*d,H-2*d,sc2);
                    coin(xc,yc,xc2,yc2,d);
                }
                scrie21(x2,y2,d);
            }
        }

        if(ok1==1||sc1[0]-48==5)
        {
            setcolor(0);
            settextstyle(2,1,35);
            outtextxy(2*d+d/2,H-2*d,s1);
            if(s1[1]==57)
            {
                s1[1]=48;
                s1[0]++;
            }
            else
                s1[1]++;
            sc1[0]=48;
            setcolor(15);
            outtextxy(2*d+d/2,H-2*d,s1);
            ok1=2;
            sterge2(x2,y2,d);
            scrie11(x2,y2,d);

        }
        else
        if(ok2==1||sc2[0]-48==5)
        {
            setcolor(0);
            settextstyle(2,1,35);
            outtextxy(W-2*d,H-2*d,s2);
            if(s2[1]==57)
            {
                s2[1]=48;
                s2[0]++;
            }
            else
                s2[1]++;
            sc2[0]=48;
            setcolor(15);
            outtextxy(W-2*d,H-2*d,s2);
            ok2=2;
            sterge(x,y,d);
            scrie21(x,y,d);
        }
    }


    return 0;
}
