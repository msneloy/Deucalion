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
void myPentagram(void)
{
glClear(GL_COLOR_BUFFER_BIT);
glColor3f(0.0, 0.0, 1.0);
glBegin(GL_LINES);
glVertex2i(5, 25);
glVertex2i(35, 25);
glVertex2i(20,35);
glVertex2i(10,5);
glVertex2i(20,35);
glVertex2i(30,5);
glVertex2i(5,25);
glVertex2i(30,5);
glVertex2i(35,25);
glVertex2i(10,5);
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
glutDisplayFunc (myPentagram);
glutMainLoop ( );
return 0;
}
