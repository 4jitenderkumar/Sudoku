#include<iostream>
#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<conio.h>
#include<cwchar>
#include<vector>
using namespace std;            
static int current=2;
struct data
{
 int fixed=0,value=0,box,x,y;	
};
static data d[82];
void gotoxy(int x,int y)
{
	  COORD c;
  c.X=x;
  c.Y=y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
void delay()
{
	int i;
	for(i=1;i<=100000000;i++)
	{
	}
	for(i=1;i<=100000000;i++)
	{
	}
	for(i=1;i<=100000000;i++)
	{
	}
}
void changecolor(int color)
{
		HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
//SetConsoleTextAttribute(hStdOut, FOREGROUND_RED | FOREGROUND_INTENSITY);
SetConsoleTextAttribute(hStdOut,color);
	
}	
void font()
{
				CONSOLE_FONT_INFOEX cfi;
cfi.cbSize = sizeof(cfi);
cfi.nFont = 0;
cfi.dwFontSize.X = 0;                   // Width of each character in the font
cfi.dwFontSize.Y = 30;                  // Height
cfi.FontFamily = FF_DONTCARE;
cfi.FontWeight = FW_NORMAL;
std::wcscpy(cfi.FaceName, L"Consolas"); // Choose your font
SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);
}
void information()
{

  int i,j;
    //row1
j=1;
  for(i=18;i<=60;i++)
  {
  	changecolor(14);
  	 d[j].x=i;
  	 d[j].y=3;
  	 if(j<=3)
  	 d[j].box=1;
  	 if(j<=6 && j>3)
  	 d[j].box=2;
  	 if(j<=9 && j>6)
  	 d[j].box=3;
  	 if(j==1){
  	 d[j].value=7;d[j].fixed=1;gotoxy(d[j].x,d[j].y);cout<<"7";
      }
     if(j==5){
  	 d[j].value=6;d[j].fixed=1;gotoxy(d[j].x,d[j].y);cout<<"6";
      }
     if(j==6){
  	 d[j].value=8;d[j].fixed=1;gotoxy(d[j].x,d[j].y);cout<<"8";
      }
     if(j==8){
  	 d[j].value=3;d[j].fixed=1;gotoxy(d[j].x,d[j].y);cout<<"3";
      }
	  i+=4;
  	j++;
  }
   // ROW 2
  j=10;
  for(i=18;i<=60;i++)
  {
  	changecolor(14);
  	 d[j].x=i;
  	 d[j].y=5;
  	 if(j<=12)
  	 d[j].box=1;
  	 if(j<=15 && j>12)
  	 d[j].box=2;
  	 if(j<=18 && j>15)
  	 d[j].box=3;
  	 if(j==11){
  	 d[j].value=9;d[j].fixed=1;gotoxy(d[j].x,d[j].y);cout<<"9";
      }
     if(j==14){
  	 d[j].value=2;d[j].fixed=1;gotoxy(d[j].x,d[j].y);cout<<"2";
      }
     if(j==17){
  	 d[j].value=6;d[j].fixed=1;gotoxy(d[j].x,d[j].y);cout<<"6";
      }
	  i+=4;
  	j++;
  }	
  //ROW 3
    j=19;
  for(i=18;i<=60;i++)
  {
  	changecolor(14);
  	 d[j].x=i;
  	 d[j].y=7;
  	 if(j<=21)
  	 d[j].box=1;
  	 if(j<=24 && j>21)
  	 d[j].box=2;
  	 if(j<=27 && j>24)
  	 d[j].box=3;
  	 if(j==19){
  	 d[j].value=6;d[j].fixed=1;gotoxy(d[j].x,d[j].y);cout<<"6";
      }
     if(j==20){
  	 d[j].value=1;d[j].fixed=1;gotoxy(d[j].x,d[j].y);cout<<"1";
      }
     if(j==27){
  	 d[j].value=2;d[j].fixed=1;gotoxy(d[j].x,d[j].y);cout<<"2";
      }
	  i+=4;
  	j++; 
  }
  //ROW4
    j=28;
  for(i=18;i<=60;i++)
  {
  	changecolor(14);
  	 d[j].x=i;
  	 d[j].y=9;
  	 if(j<=30)
  	 d[j].box=4;
  	 if(j<=33 && j>30)
  	 d[j].box=5;
  	 if(j<=36 && j>33)
  	 d[j].box=6;
  	 if(j==28){
  	 d[j].value=5;d[j].fixed=1;gotoxy(d[j].x,d[j].y);cout<<"5";
      }
     if(j==31){
  	 d[j].value=3;d[j].fixed=1;gotoxy(d[j].x,d[j].y);cout<<"3";
      }
     if(j==32){
  	 d[j].value=4;d[j].fixed=1;gotoxy(d[j].x,d[j].y);cout<<"4";
      }
     if(j==34){
  	 d[j].value=8;d[j].fixed=1;gotoxy(d[j].x,d[j].y);cout<<"8";
      }
	  i+=4;
  	j++;
  }
  //ROW5
      j=37;
  for(i=18;i<=60;i++)
  {
  	changecolor(14);
  	 d[j].x=i;
  	 d[j].y=11;
  	 if(j<=39)
  	 d[j].box=4;
  	 if(j<=42 && j>39)
  	 d[j].box=5;
  	 if(j<=45 && j>42)
  	 d[j].box=6;
  	 if(j==37){
  	 d[j].value=8;d[j].fixed=1;gotoxy(d[j].x,d[j].y);cout<<"8";
      }
     if(j==39){
  	 d[j].value=3;d[j].fixed=1;gotoxy(d[j].x,d[j].y);cout<<"3";
      }
     if(j==40){
  	 d[j].value=9;d[j].fixed=1;gotoxy(d[j].x,d[j].y);cout<<"9";
      }
     if(j==43){
  	 d[j].value=2;d[j].fixed=1;gotoxy(d[j].x,d[j].y);cout<<"2";
      }
	  i+=4;
  	j++;
  }
  //row6
      j=46;
  for(i=18;i<=60;i++)
  {
  	changecolor(14);
  	 d[j].x=i;
  	 d[j].y=13;
  	 if(j<=48)
  	 d[j].box=4;
  	 if(j<=51 && j>48)
  	 d[j].box=5;
  	 if(j<=54 && j>51)
  	 d[j].box=6;
  	 if(j==48){
  	 d[j].value=4;d[j].fixed=1;gotoxy(d[j].x,d[j].y);cout<<"4";
      }
     if(j==51){
  	 d[j].value=2;d[j].fixed=1;gotoxy(d[j].x,d[j].y);cout<<"2";
      }
     if(j==54){
  	 d[j].value=3;d[j].fixed=1;gotoxy(d[j].x,d[j].y);cout<<"3";
      }
	  i+=4;
  	j++;
  }
  //ROW7
      j=55;
  for(i=18;i<=60;i++)
  {
  	changecolor(14);
  	 d[j].x=i;
  	 d[j].y=15;
  	 if(j<=57)
  	 d[j].box=7;
  	 if(j<=60 && j>57)
  	 d[j].box=8;
  	 if(j<=63 && j>60)
  	 d[j].box=9;
  	 if(j==57){
  	 d[j].value=6;d[j].fixed=1;gotoxy(d[j].x,d[j].y);cout<<"6";
      }
     if(j==60){
  	 d[j].value=9;d[j].fixed=1;gotoxy(d[j].x,d[j].y);cout<<"9";
      }
     if(j==62){
  	 d[j].value=5;d[j].fixed=1;gotoxy(d[j].x,d[j].y);cout<<"5";
      }
     if(j==63){
  	 d[j].value=1;d[j].fixed=1;gotoxy(d[j].x,d[j].y);cout<<"1";
      }
	  i+=4;
  	j++;
  }
  //ROW 8
        j=64;
  for(i=18;i<=60;i++)
  {
  	changecolor(14);
  	 d[j].x=i;
  	 d[j].y=17;
  	 if(j<=66)
  	 d[j].box=7;
  	 if(j<=69 && j>66)
  	 d[j].box=8;
  	 if(j<=72 && j>69)
  	 d[j].box=9;
  	 if(j==67){
  	 d[j].value=8;d[j].fixed=1;gotoxy(d[j].x,d[j].y);cout<<"8";
      }
     if(j==68){
  	 d[j].value=5;d[j].fixed=1;gotoxy(d[j].x,d[j].y);cout<<"5";
      }
     if(j==69){
  	 d[j].value=1;d[j].fixed=1;gotoxy(d[j].x,d[j].y);cout<<"1";
      }
     if(j==63){
  	 d[j].value=1;d[j].fixed=1;gotoxy(d[j].x,d[j].y);cout<<"1";
      }
	  i+=4;
  	j++;
  }
  //ROW9
        j=73;
  for(i=18;i<=60;i++)
  {
  	changecolor(14);
  	 d[j].x=i;
  	 d[j].y=19;
  	 if(j<=75)
  	 d[j].box=7;
  	 if(j<=78 && j>75)
  	 d[j].box=8;
  	 if(j<=81 && j>78)
  	 d[j].box=9;
  	 if(j==74){
  	 d[j].value=5;d[j].fixed=1;gotoxy(d[j].x,d[j].y);cout<<"5";
      }
     if(j==75){
  	 d[j].value=1;d[j].fixed=1;gotoxy(d[j].x,d[j].y);cout<<"1";
      }
     if(j==79){
  	 d[j].value=3;d[j].fixed=1;gotoxy(d[j].x,d[j].y);cout<<"3";
      }
     if(j==81){
  	 d[j].value=4;d[j].fixed=1;gotoxy(d[j].x,d[j].y);cout<<"4";
      }
	  i+=4;
  	j++;
  }
}
void Lines()
{
    font();
	system("cls");
	int i,j=0;
	gotoxy(16,1);
	changecolor(6);
	for(i=16;i<=64;i++)
{
	for(j=2;j<=20;j++)
	{
		if(i==16 || i==61 || i==31 || i==46)
		changecolor(9);
		gotoxy(i,j);
		cout<<"*";
	}
	changecolor(6);
	i=i+4;
}
changecolor(6);
	for(i=2;i<=20;i++)
{
	for(j=17;j<=60;j++)
	{
		if(i==2 || i==20 || i==8 || i==14)
		changecolor(9);
		gotoxy(j,i);
		cout<<"*";	
	}
	changecolor(6);	
	i++;
}
/*	j=1;
	changecolor(10);
for(i=18;i<=60;i++)
{
	gotoxy(i,3);
	cout<<j;
	i=i+4;
	j++;
}
j=1;
	changecolor(14);
for(i=18;i<=60;i++)
{
	gotoxy(i,5);
	cout<<j;
	i=i+4;
	j++;
}*/
information();
}

