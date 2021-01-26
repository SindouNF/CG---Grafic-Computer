#include <GL/glut.h>
#include <stdlib.h>

static int door = 0, elev = 0, structere = 0, w = 0;

void init(void) 
{
	//Matrizes dos valores
   GLfloat mat_specular[] = { 1.0, 1.0, 1.0, 1.0 };
   GLfloat non[] = { 0.0, 0.0, 0.0, 1.0 };
   GLfloat mat_shininess[] = { 20.0 };
   GLfloat luzDifusa[] = {0.7,0.7,0.7,1.0};
   
   GLfloat light_position0[] = { 0.0, 10.0, 100.0, 0.0 };
   GLfloat light_position1[] = { 00.0, -10.0, 100.0, 0.0 };

   glClearColor (0.0, 0.0, 0.0, 0.0);
   glShadeModel (GL_SMOOTH);
   
   //Materiais
   glMaterialfv(GL_FRONT_AND_BACK, GL_SPECULAR, non);
   glMaterialfv(GL_FRONT_AND_BACK, GL_SHININESS, mat_shininess);
   glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, luzDifusa);
   
   //Luz 0
   glLightfv(GL_LIGHT0, GL_DIFFUSE, luzDifusa );
   glLightfv(GL_LIGHT0, GL_SPECULAR, mat_specular );
   glLightfv(GL_LIGHT0, GL_POSITION, light_position0);
	//Luz 1
   glLightfv(GL_LIGHT1, GL_POSITION, light_position1);
   glLightfv(GL_LIGHT1, GL_DIFFUSE, luzDifusa );
   glLightfv(GL_LIGHT1, GL_SPECULAR, mat_specular );
     
	 //Enables 
   glEnable(GL_COLOR_MATERIAL);
   glEnable(GL_LIGHTING);
   
   glEnable(GL_LIGHT0);
   glEnable(GL_LIGHT1);
   
   glEnable(GL_DEPTH_TEST);
   
   
   glColorMaterial(GL_FRONT_AND_BACK, GL_DIFFUSE);
}

void display(void)
{
	
   glClear (GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
   
   glPushMatrix();
   //Estrutura
   
   //COMANDOS DE VISÃO COMPLETA
   glRotatef ((GLfloat) structere, 0.0, 1.0, 0.0);
   glRotatef ((GLfloat) w, 1.0, 0.0, 0.0);
   
   //linkagem da estrutura com todas os demais objetos 
   glPushMatrix();
   glPushMatrix();
   glPushMatrix();
   glPushMatrix();
   glPushMatrix(); 
   glPushMatrix();
   glPushMatrix();
   glPushMatrix();
   glPushMatrix();
   //Estrutura do prédio
   glPushMatrix();   
   glColor3f(0.416, 0.353, 0.804);
   glScalef (4.0, 6.0, 4.0);
   glutWireCube (1.0);
   glPopMatrix();
   
   	//Porta1
   glTranslatef (1.0, 0.0, 0.0);
   glPushMatrix();
   glColor3f(1.000, 0.843, 0.000); 
   glTranslatef (-1.0, -2.5, 2.0);
   glRotatef ((GLfloat) door, 0.0, 1.0, 0.0);
   glScalef (0.1, 0.9, 1.0);
   glutSolidCube (1.0);
   glPopMatrix();
   glPopMatrix();
   
   	//Porta2
   glTranslatef (-1.0, 0.0, 0.0);
   glPushMatrix();
   glColor3f(1.000, 0.843, 0.000); 
   glTranslatef (1.0, -2.5, 2.0);
   glRotatef ((GLfloat) door, 0.0, 1.0, 0.0);
   glRotatef (90.0, 0.0, 1.0, 0.0);
   glScalef (0.1, 0.9, 1.0);
   glutSolidCube (1.0);
   glPopMatrix();
   glPopMatrix();

	//Elevador
   glTranslatef (0.0, (GLfloat) elev, 0.0);
   glPushMatrix();
   glColor3f(0.294, 0.000, 0.510);
   glTranslatef (0.0, -2.5, -1.5);
   glScalef (0.75, 1.0, 1.0);
   glutSolidCube (1.0);
   glPopMatrix();
   glPopMatrix();
   
   	//solo
	glTranslatef (0.0, -3.0, 0.0);
   glPushMatrix();
   glColor3f(0.545, 0.271, 0.075); 
   glScalef (4.0, 0.1, 4.0);
   glutSolidCube (1.0);
   glPopMatrix();
   glPopMatrix();
   	//1º andar	
	glTranslatef (0.0, -2.0, 0.0);
   glPushMatrix();
   glColor3f(0.753, 0.753, 0.753); 
   glScalef (4.0, 0.1, 4.0);
   glutSolidCube (1.0);
   glPopMatrix();
   glPopMatrix();
	//2º andar
	glTranslatef (0.0, -1.0, 0.0);
   glPushMatrix();
   glColor3f(0.753, 0.753, 0.753);  
   glScalef (4.0, 0.1, 4.0);
   glutSolidCube (1.0);
   glPopMatrix();
   glPopMatrix();
   //3º andar
   glPushMatrix();
   glColor3f(0.753, 0.753, 0.753);  
   glScalef (4.0, 0.1, 4.0);
   glutSolidCube (1.0);
   glPopMatrix();
   glPopMatrix();
   //4º andar
   glTranslatef (0.0, 1.0, 0.0);
   glPushMatrix();
   glColor3f(0.753, 0.753, 0.753);  
   glScalef (4.0, 0.1, 4.0);
   glutSolidCube (1.0);
   glPopMatrix();
   glPopMatrix();
    //5º andar
   glTranslatef (0.0, 2.0, 0.0);
   glPushMatrix();
   glColor3f(0.753, 0.753, 0.753);  
   glScalef (4.0, 0.1, 4.0);
   glutSolidCube (1.0);
   glPopMatrix();
   glPopMatrix();
   //teto
   	glTranslatef (0.0, 3.0, 0.0);
   glPushMatrix();
   glColor3f(0.184, 0.310, 0.310);  
   glScalef (4.0, 0.1, 4.0);
   glutSolidCube (1.0);
   glPopMatrix();
   glPopMatrix();
   
	//fim da matrix   
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
      case 'd':
         door = (door + 5) % 360;
         glutPostRedisplay();
         break;
      case 'D':
         door = (door - 5) % 360;
         glutPostRedisplay();
         break;
      case 'e':
      	if((elev +1)<6)
         elev = (elev + 1) % 6;
         glutPostRedisplay();
         break;
     	
      case 'E':
      	if((elev +1)>1)
         elev = (elev - 1) % 6;
         glutPostRedisplay();
         break;
     
	  case 's':
         structere = (structere + 5) % 360;
         glutPostRedisplay();
         break;
      case 'S':
         structere = (structere - 5) % 360;
         glutPostRedisplay();
         break;
         
    case 'w':
         w = (w + 5) % 360;
         glutPostRedisplay();
         break;
    case 'W':
         w = (w - 5) % 360;
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
   glutInitWindowSize (800, 800); 
   glutInitWindowPosition (200, 200);
   glutCreateWindow (argv[0]);
   init ();
   glutDisplayFunc(display); 
   glutReshapeFunc(reshape);
   glutKeyboardFunc(keyboard);
   glutMainLoop();
   return 0;
}
