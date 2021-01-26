/*
 * hello.c
 * This is a simple, introductory OpenGL program.
 */
#include <GL/glut.h>
#include <Math.h>
#define  PI 3.1415926535898

void vaso(void){
	glColor3f (1.0, 1.0, 1.0);
   	glBegin(GL_LINE_STRIP);
    	//  glColor3f (1.0, 0.0, 0.0);
    	glVertex3f (0.05, 0.92, 0.0);
    	glVertex3f (0.1, 0.75, 0.0);
    	glVertex3f (0.2, 0.75, 0.0);
		glVertex3f (0.25, 0.92, 0.0);
		glVertex3f (0.25, 0.98, 0.0);
      	glVertex3f (0.05, 0.98, 0.0);
      	glVertex3f (0.05, 0.92, 0.0);
      	glVertex3f (0.25, 0.92, 0.0);	
   glEnd();
}
void pia(void){
	//externo da pia
   	glBegin(GL_LINE_LOOP);
      	glVertex3f (0.0, 0.7, 0.0);
      	glVertex3f (0.3, 0.7, 0.0);
      	glVertex3f (0.3, 0.45, 0.0);
      	glVertex3f (0.0, 0.45, 0.0);
   	glEnd();
   	//interno da pia
	glBegin(GL_LINE_LOOP);
      	glVertex3f (0.05, 0.65, 0.0);
      	glVertex3f (0.25, 0.65, 0.0);
      	glVertex3f (0.25, 0.5, 0.0);
      	glVertex3f (0.05, 0.5, 0.0);
   	glEnd();
	//torneira
	glBegin(GL_LINE_LOOP);
      	glVertex3f (0.1, 0.69, 0.0);
      	glVertex3f (0.2, 0.69, 0.0);
      	glVertex3f (0.2, 0.67, 0.0);
      	glVertex3f (0.1, 0.67, 0.0);
   	glEnd();
   	//ralo
   	float angle;
	glBegin(GL_LINE_LOOP);
      	for(int i = 0; i < 100; i++){
      		angle = 2*PI*i/100;
			glVertex2f(0.15 + (cos(angle) * 0.015), 0.6 + (sin(angle) * 0.015));
		}
   	glEnd();			
}		
void armario(void){
	glBegin(GL_LINE_LOOP);
      	glVertex3f (0.05, 0.4, 0.0);
      	glVertex3f (0.25, 0.4, 0.0);
      	glVertex3f (0.25, 0.2, 0.0);
      	glVertex3f (0.05, 0.2, 0.0);
   	glEnd();	
}
void espelho(void){
	glBegin(GL_LINE_LOOP);
      	glVertex3f (-0.2, 0.15, 0.0);
      	glVertex3f (0.5, 0.15, 0.0);
      	glVertex3f (0.5, 0.1, 0.0);
      	glVertex3f (-0.2, 0.1, 0.0);
   	glEnd();
}
void chuveiro(void){
	//externo
	glBegin(GL_LINE_LOOP);
      	glVertex3f (-0.15, 0.05, 0.0);
      	glVertex3f (0.45, 0.05, 0.0);
      	glVertex3f (0.45, -0.25, 0.0);
      	glVertex3f (-0.15, -0.25, 0.0);
   	glEnd();
   	//interno
	glBegin(GL_LINE_LOOP);
      	glVertex3f (-0.125, 0.025, 0.0);
      	glVertex3f (0.425, 0.025, 0.0);
      	glVertex3f (0.425, -0.225, 0.0);
      	glVertex3f (-0.125, -0.225, 0.0);
   	glEnd();
   	//linhas
   	glBegin(GL_LINES);
      	glVertex3f (-0.125, 0.025, 0.0);
      	glVertex3f (0.075, -0.075, 0.0);
      	glVertex3f (0.075, -0.1, 0.0);
      	glVertex3f (-0.125, -0.225, 0.0);
      	glVertex3f (0.425, 0.025, 0.0);
      	glVertex3f (0.225, -0.075, 0.0);
      	glVertex3f (0.225, -0.1, 0.0);
      	glVertex3f (0.425, -0.225, 0.0);
   	glEnd();
   	//ralo
   	float angle;
	glBegin(GL_LINE_LOOP);
      	for(int i = 0; i < 100; i++){
      		angle = 2*PI*i/100;
			glVertex2f(0.15 + (cos(angle) * 0.015), -0.0875 + (sin(angle) * 0.015));
		}
   	glEnd();	
}
void banheira(void){
	//externo
	glBegin(GL_LINE_LOOP);
      	glVertex3f (-0.15, -0.3, 0.0);
      	glVertex3f (0.45, -0.3, 0.0);
      	glVertex3f (0.45, -0.6, 0.0);
      	glVertex3f (-0.15, -0.6, 0.0);
   	glEnd();
   	//interno
	glBegin(GL_LINE_LOOP);
      	glVertex3f (-0.1, -0.35, 0.0);
      	glVertex3f (0.4, -0.35, 0.0);
      	glVertex3f (0.4, -0.55, 0.0);
      	glVertex3f (-0.1, -0.55, 0.0);
   	glEnd();
   	//ralo
   	float angle;
	glBegin(GL_LINE_LOOP);
      	for(int i = 0; i < 100; i++){
      		angle = 2*PI*i/100;
			glVertex2f(0.35 + (cos(angle) * 0.015), -0.45 + (sin(angle) * 0.015));
		}
   	glEnd();
}


void display(void)
{
/* clear all pixels  */
   glClear (GL_COLOR_BUFFER_BIT);

/* draw white polygon (rectangle) with corners at
 * (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)  
 */
   	vaso();
   	pia();
   	armario();
   	espelho();
	chuveiro();
	banheira();
/* don't wait!  
 * start processing buffered OpenGL routines 
 */
   glFlush ();
}

void init (void) 
{
/* select clearing color 	*/
   glClearColor (0.0, 0.0, 0.0, 0.0);

/* initialize viewing values  */
   glMatrixMode(GL_PROJECTION);
   glLoadIdentity();
   glOrtho(0.0, 1.0, 1.0, 1.0, -1.0, 1.0);
}

/* 
 * Declare initial window size, position, and display mode

 * (single buffer and RGBA).  Open window with "hello"
 * in its title bar.  Call initialization routines.
 * Register callback function to display graphics.
 * Enter main loop and process events.
 */
int main(int argc, char** argv)
{
   glutInit(&argc, argv);
   glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
   glutInitWindowSize (450, 450); 
   glutInitWindowPosition (100, 100);
   glutCreateWindow ("REO1");
   init ();
   glutDisplayFunc(display); 
   glutMainLoop();
   return 0;   /* ANSI C requires main to return int. */
}
