#include<GL/glut.h>
#include<GL/freeglut.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//#include<windows.h>
//#include<iostream>
int start =0;

void drawString(float x, float y, float z,  const char * string)
{
  const char * c;
	glRasterPos3f(x, y, z);
	for (c = string; *c != '\0'; c++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, *c);
	}
}

void welcome()
{
int w=1000, h=700;
glClearColor(0.9,0.5,0.0,0.0);
glClear(GL_COLOR_BUFFER_BIT);
		glColor3f(1,1,1);
    drawString(3*w/10+50,5*h/6-30,0.0,"RAJEEV INSTITUTE OF TECHNOLOGY");
    glColor3f(0,0.6,0);
    drawString(3*w/10-20,4*h/6+30,0.0,"DEPARTMENT OF COMPUTER SCIENCE AND ENGINEERING");
    glColor3f(0,0.0,0);
    drawString(4*w/10,7*h/12,0.0,"A MINI PROJECT ON:");
    glColor3f(0,0,1);
    drawString(4*w/10-50,5*h/12+85,0.0,"SIMPLE MAIL TRANSFER PROTOCOL");
    glColor3f(1,0,0);
    drawString(20,140,0.0,"BY:");
    glColor3f(0.5,0,0.5);
    drawString(30,120,0.0,"NAME:SANTHOSH                 (USN:4RA16CS072)");
    drawString(30,100,0.0,"NAME:UZAIR AHMED             (USN:4RA16CS102)");
    glColor3f(0,0,0.5);
    drawString(20,50,0.0,"GUIDE NAME: PRUTHVI MAM");
    
    glColor3f(1,1,0);
    drawString(8*w/10,h/15+30,0.0,"PRESS 'E' TO EXECUTE");
    drawString(8*w/10,h/15+10,0.0,"PRESS 'X, TO EXIT");
    glMatrixMode(GL_MODELVIEW);
 
glEnd();
glFlush();

}

