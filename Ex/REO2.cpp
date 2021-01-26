#include <windows.h> 
#include <gl\gl.h> 
#include <gl\glaux.h>
#include <GL/glut.h>
 
  
GLfloat xf, yf, win;
GLint view_w, view_h;
GLint horzangle = -45,vertangle = 30; 

  
void RenderScene(void) {

  glLoadIdentity(); 
  glTranslatef(0.0f,0.0f,-3.0f); 
  glRotatef(vertangle,1.0f,0.0f,0.0f); 
  glRotatef(horzangle,0.0f,1.0f,0.0f);  
  glClearColor(0.0f,0.0f,0.0f,0.0f); 
  glClear( GL_COLOR_BUFFER_BIT ); 
  
  glBegin( GL_LINES ); 
    glColor3f(0.0f,0.0f,1.0f); 
    glVertex3f(0.0f,0.0f,0.0f); 
    glVertex3f(0.7f,0.0f,0.0f); 
    glColor3f(1.0f,0.0f,0.0f); 
    glVertex3f(0.0f,0.0f,0.0f); 
    glVertex3f(0.0f,0.5f,0.0f); 
    glColor3f(0.0f,1.0f,0.0f); 
    glVertex3f(0.0f,0.0f,0.0f); 
    glVertex3f(0.0f,0.0f,0.7f); 
  glEnd(); 
  
  glBegin( GL_POLYGON ); 
    glColor3f(1.0f,0.0f,0.0f); 
    glVertex3f(0.0f,0.0f,0.0f); 
    glVertex3f(0.0f,0.2f,0.0f); 
    glVertex3f(0.2f,0.3f,0.0f); 
    glVertex3f(0.4f,0.2f,0.0f); 
    glVertex3f(0.4f,0.0f,0.0f); 
  glEnd(); 
  
  glBegin( GL_QUADS ); 
    glColor3f(0.0f,0.0f,1.0f); 
    glVertex3f(0.0f,0.0f,0.0f); 
    glVertex3f(0.0f,0.0f,0.4f); 
    glVertex3f(0.0f,0.2f,0.4f); 
    glVertex3f(0.0f,0.2f,0.0f); 
  glEnd(); 
  
  glBegin( GL_QUAD_STRIP ); 
    glColor3f(0.0f,1.0f,0.0f); 
    glVertex3f(0.0f,0.2f,0.0f); 
    glVertex3f(0.0f,0.2f,0.4f); 
    glVertex3f(0.2f,0.3f,0.0f); 
    glVertex3f(0.2f,0.3f,0.4f); 
    glVertex3f(0.4f,0.2f,0.0f); 
    glVertex3f(0.4f,0.2f,0.4f); 
  glEnd(); 
  
  //glColor3f(1.0f,1.0f,1.0f); 
  glBegin( GL_QUADS ); 
	glColor3f(0.0f,0.0f,1.0f); 
    glVertex3f(0.4f,0.0f,0.0f); 
    glVertex3f(0.4f,0.0f,0.4f); 
    glVertex3f(0.4f,0.2f,0.4f); 
    glVertex3f(0.4f,0.2f,0.0f); 
  glEnd(); 
  
 //lado da janela
  glBegin( GL_POLYGON );
  	glColor3f(1.0f,1.0f,1.0f); 
    glVertex3f(0.0f,0.0f,0.4f);
	glVertex3f(0.05f,0.0f,0.4f); 
	glVertex3f(0.05f,0.15f,0.4f); 
	glVertex3f(0.0f,0.15f,0.4f); 
  glEnd(); 
  
  //embaixo da janela
  glBegin( GL_POLYGON );
	glColor3f(1.0f,1.0f,1.0f); 
	glVertex3f(0.05f,0.0f,0.4f); 
	glVertex3f(0.05f,0.15f,0.4f); 
	glVertex3f(0.15f,0.15f,0.4f); 
	glVertex3f(0.15f,0.0f,0.4f); 
  glEnd();
   
  //entre porta e janela
  glBegin( GL_POLYGON );
  	glColor3f(1.0f,1.0f,1.0f); 
	glVertex3f(0.2f,0.0f,0.4f); 
	glVertex3f(0.2f,0.15f,0.4f); 
	glVertex3f(0.15f,0.15f,0.4f); 
	glVertex3f(0.15f,0.0f,0.4f); 
  glEnd();
  
  //ao lado da porta
  glBegin( GL_POLYGON );
  	glColor3f(1.0f,1.0f,1.0f); 
	glVertex3f(0.3f,0.0f,0.4f);
	glVertex3f(0.3f,0.15f,0.4f);
	glVertex3f(0.4f,0.15f,0.4f);
	glVertex3f(0.4f,0.0f,0.4f);
  glEnd();
  
  //encima da porta e janela
  glBegin( GL_POLYGON ); 
    glColor3f(1.0f,1.0f,1.0f); 
    glVertex3f(0.0f,0.15f,0.4f); 
    glVertex3f(0.0f,0.2f,0.4f); 
    glVertex3f(0.2f,0.3f,0.4f); 
    glVertex3f(0.4f,0.2f,0.4f);
	glVertex3f(0.4f,0.15f,0.4f); 
  glEnd();
  
  //porta
  glBegin( GL_POLYGON ); 
    glColor3f(1.0f,1.0f,0.0f); 
    //ponto inicial coordenada(0.2, 0, 0.4)
    glVertex3f(0.217f,0.0f,0.45f); 
    //ponto inicial coordenada(0.2, 0.2, 0.4)
    glVertex3f(0.217f,0.15f,0.45f);  // x,z iguais a referencia, y+tam
    glVertex3f(0.3f,0.15f,0.4f); // z igual a referencia
    glVertex3f(0.3f,0.0f,0.4f); // z igual a referencia
  glEnd();
  
  //janela
  glBegin( GL_QUADS ); 
    glColor3f(1.0f,0.0f,1.0f); 
    glVertex3f(0.15f,0.05f,0.4f); 
    glVertex3f(0.15f,0.15f,0.4f); 
    glVertex3f(0.05f,0.15f,0.4f); 
    glVertex3f(0.05f,0.05f,0.4f); 
  glEnd();
   
  
  glFlush(); 
} 
  
