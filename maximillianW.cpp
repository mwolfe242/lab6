#include "fonts.h"
#include <GL/glx.h>

void showName(int x,int y){
	Rect r;
	r.bot = y;
	r.left = x;
	r.center = x;
	unsigned int c;
	c=0x0000ff00;
	ggprint8b(&r, 16, c, "Maximillian Wolfe");
}

void drawBox(int x, int y){
	static float angle = 0.0;
	glColor3ub(255,100,10);
	glPushMatrix();
	glTranslatef(x,y,0);
	glRotatef(angle,0.0f,0.0f,1.0f);
	glTranslatef(-50,-50,0);
	angle = angle+2.5;
	glBegin(GL_QUADS);
		glVertex2i(  0,  0);
		glVertex2i(  0,100);
		glVertex2i(100,100);
		glVertex2i(100,  0);
	glEnd();
	showName(50,42);
	glPopMatrix();
}
	