void objects()	
{
glClearColor(0.0,0.0,0.0,0.0);
glClear(GL_COLOR_BUFFER_BIT);

/*
glColor3f(0.8,0.8,0.0); //mail 1
glBegin(GL_POLYGON);
glVertex2i(140,170);
glVertex2i(190,170);
glVertex2i(190,210);
glVertex2i(140,210);
glEnd();
glColor3f(0.9,0.9,0.9);
glLineWidth(3.0);
glBegin(GL_LINE_LOOP);
glVertex2i(140,170);
glVertex2i(190,170);
glVertex2i(190,210);
glVertex2i(140,210);
glEnd();
glLineWidth(5.0);
glBegin(GL_LINE_STRIP);
glVertex2i(190,210);
glVertex2i(165,190);
glVertex2i(140,210);
glEnd();

glColor3f(0.8,0.8,0.0); //mail 2
glBegin(GL_POLYGON);
glVertex2i(140,170);
glVertex2i(190,170);
glVertex2i(190,210);
glVertex2i(140,210);
glEnd();
glColor3f(0.9,0.9,0.9);
glLineWidth(3.0);
glBegin(GL_LINE_LOOP);
glVertex2i(140,170);
glVertex2i(190,170);
glVertex2i(190,210);
glVertex2i(140,210);
glEnd();
glLineWidth(5.0);
glBegin(GL_LINE_STRIP);
glVertex2i(190,210);
glVertex2i(165,190);
glVertex2i(140,210);
glEnd();
*/

glColor3f(0.5,0.5,0.9); //serve
glBegin(GL_POLYGON);
glVertex2i(100,650);
glVertex2i(900,650);
glVertex2i(900,450);
glVertex2i(100,450);
glEnd();

glColor3f(0.5,0.0,1.0);
glBegin(GL_POLYGON); //sender home
glVertex2i(10,50);
glVertex2i(200,50);
glVertex2i(200,220);
glVertex2i(100,300);
glVertex2i(10,220);
glEnd();

glBegin(GL_POLYGON); //reciver home
glVertex2i(990,50);
glVertex2i(800,50);
glVertex2i(800,220);
glVertex2i(900,300);
glVertex2i(990,220);
glEnd();

glColor3f(0.5,0.3,0.0);
glBegin(GL_POLYGON); //sender tree
glVertex2i(210,50);
glVertex2i(230,50);
glVertex2i(225,150);
glVertex2i(215,150);
glEnd();
glColor3f(0.0,1.0,0.0);
glBegin(GL_POLYGON); //tree
glVertex2i(190,150);
glVertex2i(250,150);
glVertex2i(220,310);
glEnd();


glColor3f(0.5,0.3,0.0);
glBegin(GL_POLYGON); //sender  2tree
glVertex2i(260,50);
glVertex2i(280,50);
glVertex2i(275,150);
glVertex2i(265,150);
glEnd();
glColor3f(0.0,1.0,0.0);
glBegin(GL_POLYGON); //tree
glVertex2i(250,150);
glVertex2i(290,150);
glVertex2i(270,280);
glEnd();

glColor3f(0.5,0.3,0.0);
glBegin(GL_POLYGON); //reciver  2tree
glVertex2i(710,50);
glVertex2i(740,50);
glVertex2i(730,150);
glVertex2i(720,150);
glEnd();
glColor3f(0.0,1.0,0.0);
glBegin(GL_POLYGON); //tree
glVertex2i(690,150);
glVertex2i(760,150);
glVertex2i(730,330);
glEnd();

glColor3f(0.5,0.3,0.0);
glBegin(GL_POLYGON); //reciver  2tree
glVertex2i(760,50);
glVertex2i(770,50);
glVertex2i(767,100);
glVertex2i(763,100);
glEnd();
glColor3f(0.0,1.0,0.0);
glBegin(GL_POLYGON); //tree
glVertex2i(780,100);
glVertex2i(750,100);
glVertex2i(765,230);
glEnd();

glColor3f(0.9,0.0,0.0);
glBegin(GL_POLYGON); //sender man my
glVertex2i(38,78);
glVertex2i(62,78);
glVertex2i(62,100);
glVertex2i(50,110);
glVertex2i(38,100);
glEnd();
glColor3f(0.9,0.5,0.5);
glPointSize(15.0);
glBegin(GL_POINTS);
glVertex2i(50,110);
glEnd();

glColor3f(0.0,0.9,0.0);
glBegin(GL_POLYGON); //recever man my
glVertex2i(950,80);
glVertex2i(930,80);
glVertex2i(930,100);
glVertex2i(940,110);
glVertex2i(950,100);
glEnd();
glColor3f(0.9,0.5,0.5);
glPointSize(14.0);
glBegin(GL_POINTS);
glVertex2i(940,110);
glEnd();

glColor3f(0.9,0.0,0.0);
glBegin(GL_POLYGON); //sender man
glVertex2i(138,98);
glVertex2i(162,98);
glVertex2i(162,120);
glVertex2i(150,130);
glVertex2i(138,120);
glEnd();
glColor3f(0.9,0.5,0.5);
glPointSize(14.0);
glBegin(GL_POINTS);
glVertex2i(150,130);
glEnd();

glColor3f(0.0,0.9,0.0);
glBegin(GL_POLYGON); //recever man
glVertex2i(850,100);
glVertex2i(830,100);
glVertex2i(830,120);
glVertex2i(840,130);
glVertex2i(850,120);
glEnd();
glColor3f(0.9,0.5,0.5);
glPointSize(14.0);
glBegin(GL_POINTS);
glVertex2i(840,130);
glEnd();

glColor3f(0.9,0.9,0.5); //sender computer
glBegin(GL_POLYGON);
glVertex2i(110,170);
glVertex2i(170,170);
glVertex2i(170,220);
glVertex2i(110,220);
glEnd();
glColor3f(0.0,0.0,1.0);
drawString(114,189, 0, "G");
glEnd();
glColor3f(1.0,0.0,0.0);
drawString(124,189, 0, "o");
glEnd();
glColor3f(0.5,0.5,0.5);
drawString(134,189, 0, "o");
glEnd();
glColor3f(0.0,0.0,1.0);
drawString(144,189, 0, "g");
glEnd();
glColor3f(0.0,1.0,0.0);
drawString(154,189, 0, "l");
glEnd();
glColor3f(1.0,0.0,0.0);
drawString(157,189, 0, "e");
glEnd();

glColor3f(0.0,0.0,0.0);
glLineWidth(3.0);
glBegin(GL_LINE_LOOP);
glVertex2i(110,170);
glVertex2i(170,170);
glVertex2i(170,220);
glVertex2i(110,220);
glEnd();
glColor3f(0.0,0.0,0.0); //keyboard
glBegin(GL_POLYGON);
glVertex2i(113,145);
glVertex2i(153,145);
glVertex2i(153,165);
glVertex2i(113,165);
glEnd();
glPointSize(12.0); //mouse
glBegin(GL_POINTS);
glVertex2i(163,158);
glVertex2i(163,153);
glEnd();

glColor3f(0.9,0.9,0.5); //recivercomputer
glBegin(GL_POLYGON);
glVertex2i(820,170);
glVertex2i(880,170);
glVertex2i(880,220);
glVertex2i(820,220);
glEnd();
glColor3f(0.0,0.0,0.0);
glLineWidth(3.0);
glBegin(GL_LINE_LOOP);
glVertex2i(820,170);
glVertex2i(880,170);
glVertex2i(880,220);
glVertex2i(820,220);
glEnd();
glColor3f(0.0,0.0,0.0); //keyboard
glBegin(GL_POLYGON);
glVertex2i(823,145);
glVertex2i(863,145);
glVertex2i(863,165);
glVertex2i(823,165);
glEnd();
glPointSize(12.0); //mouse
glBegin(GL_POINTS);
glVertex2i(873,158);
glVertex2i(873,153);
glEnd();

glColor3f(0.0,0.5,0.4); //sender stack
glBegin(GL_POLYGON);
glVertex2i(120,635);
glVertex2i(210,635);
glVertex2i(210,465);
glVertex2i(120,465);
glEnd();

glBegin(GL_POLYGON);  //reciver stack
glVertex2i(880,635);
glVertex2i(790,635);
glVertex2i(790,465);
glVertex2i(880,465);
glEnd();

glColor3f(1.0,0.9,0.9);
//glRasterPos2i(70,20);
drawString(70,20,0,"Sender");
glColor3f(1.0,0.9,0.9);
drawString(870,20,0,"Reciver");


glColor3f(1.0,0.3,0.9);
drawString(137,605,0,"Sender");
drawString(137,585,0,"Server");
drawString(137,565,0,"Stock");


glColor3f(1.0,0.3,0.9);
drawString(807,605,0,"Reciver");
drawString(807,585,0,"Server");
drawString(808,565,0,"Stack");
glEnd();
glColor3f(0.9,0.9,0.9);
drawString(450,625,0,"SERVER");

glColor3f(1.0,0.9,0.9);
//glRasterPos2i(370,670);
drawString(370,670,0,"SIMPLE MAIL TRANSFER PROTOCAL");
//glutBitmapString(GLUT_BITMAP_HELVETICA_18,"SIMPLE MAIL TRANSFER PROTOCOL");
drawString(370,140,0,"Press S to Send the Message");
drawString(400,120,0,"Press R to Reset");
drawString(400,100,0,"Press X to Exit");
glFlush();
/*
glColor3f(0.8,0.8,0.0); //demo mail path server
glBegin(GL_POLYGON);
glVertex2i(140,485);
glVertex2i(190,485);
glVertex2i(190,525);
glVertex2i(140,525);
glEnd();
glColor3f(0.9,0.9,0.9);
glLineWidth(3.0);
glBegin(GL_LINE_LOOP);
glVertex2i(140,485);
glVertex2i(190,485);
glVertex2i(190,525);
glVertex2i(140,525);
glEnd();
glLineWidth(5.0);
glBegin(GL_LINE_STRIP);
glVertex2i(190,525);
glVertex2i(165,505);
glVertex2i(140,525);
glEnd();

glColor3f(0.8,0.8,0.0); //demo mail path recever
glBegin(GL_POLYGON);
glVertex2i(810,485);
glVertex2i(860,485);
glVertex2i(860,525);
glVertex2i(810,525);
glEnd();
glColor3f(0.9,0.9,0.9);
glLineWidth(3.0);
glBegin(GL_LINE_LOOP);
glVertex2i(810,485);
glVertex2i(860,485);
glVertex2i(860,525);
glVertex2i(810,525);
glEnd();
glLineWidth(5.0);
glBegin(GL_LINE_STRIP);
glVertex2i(860,525);
glVertex2i(835,505);
glVertex2i(810,525);
glEnd();
*/

glFlush();
	
}

