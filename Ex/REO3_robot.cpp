#include <GL/glut.h>
#include <stdlib.h>

static int shoulder = 0, elbow = 0, whriest = 0, finger1 = 0, finger2 = 0, nail1 = 0, nail2 = 0;

void init(void) 
{
   glClearColor (0.0, 0.0, 0.0, 0.0);
   glShadeModel (GL_FLAT);
}

void display(void)
{
	//corpo
   glClear (GL_COLOR_BUFFER_BIT);
   glPushMatrix();
   glTranslatef (-2.0, 0.0, 0.0);
   glScalef (2.0, 4.0, 2.0);
   glutWireCube (1.0);
   glPopMatrix();
   //cabeça
   glPushMatrix();
   glTranslatef (-2.0, 2.5, 0.0);
   glScalef (1.0, 1.0, 1.0);
   glutWireCube (1.0);
   glPopMatrix();
	//ombro
   glPushMatrix(); 
   glTranslatef (-1.0, 0.0, 0.0);
   glRotatef ((GLfloat) shoulder, 0.0, 0.0, 1.0);
   glTranslatef (1.0, 0.0, 0.0);
   glPushMatrix();
   glScalef (2.0, 0.4, 1.0);
   glutWireCube (1.0);
   glPopMatrix();
	//cotovelo
   glTranslatef (1.0, 0.0, 0.0);
   glRotatef ((GLfloat) elbow, 0.0, 0.0, 1.0);
   glTranslatef (1.0, 0.0, 0.0);
   glPushMatrix();
   glScalef (2.0, 0.4, 1.0);
   glutWireCube (1.0);
   glPopMatrix();
	//pulso
	
   glTranslatef (1.0, 0.0, 0.0);
   glRotatef ((GLfloat) whriest, 0.0, 0.0, 1.0);
   glTranslatef (0.5, 0.0, 0.0);
   glPushMatrix();
   glPushMatrix();
   glPushMatrix();
   glScalef (1.0, 0.4, 1.0);
   glutWireCube (1.0);
   glPopMatrix();
   //dedo1  
   glTranslatef (0.45, 0.0, 0.0);
   glRotatef ((GLfloat) finger1, 0.0, 0.0, 1.0);
   glTranslatef (0.45, 0.0, -0.3);
   glPushMatrix();
   glPushMatrix();
   glScalef (1.5, 0.4, 0.5);
   glutWireCube (0.5);
   glPopMatrix();
   glPopMatrix();
   //dedo1.2  
   glTranslatef (0.375, 0.0, 0.0);
   glRotatef ((GLfloat) nail1, 0.0, 0.0, 1.0);
   glTranslatef (0.375, 0.0, 0.0);
   glPushMatrix();
   glScalef (1.5, 0.4, 0.5);
   glutWireCube (0.5);
   glPopMatrix();
   glPopMatrix();
   //dedo2
   glTranslatef (0.45, 0.0, 0.0);
   glRotatef ((GLfloat) finger2, 0.0, 0.0, 1.0);
   glTranslatef (0.45, 0.0, 0.5);
   glPushMatrix();
   glPushMatrix();
   glScalef (1.5, 0.4, 0.5);
   glutWireCube (0.5);
   glPopMatrix();
   glPopMatrix();
    //dedo2.2  
   glTranslatef (0.375, 0.0, 0.0);
   glRotatef ((GLfloat) nail2, 0.0, 0.0, 1.0);
   glTranslatef (0.375, 0.0, 0.0);
   glPushMatrix();
   glScalef (1.5, 0.4, 0.5);
   glutWireCube (0.5);
   glPopMatrix();
   glPopMatrix();
   
   glPopMatrix();
   glutSwapBuffers();
   
}

void reshape (int w, int h)
{
   glViewport (0, 0, (GLsizei) w, (GLsizei) h); 
   glMatrixMode (GL_PROJECTION);
   glLoadIdentity ();
   gluPerspective(100.0, (GLfloat) w/(GLfloat) h, 1.0, 20.0);
   glMatrixMode(GL_MODELVIEW);
   glLoadIdentity();
   glTranslatef (0.0, 0.0, -5.0);
}

void keyboard (unsigned char key, int x, int y)
{
   switch (key) {
      case 's':
         shoulder = (shoulder + 5) % 360;
         glutPostRedisplay();
         break;
      case 'S':
         shoulder = (shoulder - 5) % 360;
         glutPostRedisplay();
         break;
      case 'e':
         elbow = (elbow + 5) % 360;
         glutPostRedisplay();
         break;
      case 'E':
         elbow = (elbow - 5) % 360;
         glutPostRedisplay();
         break;
      case 'w':
         whriest = (whriest + 5) % 360;
         glutPostRedisplay();
         break;
      case 'W':
         whriest = (whriest - 5) % 360;
         glutPostRedisplay();
         break;      
	  case 'f':
         finger1 = (finger1 + 5) % 360;
         glutPostRedisplay();
         break;
      case 'F':
         finger2 = (finger2 + 5) % 360;
         glutPostRedisplay();
         break;
      case 'n':
         nail1 = (nail1 + 5) % 360;
         glutPostRedisplay();
         break;
      case 'N':
         nail2 = (nail2 + 5) % 360;
         glutPostRedisplay();
         break;
      case 27:
         exit(0);
         break;
      default:
         break;
   }
}

int main(int argc, char** argv)
{
   glutInit(&argc, argv);
   glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB);
   glutInitWindowSize (500, 500); 
   glutInitWindowPosition (100, 100);
   glutCreateWindow (argv[0]);
   init ();
   glutDisplayFunc(display); 
   glutReshapeFunc(reshape);
   glutKeyboardFunc(keyboard);
   glutMainLoop();
   return 0;
}