int checkerror(int n)
{
	if(n>9 || n<1)
	return 2;
	int i,temp,start;
	vector<int>error;
	//ROW
	if((current%9)==0)
	start=current-8;
	else
	start=(current/9)*9+1;
	for(i=start;i<=(start+8);i++)
	{
	  if(d[i].value==n)
	  error.push_back(i);	
	}
	//COLUMN
	temp=current;
	while(temp>=1)
	temp-=9;
	temp+=9;
	for(i=temp;i<=temp+72;i++)
	{
		if(d[i].value==n)
		error.push_back(i);
		i+=8;
	}
	//BOX
	for(i=1;i<=81;i++)
	{
		if(d[i].box==d[current].box && d[i].value==n)
		error.push_back(i);
	}
	//final
     if(error.size()==0)
	 return 0;
	 changecolor(12);
	 for(i=0;i<error.size();i++)
	 {
	 	gotoxy(d[error[i]].x,d[error[i]].y);
	 	cout<<d[error[i]].value;	
	 }
	 delay();//time delay
	  for(i=0;i<error.size();i++)
	 {
	 	gotoxy(d[error[i]].x,d[error[i]].y);
	 	if(d[error[i]].fixed==1)
	 		changecolor(14);
	 	else
	 	    changecolor(10);
	 	cout<<d[error[i]].value;	
	 }
	 error.clear();	
	 return 1; 	
}
void up()
{
	int temp=current;
  while(1)
  {
  		temp-=9;
  	if(d[temp].fixed==0 || temp<1)
  	break;
  }
  if(temp<1)
  current=current;
  else
  current=temp;
  gotoxy(d[current].x,d[current].y);	
}
void down()
{
		int temp=current;
  while(1)
  {
  		temp+=9;
  	if(d[temp].fixed==0 || temp>81)
  	break;
  }
  if(temp>81)
  current=current;
  else
  current=temp;
  gotoxy(d[current].x,d[current].y);
}
void right()
{
		int temp=current,pos;
		if((current%9)==0)
		pos=current;
		else
		pos=((current/9)+1)*9;
  while(1)
  {
  		temp+=1;
  	if(d[temp].fixed==0 || temp>pos)
  	break;
  }
  if(temp>pos)
  current=current;
  else
  current=temp;
  gotoxy(d[current].x,d[current].y);
}
void left()
{
		int temp=current,pos;
		if((current%9)==0)
		pos=current-8;
		else
		pos=(current/9)*9+1;
  while(1)
  {
  		temp-=1;
  	if(d[temp].fixed==0 || temp<pos)
  	break;
  }
  if(temp<pos)
  current=current;
  else
  current=temp;
  gotoxy(d[current].x,d[current].y);
}
void checkwin()
{
	int i;
	for(i=1;i<=81;i++)
	{
		if(d[i].value==0)
		return;
	}
	gotoxy(80,4);
	cout<<"SOLVED";
	delay();
	delay();
	exit(1);
	
}
void logic()
{
	int temp,flag=0,info;
	char dir;//direction
	gotoxy(d[current].x,d[current].y);
	while(1)
	{
		flag=0;
		fflush(stdin);
	 	dir=getch();
	 //	fflush(stdin);
	 	if(dir==75){
	 	left();flag=1;continue;}
	    if(dir==72){
	 	up();flag=1;continue;}
	 	if(dir==77){
	 	right();flag=1;continue;}
	 	if(dir==80){
	 	down();flag=1;continue;}
	 	
	 	 	if(dir==8)//backspace
		 {
		 	if(d[current].value==0)
		 	continue;
		 	gotoxy(d[current].x,d[current].y);
		 	cout<<" ";
		 	d[current].value=0;
		 	gotoxy(d[current].x,d[current].y);
		 }
	 	
	       temp=dir-48;
	 		   if(temp<10)//value
	 	{
	 		if(flag==1)
	 		continue;
	 		info=checkerror(dir-48);
	 	  if(info==1)
		   {
		   	gotoxy(d[current].x,d[current].y);
		   	cout<<" ";
		   	gotoxy(d[current].x,d[current].y);
		   }
		   if(info==0)//will work
		   {
		   	changecolor(10);
		   	d[current].value=temp;
		   	gotoxy(d[current].x,d[current].y);
		   temp=dir-48;//char to int
		   	cout<<dir;
		   }
		   if(info==2)
		   continue;		
	 	}
	
		 checkwin();
	}	
}
int main()
{
	Lines();
	logic();
	getchar();
	getchar();
	return 0;
}