void m2()
{
float i, j, temp = 0.3;
	temp = 0.3;
	for (i=0;i<45;i = i + temp) //data packet storage in left side server
	{
		glColor3f(0.8, 0.8, 0.0);
		glBegin(GL_POLYGON);
		glVertex2i(140 +i, 525);
		glVertex2i(140 +i, 485);
		glVertex2i(145 +i, 485);
		glVertex2i(145 +i, 525);
		glEnd();
		glFlush();
	}
glColor3f(0.8,0.8,0.0); //demo mail path server
glBegin(GL_POLYGON);
glVertex2i(140,485);
glVertex2i(190,485);
glVertex2i(190,525);
glVertex2i(140,525);
glEnd();
glColor3f(0.9,0.9,0.9);
glLineWidth(3.0);
glBegin(GL_LINE_LOOP);
glVertex2i(140,485);
glVertex2i(190,485);
glVertex2i(190,525);
glVertex2i(140,525);
glEnd();
glLineWidth(5.0);
glBegin(GL_LINE_STRIP);
glVertex2i(190,525);
glVertex2i(165,505);
glVertex2i(140,525);
glEnd();
glFlush();
}


void m4()
{
float i, j, temp = 0.3;
	temp = 0.3;
	for (i = 0;i < 515;i = i + temp) //left server to right server
	{
		glColor3f(1, 0.5, 1);
		glBegin(GL_QUADS);
		glVertex2i(210 + i, 500);
		glVertex2i(210 + i, 505);
		glVertex2i(276 + i, 505);
		glVertex2i(276 + i, 500);
		glEnd();
		glFlush();


			glColor3f(0.0,0.0, 0.0);
	drawString(380,470, 0, "Sending Data");
	glEnd();
	glFlush();
	}

}

