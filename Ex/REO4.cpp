#include <GL/glut.h>
#include <stdlib.h>

static int shoulder = 0, elbow = 0, whriest = 0, finger1 = 0, finger2 = 0, nail1 = 0, nail2 = 0;
GLfloat diffuseMaterial[4] = { 0.5, 0.5, 0.5, 1.0 };

void init(void) 
{

   GLfloat mat_specular[] = { 1.0, 1.0, 1.0, 1.0 };
   GLfloat light_position[] = { 10.0, 10.0, 10.0, 0.0 };

   glClearColor (0.0, 0.0, 0.0, 0.0);
   glShadeModel (GL_FLAT);
   glEnable(GL_DEPTH_TEST);
   glMaterialfv(GL_FRONT, GL_DIFFUSE, diffuseMaterial);
   glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
   glMaterialf(GL_FRONT, GL_SHININESS, 25.0);
   glLightfv(GL_LIGHT0, GL_POSITION, light_position);
   glEnable(GL_LIGHTING);
   glEnable(GL_LIGHT0);

   glColorMaterial(GL_FRONT_AND_BACK, GL_DIFFUSE);
   glEnable(GL_COLOR_MATERIAL);
}

void defineIluminacao(){
		
   GLfloat luzAmbiente[] = {0.0f, 0.0f, 0.0f, 1.0f};
   GLfloat mat_specular[] = { 1.0, 1.0, 1.0, 1.0 };
   GLfloat mat_shininess[] = { 50.0 };
   GLfloat light_position[] = { 1.0, 1.0, 1.0, 0.0 };
   GLfloat mat_difusa[] = {1.0,1.0,1.0,1.0};
   //GLfloat luzAmbiente[] = {0.2f, 1.0f, 0.0f, 1.0f};
   GLfloat mat_specular2[] = { 1.0, 0.0, 0.0, 0.0 };
   //GLfloat mat_shininess[] = { 50.0 };
   GLfloat light_position2[] = { 1.0, 0.0, 1.0, 0.0 };
   GLfloat mat_difusa2[] = {1.0,0.0,0.0,1.0};

	glLightModelfv(GL_LIGHT_MODEL_AMBIENT, luzAmbiente);

   //glMaterialfv(GL_FRONT_AND_BACK, GL_SPECULAR, mat_specular);
   //glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);
  	glLightfv(GL_LIGHT0, GL_AMBIENT, luzAmbiente);
	glLightfv(GL_LIGHT0, GL_DIFFUSE, mat_difusa);
	glLightfv(GL_LIGHT0, GL_SPECULAR, mat_specular);
	glLightfv(GL_LIGHT0, GL_POSITION, light_position);

   
   // Brilho do material
	float especularidade[] = {1.0f, 1.0f, 1.0f, 1.0f};
	int especMaterial = 60;
	
	// Define a reflectância do material 
	glMaterialfv(GL_FRONT, GL_SPECULAR, especularidade);
	
	// Define a concentração do brilho
	glMateriali(GL_FRONT, GL_SHININESS, especMaterial);
   
} 

void display(void)
{
	//corpo
	glClear (GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);   
	glPushMatrix();
	glColor3f(1.0, 1.0, 1.0);
   glTranslatef (-2.0, 0.0, 0.0);
   glScalef (2.0, 4.0, 2.0);
    glutSolidCube (1.0);
   glPopMatrix();
   //cabeça
   glPushMatrix();
   glColor3f(0.0, 0.0, 1.0);
   glTranslatef (-2.0, 2.5, 0.0);
   glScalef (1.0, 1.0, 1.0);
    glutSolidCube (1.0);
   glPopMatrix();
	//ombro
   glPushMatrix();
   glColor3f(1.0, 1.0, 1.0); 
   glTranslatef (-1.0, 0.0, 0.0);
   glRotatef ((GLfloat) shoulder, 0.0, 0.0, 1.0);
   glTranslatef (1.0, 0.0, 0.0);
   glPushMatrix();
   glScalef (2.0, 0.4, 1.0);
    glutSolidCube (1.0);
   glPopMatrix();
	//cotovelo
   glTranslatef (1.0, 0.0, 0.0);
   glRotatef ((GLfloat) elbow, 0.0, 0.0, 1.0);
   glTranslatef (1.0, 0.0, 0.0);
   glPushMatrix();
   glColor3f(1.0, 1.0, 1.0);
   glScalef (2.0, 0.4, 1.0);
    glutSolidCube (1.0);
   glPopMatrix();
	//pulso
	
   glTranslatef (1.0, 0.0, 0.0);
   glRotatef ((GLfloat) whriest, 0.0, 0.0, 1.0);
   glTranslatef (0.5, 0.0, 0.0);
   glPushMatrix();
   glPushMatrix();
   glPushMatrix();
   glColor3f(1.0, 1.0, 1.0);
   glScalef (1.0, 0.4, 1.0);
    glutSolidCube (1.0);
   glPopMatrix();
   //dedo1
   /*
	
   glMaterialfv(GL_FRONT_AND_BACK, GL_SPECULAR, mat_COR);
	*/
	//GLfloat mat_COR[] = {1.0,0.0,1.0,0.0}; 
//	glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, mat_COR);
	glEnable(GL_COLOR_MATERIAL);
   glTranslatef (0.45, 0.0, 0.0);
   glRotatef ((GLfloat) finger1, 0.0, 0.0, 1.0);
   glTranslatef (0.45, 0.0, -0.3);
   glPushMatrix();
   glPushMatrix();
   glColor3f(1.0, 1.0, 1.0);
   glutSolidCube (0.5);
   glPopMatrix();
   glPopMatrix();
   //dedo1.2  
   glTranslatef (0.375, 0.0, 0.0);
   glRotatef ((GLfloat) nail1, 0.0, 0.0, 1.0);
   glTranslatef (0.375, 0.0, 0.0);
   glPushMatrix();
   glColor3f(1.0, 1.0, 1.0);
   glScalef (1.5, 0.4, 0.5);
   glutSolidCube (0.5);
   glPopMatrix();
   glPopMatrix();
   //dedo2
   glTranslatef (0.45, 0.0, 0.0);
   glRotatef ((GLfloat) finger2, 0.0, 0.0, 1.0);
   glTranslatef (0.45, 0.0, 0.5);
   glPushMatrix();
   glPushMatrix();
   glColor3f(1.0, 1.0, 1.0);
   glScalef (1.5, 0.4, 0.5);
   glutSolidCube (0.5);
   glPopMatrix();
   glPopMatrix();
    //dedo2.2  
   glTranslatef (0.375, 0.0, 0.0);
   glRotatef ((GLfloat) nail2, 0.0, 0.0, 1.0);
   glTranslatef (0.375, 0.0, 0.0);
   glPushMatrix();
   glColor3f(1.0, 1.0, 1.0);
   glScalef (1.5, 0.4, 0.5);
   glutSolidCube (0.5);
   glPopMatrix();
   glPopMatrix();
   
   glPopMatrix();
   glutSwapBuffers();
   glFlush();
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
