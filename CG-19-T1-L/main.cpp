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
void myLine()
{
glClear (GL_COLOR_BUFFER_BIT);
glColor3f (0.0, 0.0, 1.0);
glLineWidth(10.0f);
glBegin(GL_LINES);
glVertex2f(5.0f, 50.0f);
glVertex2f(50.0f, 5.0f);
glEnd();
glFlush ( );
}
int main (int argc, char** argv)
{
glutInit (&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowPosition (0, 0);
glutInitWindowSize (400, 300);
glutCreateWindow ("2017002106");
init( );
glutDisplayFunc (myLine);
glutMainLoop ( );
return 0;
}