void m5()

{
float i, j, temp = 0.3;
	temp = 0.3;
	for (i = 0;i < 10;i = i + temp) //right side server storage
	{
		glColor3f(0.8, 0.8, 0);
		glBegin(GL_POLYGON);
		glVertex2i(808 + i, 485);
		glVertex2i(808 + i, 525);
		glVertex2i(850 + i, 525);
		glVertex2i(850 + i, 485);
		glEnd();
		glFlush();


			//glColor3f(0.0,0.9, 0.0);
	//drawString(40,180, 0, "Client");
	glEnd();
	glFlush();
	}
glColor3f(0.8,0.8,0.0); //demo mail path recever
glBegin(GL_POLYGON);
glVertex2i(810,485);
glVertex2i(860,485);
glVertex2i(860,525);
glVertex2i(810,525);
glEnd();
glColor3f(0.9,0.9,0.9);
glLineWidth(3.0);
glBegin(GL_LINE_LOOP);
glVertex2i(810,485);
glVertex2i(860,485);
glVertex2i(860,525);
glVertex2i(810,525);
glEnd();
glLineWidth(5.0);
glBegin(GL_LINE_STRIP);
glVertex2i(860,525);
glVertex2i(835,505);
glVertex2i(810,525);
glEnd();
glFlush();
}

void m1()
{
float i, j, temp = 0.3;
	temp = 0.3;
	for (i = 0;i < 95;i = i + temp) //movement of data from clint to server
	{
		glColor3f(1, 0, 0);
		glBegin(GL_POLYGON);
		glVertex2i(150 , 220+ i);
		glVertex2i(150, 371+ i);
		glVertex2i(145 ,371+ i);
		glVertex2i(145 ,220+ i);
		glEnd();
		glFlush();

		glColor3f(1.0,0.0, 0.0);
	drawString(20,300, 0, "Sending Data");
	glEnd();
	glFlush();


	}
}


