#include <iostream>
#include <stdlib.h>
#include "iGraphics.h"
#include <time.h>
#include "bitmap_viewer.h"

using namespace std;

int mposx, mposy;
int HEIGHT = 1000, WIDTH =1000;
int x_axis = 10;
int y_axis = 0, y1_axis = 0, yc_axis = 0, y2_axis = 0, y3_axis = 0, y4_axis = 224, y5_axis = 225, y6_axis = 176, y7_axis = 206, y8_axis = 198, y9_axis = 175, y10_axis = 148;
int c1_x_axis = 480, c1_y_axis = 92, c2_x_axis =480, c2_y_axis = 1092, hx_axis = 460, hy_axis = 5090, ox = 410, oy = 2500,obx=565,oby=2250;
int   c3_x_axis = 669, c3_y_axis = 1192, c4_x_axis = 400, c4_y_axis =3000, c5_x_axis = 600, c5_y_axis =1392;
int c6_x_axis =292, c6_y_axis = 1492, c7_x_axis = 520, c7_y_axis = 1592;
int  c3_y = 120;
int c5_axis = 1200,c3_x;
int c6_axis = 3000;
int c_axis = 792, i, c_yaxis = 200;
int c7_axis = 4000, t_axis = 10000, p = 1,o=1, q = 1, s = 0, f = 0, m1 = 0, m2 = 0, m3 = 0, m4 = 0, m5 = 0, m6 = 0,m7=0, n = 0, l_axis = 50;
int a1[1000], a = c2_y_axis == c1_y_axis + c1_y_axis;
int v1 = 0, v2 = 0, v3 = 0, v4 = 0, v5 = 0, v6 = 0, v7 = 0, v8 = 0;
int x1 = 0, x6 =200, x3 = 0, x4 = 0, l1 = 0,l2=0,l3=0;
int d =1,c1=0,c2=0,c3=0;
int post;
int i7 = 20;
int i6 = 50;
int i5 = 80;
int i4 = 110;
int i3 = 140;
int i2 = 170;
int i1 = 200,dx=25,dy=15;
int z1 = 0, z2 = 0, z3 = 0, z4 = 0, fl = 0, fb1 = 0, fb2 = 0, fb3 = 0, fb4 = 0, fb5 = 0, fb6 = 0, fb7 = 0, fb8 = 0, fb9 = 0, fb10 = 0, fb11 = 0, fb12 = 0, fb13 = 0, fb14 = 0, fb15 = 0,
fb16 = 0, fb17 = 0, fb18 = 0, fb19 = 0, fb20 = 0, fb21 = 0, fb22 = 0, fb23 = 0,te=0;
int mxx, myy;
int end = 0;
char ar[100000000],c;
char ar1[100000000];

int flyx = 200;
int fly_y = 1400;
int flyindex = 0;
int index1 = rand() % 5;
int index2 = rand() % 5;
int index3 = rand() % 5;
int index4 = rand() % 5;
int index5 = rand() % 5;

int index = 0;
char fly[8][19] = { "background//a1.bmp", "background//a2.bmp", "background//a3.bmp", "background//a4.bmp", "background//a5.bmp", "background//a6.bmp", "background//a7.bmp", "background//a8.bmp" };
char car[5][21] = { "background//c6.bmp", "BG//c3.bmp", "background//c4.bmp", "background//c2.bmp","BG//c5.bmp" };
char jump1[5][21]= { "BG//Fly.bmp", "BG//Fly.bmp", "BG//Fly.bmp", "BG//Fly.bmp", "BG//Fly.bmp" };
int result;
int highscorepage = 0, level = 0;

int score = 0;
int textf = 0,jumplimit=0,fuelshow=0;


//Car position 
int position_x = 400;
int position_y =HEIGHT+300;
int position_x1 = 500;
int position_y1 = HEIGHT+300;
int position_x2 = 700;
int position_y2 = HEIGHT+300;
int position_x3 = 600;
int position_y3 = HEIGHT+300;
int position_x4 = 190;
int position_y4 = HEIGHT+300;


//fuel position
int position_x5 = 90;
int position_y5 = HEIGHT-100;


//jump
int jump = 0;
int dn = 0, dn1 = 0, dn2 = 0, dn3 = 0, dn4 = 0;
int dw1 = 0, dw2 = 0, dw3 = 0, dw4 = 0, dw5 = 0;
int px = 400, py = 624;


int sindex = 0;
int down(int d)
{
	sindex = d + sindex;
	return sindex;
}


int fuel(int pm)
{
	static int c1_x_axis = 110;
	if (c1_x_axis != 0 && c1_x_axis<111)
	{
		c1_x_axis -= pm;
	}

	return c1_x_axis;
}

void text()
{
		iSetColor(255, 255, 255);
		iText(420, 800, "You lost one life!", GLUT_BITMAP_TIMES_ROMAN_24); //text something	
}

int imageposition(int a,int b,int c,int d,int e)
{
	//position
	if (position_y <= 0){
		score = score + 10;

		position_x = rand() % (350+1-300)+300;
		
		position_y = HEIGHT+300;
		index1 = rand() % 5;
	}
	else if (position_x<787){

			position_y -= a;
	}
		
		//position
		if (position_y1 <= 0)
		{
			score = score + 10;
			position_x1 = rand() % (780 + 1 - 680) + 680;

			position_y1 = HEIGHT + 300;
			index2 = rand() % 5;
		}
		else if (position_x1<787)
		{
			position_y1 -=b;
		}
	
		//position
		if (position_y2 <= 0)
		{
			score = score + 10;
			position_x2 = rand() % (630 + 1 - 580) + 580;

			position_y2 = HEIGHT + 300;
			index3 = rand() % 5;
		}
		else if (position_x2<787)
		{
			position_y2 -= c;
		}
		

		//position
		if (position_y3 <= 0)
		{
			score = score + 10;
			position_x3 = rand() % (530 + 1 - 480) + 480;

			position_y3 = HEIGHT + 300;
			index4 = rand() % 5;
		}
		
		else if (position_x3<787)
		{
			position_y3 -= d;
		}
		
		//position
		if (position_y4 <= 0)
		{
			score = score + 10;
			position_x4 = rand() % (250 + 1 - 180) + 180;

			position_y4 = HEIGHT + 300;
			index5 = rand() % 5;
		}

		else if (position_x4<787)
		{
			position_y4 -= e;
		}

		return 0;
}