void ChangeSize(GLsizei width,GLsizei height) { 
  glViewport(0,0,width,height); 
  glMatrixMode( GL_PROJECTION ); 
  glLoadIdentity(); 
  gluPerspective(30.0,width/height,1.0,10.0); 
  glMatrixMode( GL_MODELVIEW ); 
  glLoadIdentity(); 
  glTranslatef(0.0f,0.0f,-3.0f); 
  glRotatef(30.0f,1.0f,0.0f,0.0f); 
  glRotatef(-45,0.0f,1.0f,0.0f); 
} 

void GerenciaMouse(int button,int state, int x, int y)
{
	switch (button){
		case GLUT_LEFT_BUTTON:
			if(state == GLUT_UP){
				horzangle += 15;
			}
			break;
	
		case GLUT_RIGHT_BUTTON:
			if(state == GLUT_UP){
				horzangle -= 15;
			}
			break;
			
		case GLUT_MIDDLE_BUTTON:
			if(state == GLUT_UP){
				vertangle -= 15;
			}
			break;
	} 
    RenderScene();
}
 
void GerenciaTeclado(unsigned char key, int x, int y)
{//int modifiers = glutGetModifiers();

   switch (key) {
       case 'A':
               horzangle += 15;
               break;
        case 'D':
               horzangle -= 15;
               break;
        case 'S':
                vertangle -= 15;
               break;       
      case 'W':
         vertangle += 15;
         break;
         
      default:
         break;
   }
   RenderScene();
} 
 
  
int main(int argc, char* argv[]) { 
  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); 
  glutInitWindowPosition(100,100);
  glutInitWindowSize (500, 500); 
  glutCreateWindow("REO 2A");
  glutDisplayFunc(RenderScene); 
  glutReshapeFunc(ChangeSize); 
  glutKeyboardFunc(GerenciaTeclado);
  glutMouseFunc(GerenciaMouse); 
  glutMainLoop();
   
} 