void m3()
{
float i, j, temp = 0.4;
	temp = 0.3;
	for (i = 0;i < 200;i = i + temp) //movement of data server to clint
	{
		glColor3f(1, 0, 0);
		glBegin(GL_QUADS);
		glVertex2i(850 , 420- i);
		glVertex2i(850  , 465- i);
		glVertex2i(855 , 465 -i);
		glVertex2i(855 , 420- i);
		glEnd();
		glFlush();

		glColor3f(1.0,1.0, 1.0);
	drawString(860,360, 0, "Destination");
	glEnd();
	glColor3f(0.0,0.0,1.0);
drawString(824,185, 0, "G");
glEnd();
glColor3f(1.0,0.0,0.0);
drawString(834,185, 0, "o");
glEnd();
glColor3f(0.5,0.5,0.5);
drawString(844,185, 0, "o");
glEnd();
glColor3f(0.0,0.0,1.0);
drawString(854,185, 0, "g");
glEnd();
glColor3f(0.0,1.0,0.0);
drawString(864,185, 0, "l");
glEnd();
glColor3f(1.0,0.0,0.0);
drawString(867,185, 0, "e");
glEnd();
	glFlush();


	}
}

void n3()
{
float i, j, temp = 0.4;
	temp = 0.3;
	for (i = 0;i < 55;i = i + temp) //movement of ack  clint to server
	{
		glColor3f(0.6, 0.9,0.8);
		glLineWidth(0.1);
		glBegin(GL_QUADS);
		glVertex2i(840 , 220+ i);
		glVertex2i(840 , 411+ i);
		glVertex2i(845 , 411 + i);
		glVertex2i(845 , 220+ i);
		glEnd();
		glFlush();

		glColor3f(0.0,0.0, 1.0);
	drawString(680,390, 0, "Acknowledgement");
	
	glEnd();
	glFlush();


	}
}
void n4()
{
float i, j, temp = 0.4;
	temp = 0.3;
	for (i = 0;i < 515;i = i + temp) // ack right server to left server
	{
		glColor3f(1, 0.5, 0);
		glBegin(GL_QUADS);
		glVertex2i(725 - i, 510);
		glVertex2i(725 - i, 515);
		glVertex2i(790 - i, 515);
		glVertex2i(790 - i, 510);
		glEnd();
		glFlush();
			glColor3f(0.0,1.0, 0.0);
	drawString(550,530, 0, "Sending Acknowledgement");
	glEnd();
	glFlush();
	}
}
void n1()
{
float i, j, temp = 1.4;
	temp = 1.3;
	for (i = 0;i < 1;i = i + temp) //movement of data from  server to clint
	{
		glColor3f(1, 1, 0.5);
		glBegin(GL_POLYGON);
		glVertex2i(170 , 220- i);
		glVertex2i(170, 465- i);
		glVertex2i(165 ,465- i);
		glVertex2i(165 ,220- i);
		glEnd();
		glFlush();

		glColor3f(0.7,0.5, 0.5);
	drawString(180,380, 0, "Destination");
	glEnd();
	glFlush();


	}
}

void ke(unsigned char key,int x,int y)
{
	if(key=='s')
	key='S';
  switch(key)
  {
  case'E': start=1; 
	objects();
	break;
  case'e': start=1; 
	objects();
	break;
  case'r': if(start==1) objects();
	break;
  case'R': if(start==1)objects();
	break;
  case 'x':exit(1);
    break;
  case 'X':exit(1);
    break;
   
    case'S':if(start==1)
	{	
	m1();
	m2();
	m4();
	m5();
	m3();
	n3();
	n4();
	n1();
	}
	break;
}
}

void init()
{
glClearColor(0.0,0.0,0.0,0.0);
glMatrixMode(GL_PROJECTION);
//glMatrixMode(GL_MODELVIEW);
gluOrtho2D(0.0,1000.0,0.0,700.0);
}
void main(int argc,char** argv)
{
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB|GLUT_DEPTH);
glutInitWindowSize(1050,700);
glutInitWindowPosition(0,0);
glutCreateWindow("project");
glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
glutFullScreen();
glutDisplayFunc(welcome);
//glutDisplayFunc(objects);
init();
glutKeyboardFunc(ke);
glutMainLoop();
}