/*
function iDraw() is called again and again by the system.
*/

//fuel
void bmpfuel()
{
	iShowBMP2(position_x5, position_y5, "background//fuel.bmp", 0);
}
void effect()
{
	iShowBMP2(c1_x_axis, c1_y_axis, fly[index], 0);
}

//score
void give()
{
	string a = "YOUR SCORE IS : " + to_string(score);
	
	strncpy_s(ar, a.c_str(), sizeof(ar));
	ar[sizeof(ar) - 1] = 0;

	return;
}
void give1()
{
	string a = "" + to_string(dw2);
	
	strncpy_s(ar1, a.c_str(), sizeof(ar1));
	ar1[sizeof(ar1) - 1] = 0;

	return;
}

/*
function iDraw() is called again and again by the system.
*/
void iDraw()
{
	iClear();

	//printf("\n mxx \t%d", mxx);
	//printf("\n myy \t%d", myy);

	if(d == 1)
	{ 
		c1++;
		
		iShowBMP(0, 0, "BG//frontPage.bmp");
		
			if (c1 >= 250)
			{
				iShowBMP(0, 0, "background//startPage.bmp");

				FILE *inf;
				inf = fopen("Highscore.txt", "r");
				if (inf != NULL)
				{
					fscanf(inf, "%d ", &dw2);
				}
				fclose(inf);

				give1();

				if (highscorepage == 1)
				{
					iSetColor(0, 0, 0);
					iFilledRectangle(0, 0, 1000, 1000);
					iSetColor(255, 0, 0);
					iText(350, 600, "H I G H    S C O R E :", GLUT_BITMAP_TIMES_ROMAN_24);
					iText(580, 600, ar1, GLUT_BITMAP_TIMES_ROMAN_24);
					iText(450, 470, "B A C K ", GLUT_BITMAP_TIMES_ROMAN_24);
				}
				if (level == 1)
				{
					iShowBMP(0, 0, "BG/level.bmp");
					iSetColor(255, 255, 255);
					iText(450, 370, "B A C K ", GLUT_BITMAP_TIMES_ROMAN_24);
				}
			}
	}


	if (o == 1 && d == 2){
		
		s++;

		give();
		
		iText(700, 800, ar, GLUT_BITMAP_TIMES_ROMAN_24);


		if (l1 == 1 || l2 == 1 || l3 == 1)
		{
			for (i = 0; i <= 1000; i += 100)
			{
				iShowBMPAlternative2(0, y_axis + i, "BG//f5.bmp", 0);
			}
			for (i = 600; i <= 600; i += 100)
			{
				iShowBMPAlternative2(0, y1_axis + i, "BG//f6.bmp", 0);
			}
			for (i = 400; i <= 400; i += 100)
			{
				iShowBMPAlternative2(0, y2_axis + i, "BG//f6.bmp", 0);
			}
		}

		iSetColor(0, 128,255);
		
		fb19++;

		//level speed
		if (l1 == 1)
		{
			imageposition(10, 11, 12, 13, 14);
		}
		if (l2 == 1)
		{
			imageposition(14, 17, 20, 23, 25);
		}
		if (l3 == 1)
		{
			imageposition(27, 31, 35, 39, 42);
		}

		//myCar
		if (p == 1 && jump == 0)
		{
			iShowBMP2(c1_x_axis, c1_y_axis, "BG//myCar.bmp", 0);
		}


		iShowBMP2(position_x, position_y, car[index1],0);
		iShowBMP2(position_x1, position_y1, car[index2], 0);
		iShowBMP2(position_x2, position_y2, car[index3], 0);
		iShowBMP2(position_x3, position_y3, car[index4], 0);
		iShowBMP2(position_x4, position_y4, car[index5], 0);
	
		
		iSetColor(237, 28, 37);
		iText(750, 900,  ar, GLUT_BITMAP_TIMES_ROMAN_24);

		//For fuel show
		if (fb19 >= 200 && fb19 <= 700 && fb10==0)
		{
			bmpfuel();
			fuelshow = 1;
			if (fb19 >= 200 && fb19 <= 201)
			{
				position_x5 = 190;
				position_y5 = HEIGHT - 100;
			}
		}
		if (fb19 > 700)
		{
			fb19 = 0;
			fuelshow = 0;
			
		}
		if (fuelshow == 0)
		{
			position_x5 = 90;
			position_y5 = HEIGHT - 100;
		}

		//Unnecessary
		if (fb20 == 1)
		{
			//effect();
			fb21++;
			if (fb21 == 50)
			{
				fb20 = 0;
				fb21 = 0;
			}
		}
	
		
		//for barier
		iShowBMP2(c4_x_axis, c4_y_axis, "background//barier.bmp", 0);


		if (l1 == 1 || l2 == 1 || l3 == 1)
		{
			y_axis = y_axis - 10;   //increment x axis
			if (y_axis <= -100)   //for movement any object
			{ 
				y_axis = 0;
			}

			y1_axis = y1_axis - 10;   //for tree 1
			if (y1_axis <= -800)   //for movement any object
			{ 
				y1_axis = 500;
			}

			y2_axis = y2_axis - 10;   //For tree two
			if (y2_axis <= -1000)  //for movement any object
			{ 
				y2_axis = 700;
			}
		}

			c5_axis = c5_axis - 3;
			if (c5_axis <= 0 - 5)  //for movement any object
			{
				c5_axis = 1200;
			}

			c6_axis = c6_axis - 3;
			if (c6_axis <= 0 - 5)   //for movement any object
			{   
				c6_axis = 3000;
			}

			c7_axis = c7_axis - 3;
			if (c7_axis <= 0 - 5)    //for movement any object
			{   
				c7_axis = 4000;
			}

			t_axis = t_axis - 5;
			if (t_axis <= -5)   //for movement any object
			{   
				t_axis = 10000;
			}


			if (c3_x == c_axis && c3_y == c_yaxis)
			{
				iSetColor(97, 97, 97);

				for (i = 0;; i++)
				{

					iFilledRectangle(0, 0, 792, 494);
				}
			}


			

			//for life decrement 

			if (c1_x_axis > 786)
			{
				q++;
				c1_x_axis = 480;
			}
			if (c1_x_axis < 176)
			{
				q++;
				c1_x_axis = 480;
			}

			//for car crash condition

			if (!(c1_x_axis - 38 >= obx) && jump == 0)
			{
				if ((oby == 90 + c1_y_axis && obx == c1_x_axis) ||
					((oby == 90 + c1_y_axis) && (c1_x_axis + 38 >= obx)) ||
					(oby == 90 + c1_y_axis) && (c1_x_axis + 38 >= obx) ||
					((c1_y_axis + 90 >= oby && (oby >= c1_y_axis - 88)) && (c1_x_axis + 38 >= obx)))
				{
					obx = obx - 2000;
					oby = 2500;
					p = 2;
					q++;

					v8 = 1;
				}
			}

			if (!(c1_x_axis - 58 >= position_x3) && jump == 0)
			{
				if ((position_y3 == 100 + c1_y_axis && position_x3 == c1_x_axis) ||
					((position_y3 == 100 + c1_y_axis) && (c1_x_axis + 38 >= position_x3)) ||
					(position_y3 == 100 + c1_y_axis) && (c1_x_axis + 38 >= position_x3) ||
					((c1_y_axis + 100 >= position_y3 && (position_y3 >= c1_y_axis - 88)) && (c1_x_axis + 38 >= position_x3)))
				{
					position_x3 = position_x3 - 2000;
					position_y3 = 2500;
					textf = 1;
					q++;
					
					v7 = 1;

				}
			}

			if (!(c1_x_axis - 30 >= hx_axis) && jump == 0)
			{
				if ((hy_axis == 90 + c1_y_axis && hx_axis == c1_x_axis) ||
					((hy_axis == 90 + c1_y_axis) && (c1_x_axis + 30 >= hx_axis)) ||
					(hy_axis == 90 + c1_y_axis) && (c1_x_axis + 38 >= hx_axis) ||
					((c1_y_axis + 90 >= hy_axis && (hy_axis >= c1_y_axis - 88)) && (c1_x_axis + 38 >= hx_axis)))
				{
					n = 1;
					q--;
					hy_axis = 5090;
				}
			}

			if (textf == 1)
			{
				te++;
				text();
				if (te == 50)
				{
					textf = 0;
					te = 0;
				}
			}

			if (!(c1_x_axis - 38 >= position_x) && jump == 0)
			{
				if ((position_y == 100 + c1_y_axis && position_x == c1_x_axis) ||
					((position_y == 100 + c1_y_axis) && (c1_x_axis + 38 >= position_x)) ||
					((position_y == c1_y_axis) && (c1_x_axis + 38 >= position_x)) ||
					((c1_y_axis + 100 >= position_y && (position_y >= c1_y_axis - 88)) && (c1_x_axis + 38 >= position_x)))
				{
					position_x -= 2000;
					position_y = 1092;

					textf = 1;
					q++;
					v1 = 1;
					x1 = 1;
				}
			}

			if (!(c1_x_axis - 38 >= position_x1) && jump == 0)
			{
				if ((position_y1 == 100 + c1_y_axis && position_x1 == c1_x_axis) ||
					((position_y1 == 100 + c1_y_axis) && (c1_x_axis + 38 >= position_x1)) ||
					((position_y1 == c1_y_axis) && (c1_x_axis + 38 >= position_x1)) ||
					((c1_y_axis + 100 >= position_y1 && (position_y1 >= c1_y_axis - 88)) && (c1_x_axis + 38 >= position_x1)))
				{

					position_x1 -= 2000;
					position_y1 = 1092;

					textf = 1;

					q++;
					v2 = 1;
					x1 = 1;
				}
			}

			if (!(c1_x_axis - 38 >= position_x2) && jump == 0)
			{
				if ((position_y2 == 100 + c1_y_axis && position_x2 == c1_x_axis) ||
					((position_y2 == 100 + c1_y_axis) && (c1_x_axis + 38 >= position_x2)) ||
					((position_y2 == c1_y_axis) && (c1_x_axis + 38 >= position_x2)) ||
					((c1_y_axis + 100 >= position_y2 && (position_y2 >= c1_y_axis - 88)) && (c1_x_axis + 38 >= position_x2)))
				{
					position_x2 -= 2000;
					position_y2 = 1092;

					textf = 1;
					
					q++;
				}
			}

			//Collusion with fuel
			if (!(c1_x_axis - 38 >= position_x5) && jump == 0)
			{
				if ((position_y5 == 100 + c1_y_axis && position_x5 == c1_x_axis) ||
					((position_y5 == 100 + c1_y_axis) && (c1_x_axis + 38 >= position_x5)) ||
					((position_y5 == c1_y_axis) && (c1_x_axis + 38 >= position_x5)) ||
					((c1_y_axis + 100 >= position_y5 && (position_y5 >= c1_y_axis - 88)) && (c1_x_axis + 38 >= position_x5)))
				{
					fb19 = 0;
					fuelshow = 0;

					if (fb10 == 0)
					{
						fl -= 10;
					}
					fb14 = 1;
					fuel(-10);
				}
			}
			if (!(c1_x_axis - 38 >= position_x4) && jump == 0)
			{
				if ((position_y4 == 100 + c1_y_axis && position_x4 == c1_x_axis) ||
					((position_y4 == 100 + c1_y_axis) && (c1_x_axis + 38 >= position_x4)) ||
					((position_y4 == c1_y_axis) && (c1_x_axis + 38 >= position_x4)) ||
					((c1_y_axis + 100 >= position_y4 && (position_y4 >= c1_y_axis - 88)) && (c1_x_axis + 38 >= position_x4)))
				{
					position_x4 -= 2000;
					position_y4 = 1092;

					textf = 1;

					q++;
					v2 = 1;
					x1 = 1;
				}
			}
			if (!(c1_x_axis - 38 >= c4_x_axis) && jump == 0)
			{
				if ((c4_y_axis == 90 + c1_y_axis && c4_x_axis == c1_x_axis) || 
					((c4_y_axis == 90 + c1_y_axis) && (c1_x_axis + 38 >= c4_x_axis)) || 
					((c4_y_axis == c1_y_axis) && (c1_x_axis + 38 >= c4_x_axis)) || 
					((c1_y_axis + 90 >= c4_y_axis && (c4_y_axis >= c1_y_axis - 88)) && (c1_x_axis + 38 >= c4_x_axis)))
				{
					c4_x_axis -= 2000;
					c4_y_axis = 1592;

					p = 2;
					q++;
					v3 = 1;
				}
			}
			if (!(c1_x_axis - 38 >= c5_x_axis) && jump == 0)
			{
				if ((c5_y_axis == 90 + c1_y_axis && c5_x_axis == c1_x_axis) || 
					((c5_y_axis == 90 + c1_y_axis) && (c1_x_axis + 38 >= c5_x_axis)) || 
					((c5_y_axis == c1_y_axis) && (c1_x_axis + 38 >= c5_x_axis)) ||
					((c1_y_axis + 90 >= c5_y_axis && (c5_y_axis >= c1_y_axis - 88)) && (c1_x_axis + 38 >= c5_x_axis)))
				{
					c5_x_axis -= 2000;
					c5_y_axis = 1892;

					p = 2;
					q++;
					v4 = 1;
				}
			}
			if (!(c1_x_axis - 38 >= c6_x_axis) && jump == 0)
			{
				if ((c6_y_axis == 90 + c1_y_axis && c6_x_axis == c1_x_axis) || 
					((c6_y_axis == 90 + c1_y_axis) && (c1_x_axis + 38 >= c6_x_axis)) || 
					((c6_y_axis == c1_y_axis) && (c1_x_axis + 38 >= c6_x_axis)) || 
					((c1_y_axis + 90 >= c6_y_axis && (c6_y_axis >= c1_y_axis - 88)) && (c1_x_axis + 38 >= c6_x_axis)))
				{
					c6_x_axis -= 2000;
					c6_y_axis = 2292;

					p = 2;
					q++;
					v5 = 1;
				}
			}
			if (!(c1_x_axis - 38 >= c7_x_axis) && jump == 0)
			{
				if ((c7_y_axis == 90 + c1_y_axis && c7_x_axis == c1_x_axis) || 
					((c7_y_axis == 90 + c1_y_axis) && (c1_x_axis + 38 >= c7_x_axis)) || 
					((c7_y_axis == c1_y_axis) && (c1_x_axis + 38 >= c7_x_axis)) || 
					((c1_y_axis + 90 >= c7_y_axis && (c7_y_axis >= c1_y_axis - 88)) && (c1_x_axis + 38 >= c7_x_axis)))
				{
					c7_x_axis -= 2000;
					c7_y_axis = 2592;

					p = 2;
					q++;
					v6 = 1;
				}
			}
		

				if (fl > 10)
				{
					fb1 = 1;
				}
				else fb1 = 0;
				if (fl> 20)
				{
					fb2 = 1;
				}
				else fb2 = 0;
				if (fl > 30)
				{
					fb3 = 1;
				}
				else fb3 = 0;
				if (fl > 40)
				{
					fb4 = 1;
				}
				else fb4 = 0;
				if (fl> 50)
				{
					fb5 = 1;
				}
				else fb5 = 0;
				if (fl > 60)
				{
					fb6 = 1;
				}
				else fb6 = 0;
				if (fl >70)
				{
					fb7 = 1;
				}
				else fb7 = 0;
				if (fl >80)
				{
					fb8 = 1;
				}
				else fb8 = 0;
				if (fl>90)
				{
					fb9 = 1;
				}
				else fb9 = 0;
				if (fl > 100)
				{
					fb10 = 1;
				}
				else fb10 = 0;

			


			FILE *inf;
			inf = fopen("Highscore.txt", "r");
			if (inf != NULL)
			{
				fscanf(inf,"%d ", &dw2);
			}
			
			if (score >= dw2){
				FILE *of;
				of = fopen("Highscore.txt", "w");

				if (of != NULL)
				{
					dw1 = score;
					fprintf(of,"%d", dw1);
					fclose(of);
				}
			}
			fclose(inf);
		
			//x6 -= 1;

		/*if (s == 1000){
			p = 2;
			q = 2;
			}*/

			//For level increasing

			//level - 1

			if (l1 == 1)
			{
				x4++;

				iSetColor(0, 0, 166);
				iText(850, 550, "Ending Point", GLUT_BITMAP_TIMES_ROMAN_24);
				iRectangle(900, 300, 30, 200);
				iText(850, 250, "Starting Point", GLUT_BITMAP_TIMES_ROMAN_24);


				if (x4 >= 100) iFilledRectangle(900, 300, 30, 10);

				if (x4 >= 200) iFilledRectangle(900, 310, 30, 10);

				if (x4 >= 300) iFilledRectangle(900, 320, 30, 10);

				if (x4 >= 400) iFilledRectangle(900, 330, 30, 10);

				if (x4 >= 500) iFilledRectangle(900, 340, 30, 10);

				if (x4 >= 600) iFilledRectangle(900, 350, 30, 10);

				if (x4 >= 700) iFilledRectangle(900, 360, 30, 10);

				if (x4 >= 800) iFilledRectangle(900, 370, 30, 10);

				if (x4 >= 900) iFilledRectangle(900, 380, 30, 10);

				if (x4 >= 1000) iFilledRectangle(900, 390, 30, 10);

				if (x4 >= 1100) iFilledRectangle(900, 400, 30, 10);

				if (x4 >= 1200) iFilledRectangle(900, 410, 30, 10);

				if (x4 >= 1300) iFilledRectangle(900, 420, 30, 10);

				if (x4 >= 1400) iFilledRectangle(900, 430, 30, 10);

				if (x4 >= 1500) iFilledRectangle(900, 440, 30, 10);

				if (x4 >= 1600) iFilledRectangle(900, 450, 30, 10);

				if (x4 >= 1700) iFilledRectangle(900, 460, 30, 10);

				if (x4 >= 1800) iFilledRectangle(900, 470, 30, 10);

				if (x4 >= 1900) iFilledRectangle(900, 480, 30, 10);

				if (x4 >= 2000) iFilledRectangle(900, 490, 30, 10);


				//wining condition
				if (x4 >= 2000)
				{
					d = 4;
				}
			}

			//level - 2

			if (l2 == 1)
			{
				x4++;

				iSetColor(0, 0, 166);
				iText(850, 700, "Ending Point", GLUT_BITMAP_TIMES_ROMAN_24);
				iRectangle(900, 300, 30, 350);
				iText(850, 250, "Starting Point", GLUT_BITMAP_TIMES_ROMAN_24);


				if (x4 >= 100) iFilledRectangle(900, 300, 30, 10);

				if (x4 >= 200) iFilledRectangle(900, 310, 30, 10);

				if (x4 >= 300) iFilledRectangle(900, 320, 30, 10);

				if (x4 >= 400) iFilledRectangle(900, 330, 30, 10);

				if (x4 >= 500) iFilledRectangle(900, 340, 30, 10);

				if (x4 >= 600) iFilledRectangle(900, 350, 30, 10);

				if (x4 >= 700) iFilledRectangle(900, 360, 30, 10);

				if (x4 >= 800) iFilledRectangle(900, 370, 30, 10);

				if (x4 >= 900) iFilledRectangle(900, 380, 30, 10);

				if (x4 >= 1000) iFilledRectangle(900, 390, 30, 10);

				if (x4 >= 1100) iFilledRectangle(900, 400, 30, 10);

				if (x4 >= 1200) iFilledRectangle(900, 410, 30, 10);

				if (x4 >= 1300) iFilledRectangle(900, 420, 30, 10);

				if (x4 >= 1400) iFilledRectangle(900, 430, 30, 10);

				if (x4 >= 1500) iFilledRectangle(900, 440, 30, 10);

				if (x4 >= 1600) iFilledRectangle(900, 450, 30, 10);

				if (x4 >= 1700) iFilledRectangle(900, 460, 30, 10);

				if (x4 >= 1800) iFilledRectangle(900, 470, 30, 10);

				if (x4 >= 1900) iFilledRectangle(900, 480, 30, 10);

				if (x4 >= 2000) iFilledRectangle(900, 490, 30, 10);

				if (x4 >= 2100) iFilledRectangle(900, 500, 30, 10);

				if (x4 >= 2200) iFilledRectangle(900, 510, 30, 10);

				if (x4 >= 2300) iFilledRectangle(900, 520, 30, 10);

				if (x4 >= 2400) iFilledRectangle(900, 530, 30, 10);

				if (x4 >= 2500) iFilledRectangle(900, 540, 30, 10);

				if (x4 >= 2600) iFilledRectangle(900, 550, 30, 10);

				if (x4 >= 2700) iFilledRectangle(900, 560, 30, 10);

				if (x4 >= 2800) iFilledRectangle(900, 570, 30, 10);

				if (x4 >= 2900) iFilledRectangle(900, 580, 30, 10);

				if (x4 >= 3000) iFilledRectangle(900, 590, 30, 10);

				if (x4 >= 3100) iFilledRectangle(900, 600, 30, 10);

				if (x4 >= 3200) iFilledRectangle(900, 610, 30, 10);

				if (x4 >= 3300) iFilledRectangle(900, 620, 30, 10);

				if (x4 >= 3400) iFilledRectangle(900, 630, 30, 10);

				if (x4 >= 3500) iFilledRectangle(900, 640, 30, 10);

				//wining condition
				if (x4 >= 3500)
				{
					d = 4;
				}
			}

			//level - 3
			if (l3 == 1)
			{
				x4++;

				iSetColor(0, 0, 166);
				iText(850, 850, "Ending Point", GLUT_BITMAP_TIMES_ROMAN_24);
				iRectangle(900, 300, 30, 500);
				iText(850, 250, "Starting Point", GLUT_BITMAP_TIMES_ROMAN_24);


				if (x4 >= 100) iFilledRectangle(900, 300, 30, 10);

				if (x4 >= 200) iFilledRectangle(900, 310, 30, 10);

				if (x4 >= 300) iFilledRectangle(900, 320, 30, 10);

				if (x4 >= 400) iFilledRectangle(900, 330, 30, 10);

				if (x4 >= 500) iFilledRectangle(900, 340, 30, 10);

				if (x4 >= 600) iFilledRectangle(900, 350, 30, 10);

				if (x4 >= 700) iFilledRectangle(900, 360, 30, 10);

				if (x4 >= 800) iFilledRectangle(900, 370, 30, 10);

				if (x4 >= 900) iFilledRectangle(900, 380, 30, 10);

				if (x4 >= 1000) iFilledRectangle(900, 390, 30, 10);

				if (x4 >= 1100) iFilledRectangle(900, 400, 30, 10);

				if (x4 >= 1200) iFilledRectangle(900, 410, 30, 10);

				if (x4 >= 1300) iFilledRectangle(900, 420, 30, 10);

				if (x4 >= 1400) iFilledRectangle(900, 430, 30, 10);

				if (x4 >= 1500) iFilledRectangle(900, 440, 30, 10);

				if (x4 >= 1600) iFilledRectangle(900, 450, 30, 10);

				if (x4 >= 1700) iFilledRectangle(900, 460, 30, 10);

				if (x4 >= 1800) iFilledRectangle(900, 470, 30, 10);

				if (x4 >= 1900) iFilledRectangle(900, 480, 30, 10);

				if (x4 >= 2000) iFilledRectangle(900, 490, 30, 10);

				if (x4 >= 2100) iFilledRectangle(900, 500, 30, 10);

				if (x4 >= 2200) iFilledRectangle(900, 510, 30, 10);

				if (x4 >= 2300) iFilledRectangle(900, 520, 30, 10);

				if (x4 >= 2400) iFilledRectangle(900, 530, 30, 10);

				if (x4 >= 2500) iFilledRectangle(900, 540, 30, 10);

				if (x4 >= 2600) iFilledRectangle(900, 550, 30, 10);

				if (x4 >= 2700) iFilledRectangle(900, 560, 30, 10);

				if (x4 >= 2800) iFilledRectangle(900, 570, 30, 10);

				if (x4 >= 2900) iFilledRectangle(900, 580, 30, 10);

				if (x4 >= 3000) iFilledRectangle(900, 590, 30, 10);

				if (x4 >= 3100) iFilledRectangle(900, 600, 30, 10);

				if (x4 >= 3200) iFilledRectangle(900, 610, 30, 10);

				if (x4 >= 3300) iFilledRectangle(900, 620, 30, 10);

				if (x4 >= 3400) iFilledRectangle(900, 630, 30, 10);

				if (x4 >= 3500) iFilledRectangle(900, 640, 30, 10);

				if (x4 >= 3600) iFilledRectangle(900, 650, 30, 10);

				if (x4 >= 3700) iFilledRectangle(900, 660, 30, 10);

				if (x4 >= 3800) iFilledRectangle(900, 670, 30, 10);

				if (x4 >= 3900) iFilledRectangle(900, 680, 30, 10);

				if (x4 >= 4000) iFilledRectangle(900, 690, 30, 10);

				if (x4 >= 4100) iFilledRectangle(900, 700, 30, 10);

				if (x4 >= 4200) iFilledRectangle(900, 710, 30, 10);

				if (x4 >= 4300) iFilledRectangle(900, 720, 30, 10);

				if (x4 >= 4400) iFilledRectangle(900, 730, 30, 10);

				if (x4 >= 4500) iFilledRectangle(900, 740, 30, 10);

				if (x4 >= 4600) iFilledRectangle(900, 750, 30, 10);

				if (x4 >= 4700) iFilledRectangle(900, 760, 30, 10);

				if (x4 >= 4800) iFilledRectangle(900, 770, 30, 10);

				if (x4 >= 4900) iFilledRectangle(900, 780, 30, 10);

				if (x4 >= 5000) iFilledRectangle(900, 790, 30, 10);

				/*if (x4 >= 5100) iFilledRectangle(900, 800, 30, 10);

				if (x4 >= 5200) iFilledRectangle(900, 810, 30, 10);

				if (x4 >= 5300) iFilledRectangle(900, 820, 30, 10);

				if (x4 >= 5400) iFilledRectangle(900, 830, 30, 10);

				if (x4 >= 5500) iFilledRectangle(900, 840, 30, 10);

				if (x4 >= 5600) iFilledRectangle(900, 850, 30, 10);

				if (x4 >= 5700) iFilledRectangle(900, 860, 30, 10);

				if (x4 >= 5800) iFilledRectangle(900, 870, 30, 10);

				if (x4 >= 5900) iFilledRectangle(900, 880, 30, 10);

				if (x4 >= 6000) iFilledRectangle(900, 890, 30, 10);*/


				//wining condition
				if (x4 >= 5000)
				{
					d = 4;
				}
			}
			

	iSetColor(0, 0, 0);
	iFilledRectangle(70, 600, 50, 200);
	iSetColor(0, 255, 0);
	iFilledRectangle(75, 605, 40, 190);
	iSetColor(255, 0, 0);
	iText(70, 550, "F U E L ", GLUT_BITMAP_HELVETICA_18);
	iText(70, 950, "L I F E ", GLUT_BITMAP_HELVETICA_18);
	iSetColor(255, 255, 255);

	//For white color // fuel decrease
	if (fb1 == 1)
	{
		iFilledRectangle(75, 785, 40, 10);
	}
	if (fb2 == 1)
	{
		iFilledRectangle(75, 765, 40, 20);
	}
	if (fb3 == 1)
	{
		iFilledRectangle(75, 745, 40, 20);
	}
	if (fb4 == 1)
	{
		iFilledRectangle(75, 725, 40, 20);
	}
	if (fb5 == 1)
	{
		iFilledRectangle(75, 705, 40, 20);
	}
	if (fb6 == 1)
	{
		iFilledRectangle(75, 685, 40, 20);
	}
	if (fb7 == 1)
	{
		iFilledRectangle(75, 665, 40, 20);

	}
	if (fb8 == 1)
	{
		iFilledRectangle(75, 645, 40, 20);
	}
	if (fb9 == 1)
	{
		iFilledRectangle(75, 625, 40, 20);
	}
	if (fb10 == 1)
	{
		iFilledRectangle(75, 605, 40, 20);

		d = 6;
	}

	// for vanish heart
	iSetColor(128, 255, 255);
	iShowBMP2(i7, 900, "background//heart.bmp", 0);
	iShowBMP2(i6, 900, "background//heart.bmp", 0);
	iShowBMP2(i5, 900, "background//heart.bmp", 0);
	iShowBMP2(i4, 900, "background//heart.bmp", 0);
	iShowBMP2(i3, 900, "background//heart.bmp", 0);
	iShowBMP2(i2, 900, "background//heart.bmp", 0);
	iShowBMP2(i1, 900, "background//heart.bmp", 0);
	if (q == 2)
	{
		m1 = 1;
	}
	if (m1 == 1)
	{
		i1 = 5000;
	}
	if (q == 3)
	{
		m2 = 1;
	}
	if (m2 == 1)
	{
		i2 = 5000;
	}
	if (q == 4)
	{
		m3 = 1;
	}
	if (m3 == 1)
	{
		i3 = 5000;
	}
	if (q == 5)
	{
		m4 = 1;
	}
	if (m4 == 1)
	{
		i4 = 5000;
	}
	if (q == 6)
	{
		m5 = 1;
		n = 0;
	}
	if (m5 == 1)
	{
		i5 = 5000;
	}
	if (n == 1)
	{
		iShowBMP2(80, 900, "background//heart.bmp", 0);
	}
	if (q == 7)
	{
		m6 = 1;
	}
	if (m6 == 1)
	{
		i6 = 5000;
	}
	if (q == 8)
	{
		m7 = 1;
	}
	if (m7 == 1)
	{
		i7 = 5000;

		d = 5;
	}
	

	//jump condition
	if (jump == 1)
	{
		iShowBMP2(c1_x_axis, c1_y_axis, jump1[flyindex], 0);
		c1_y_axis+=10;
	}

	//barrier effect
		if (p == 2 && jump == 0 && o == 1)
		{
			z1++;
			z2++;
			z3++;
			z4++;

			if (z1 < 10)
			{
				iShowBMP2(c1_x_axis, c1_y_axis, "background//myCarr1.bmp", 0);
			}
			if (z1 >= 10 && z1<20)
			{
				iShowBMP2(c1_x_axis, c1_y_axis, "background//myCarb1.bmp", 0);
			}
			if (z1 >= 20 && z1<30)
			{
				iShowBMP2(c1_x_axis, c1_y_axis, "background//myCarg1.bmp", 0);
			}

			if (z1 == 30)
			{
				p = 1;
				c1_x_axis = 480;
				c1_y_axis = 150;

				if (v1 == 1)
				{
					c2_x_axis += 2000;
					v1 = 0;
				}
				if (v2 == 1)
				{
					c3_x_axis += 2000;
					v2 = 0;
				}
				if (v3 == 1) 
				{
					c4_x_axis += 2000;
					v3 = 0;
				}
				if (v4 == 1) 
				{
					c5_x_axis += 2000;
					v4 = 0;
				}
				if (v5 == 1)
				{
					c6_x_axis += 2000;
					v5 = 0;
				}
				if (v6 == 1) 
				{
					c7_x_axis += 2000;
					v6 = 0;
				}
				if (v7 == 1) 
				{
					ox += 2000;
					v7 = 0;
				}
				if (v8 == 1) 
				{
					obx += 2000;
					v8 = 0;
				}
				x1 = 0;
				z1 = 0;
				c4_x_axis = 400;
			}
		}
	}

	//for level complete
	if (d == 4)
	{
		iShowBMP(0, 0, "background//win.bmp");

		iSetColor(255, 0, 0);
		iText(350, 700, ar, GLUT_BITMAP_TIMES_ROMAN_24);
		iSetColor(255, 255, 255);
		iText(350, 200, "Press 'Home' to go home", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(400, 170, "Press 'End' to exit", GLUT_BITMAP_TIMES_ROMAN_24);
	}

	//for life finished 
	if (d == 5)
	{
		iShowBMP(0, 0, "BG//crash.bmp");

		iSetColor(255, 255, 255);
		iText(380, 900, ar, GLUT_BITMAP_TIMES_ROMAN_24);
		iText(350, 250, "Press 'Home' to go home", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(400, 220, "Press 'End' to exit", GLUT_BITMAP_TIMES_ROMAN_24);

		iSpecialKeyboard;
	}

	//for fuel finished
	if (d == 6)
	{
		iShowBMP(0, 0, "BG//oil-finished.bmp");

		//iSetColor(255, 0, 0);
		iText(380, 900, ar, GLUT_BITMAP_TIMES_ROMAN_24);
		iText(350, 250, "Press 'Home' to go home", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(400, 220, "Press 'End' to exit", GLUT_BITMAP_TIMES_ROMAN_24);

		iSpecialKeyboard;
	}

}


void iMouseMove(int mx, int my)
{
	
	//c3_x = mx; //mouse can move the object in x_axis
	//c3_y = my; //mouse can move the object in y_axis
}

/*
function iMouse() is called when the user presses/releases the mouse.
(mx, my) is the position where the mouse pointer is.
*/
void iMouse(int button, int state, int mx, int my)
{
	mxx = mx;
	myy = my;

	//printf("\n%d\t%d\n", mxx, myy);

	
	
		if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
		{
			// for play
			if ((mx >= 701 && mx <= 922) && (my <= 657 && my >= 603) && highscorepage == 0 && level == 0 && l1 == 0 && l3 == 0)
			{
				
				d=2;
				l2=1;
			}

			//for highscore
			if ((mx >= 628 && mx <= 962) && (my <= 408 && my >= 363) && l1 == 0 && level == 0 && l2 == 0 && l3 == 0)
			{
				highscorepage = 1;
			}
			if ((mx >= 447 && mx <= 534) && (my <= 525 && my >= 507) && l1 == 0 && level == 0 && l2 == 0 && l3 == 0)
			{
				highscorepage = 0;
			}

			// for level
			if ((mx >= 692 && mx <= 912) && (my <= 542 && my >= 472) && highscorepage == 0 && l2 == 0 && l1 == 0 && l3 == 0)
			{
				level = 1;
			}
			if ((mx >= 450 && mx <= 534) && (my <= 442 && my >= 427) && highscorepage == 0 && l2 == 0 && l1 == 0 && l3 == 0)
			{
				level = 0;
			}

				// for exit
				if ((mx >= 707 && mx <= 898) && (my <= 271 && my >= 213))
				{
					exit(0);
				}

				//beginer
				if ((mx >= 244 && mx <= 792) && (my <= 809 && my >= 766))
				{

					d = 2;
					l1 = 1;
				}
				//regular
				if ((mx >= 254 && mx <= 779) && (my <= 691 && my >= 648))
				{

					d = 2;
					l2 = 1;
				}
				//expert
				if ((mx >= 278 && mx <= 760) && (my <= 562 && my >= 515) && highscorepage == 0 && level == 1 && l1 == 0 && l2 == 0)
				{

					d = 2;
					l3 = 1;
				}
		}
	
	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here
	}
}


/*iPassiveMouseMove is called to detect and use
the mouse point without pressing any button */

void iPassiveMouseMove(int mx, int my)
{
	if ((mx >= 400 && mx <= 619) && (my <= 723 && my >= 642)){
		d=2;
	}        
	//else if (my == 2){}  
}

/*
function iKeyboard() is called whenever the user hits a key in keyboard.
key- holds the ASCII value of the key pressed.
*/

void iKeyboard(unsigned char key)
{
	if (key == 'w')
	{
		//up
		if (c1_y_axis <= 908 && p == 1)
		{
			c1_y_axis += fuel(1);
			fl += 1;
		}
	}
	
	if (key == 's')
	{
		//down
		down(1);

		if (c1_y_axis >= 92 && p == 1)
		{
			c1_y_axis -= fuel(1);
			fl += 1;
		}
	}

	if (key == 'a')
	{
		//left
		if (c1_x_axis >= 160 && p == 1)
		{
			c1_x_axis -= fuel(1);
			fl += 1;
		}
	}

	if (key == 'd')
	{
		//right
		if (c1_x_axis <= 787 && p == 1)
		{
			c1_x_axis += fuel(1);
			fl += 1;
		}
	}

	if (key == 'f' || key == ' ')
	{

		if (p == 1 && d == 2 && jumplimit < 50){
			jump = 1;
			jumplimit += 1;
		}

	}
}

/*
function iSpecialKeyboard() is called whenver user hits special keys like-
function keys, home, end, pg up, pg down, arraows etc. you have to use
appropriate constants to detect them. A list is:
GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
*/

void iSpecialKeyboard(unsigned char key)
{

	if (key == GLUT_KEY_END)
	{
		//end++;
		//if (end >= 100)
		 exit(0);
	}

	if (key == GLUT_KEY_HOME)
	{
		level = 0;
		highscorepage = 0;
		//c1 = 0;
		int i7 = 20;
		int i6 = 50;
		int i5 = 80;
		int i4 = 110;
		int i3 = 140;
		int i2 = 170;
		int i1 = 200, dx = 25, dy = 15;
		d = 1;
		
	}

	/*if (key == GLUT_KEY_F1)
	{
		if (o == 2)
		{
			p = 1;
			q = 1, m1 = 0, m2 = 0, m3 = 0, m4 = 0, m5 = 0, m6 = 0, m7 = 0;
			c1_x_axis = 480, c1_y_axis = 92, c2_x_axis = 480, c2_y_axis = 1092, hx_axis = 460, hy_axis = 5090, ox = 430, oy = 2500;
			c3_x_axis = 669, c3_y_axis = 1292, c4_x_axis = 362, c4_y_axis = 1592, c5_x_axis = 600, c5_y_axis = 1892;
			c6_x_axis = 292, c6_y_axis = 2292, c7_x_axis = 520, c7_y_axis = 2592;
			x4 = 0;
			o = 1;
		}
	}*/

	if (key == GLUT_KEY_UP)
	{
		//up
			
		if (c1_y_axis <= 908 && p == 1)
		{
			c1_y_axis += fuel(1);
			fl += 1;
		}
	}

	if (key == GLUT_KEY_DOWN)
	{
		//down
		down(1);
			
		if (c1_y_axis >= 92 && p == 1)
		{
			c1_y_axis -= fuel(1);
			fl += 1;
		}
	}
		
	if (key == GLUT_KEY_RIGHT)
	{
		//right
		if (c1_x_axis <= 787 && p == 1)
		{
			c1_x_axis += fuel(1);
			fl += 1;
		}
	}
	
	if (key == GLUT_KEY_LEFT)
	{
		//left
		if (c1_x_axis >= 160 && p == 1)
		{
			c1_x_axis -= fuel(1);
			fl += 1;	
		}
	}
		
	/*if (key == GLUT_KEY_F2)
	{
		if (c1 >= 10)
		{
			d = 2;
			if ((l3 != 1) && (l1 != 1))
			{
				l1 = 1;
			}
		}
	}

	if (key == GLUT_KEY_F3)
	{
		if (c1 >= 150)
		{
			d = 2;
			if ((l2 != 1) && (l1 != 1))
			{
				l1 = 1;
			}
		}
	}
	if (key == GLUT_KEY_F4)
	{
		if (c1 >= 150)
		{
			d = 2;
			if ((l2 != 1) && (l3 != 1))
			{
				l1 = 1;
			}
		}
	}*/

	/*if (key == GLUT_KEY_PAGE_UP)
	{
			
		if (p == 1 && d == 2 && jumplimit < 100)
		{
			jump = 1;
			jumplimit += 1;
		}
	}*/
}

void change()
{
	flyindex++;
	if (flyindex >= 5)
	{
		flyindex = 0;
		jump = 0;
	}
}

void change2()
{
	index++;
	if (index >= 8)
	{
		index = 0;
	}
}


void fuelchange()
{
	if (fuelshow == 1)
	{
		position_x5 += dx;
		position_y5 -= dy;

		if (position_x5 >= 787 || position_x5 <= 175)
		{
			dx *= (-1);
		}

		if (position_y5 >= 1000 || position_y5 <= 0)
		{
			dy *= (-1);
		}
	}
}

//main function
int main()
{
	
	iSetTimer(205, fuelchange);
	iSetTimer(505, change);
	iSetTimer(25, change2);

	srand((unsigned)time(NULL));
	int ra = rand();
	
	//music
	PlaySound("Music\\sound.wav", NULL, SND_LOOP | SND_ASYNC);

	iInitialize(HEIGHT, WIDTH, "High-Way Car Driving");

	return 0;
}