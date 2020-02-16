#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <windows.h>
#include <GL/glut.h>
#endif
#include <stdlib.h>
void init (void)
{
glClearColor (0.0, 0.0, 0.0, 0.0);
glMatrixMode (GL_PROJECTION);
gluOrtho2D(0.0, 100.0, 0.0, 100.0);
}
void myRectangle(void)
{
glClear(GL_COLOR_BUFFER_BIT);
glBegin(GL_POLYGON);
glColor3f(0.0, 0.0, 1.0);
glPolygonMode(GL_FRONT_AND_BACK,GL_FILL);
glVertex2i(10, 10);
glVertex2i(60, 10);
glVertex2i(60,50);
glVertex2i(10,50);
glEnd();
glPolygonMode(GL_FRONT_AND_BACK,GL_LINE);
glBegin(GL_POLYGON);
glColor3f(100.0, 0.0, 0.0);
glVertex2i(10, 10);
glVertex2i(60, 10);
glVertex2i(60,50);
glVertex2i(10,50);
glEnd();
glFlush();
}
int main (int argc, char** argv)
{
glutInit (&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowPosition (0, 0);
glutInitWindowSize (400, 300);
glutCreateWindow ("2017002106");
init( );
glutDisplayFunc (myRectangle);
glutMainLoop ( );
return 0;
}
