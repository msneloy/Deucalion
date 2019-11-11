#include <windows.h>
#include <GL/glut.h>
void initGL()
    {
        glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Black and opaque
    }
void display()
    {
        glClear(GL_COLOR_BUFFER_BIT);
        glBegin(GL_QUADS);

            glColor3f(1.0f, 0.0f, 0.0f);
            glVertex2f(-1, 0);
            glVertex2f(0,0);
            glVertex2f(.5, .5);
            glVertex2f(-.5, .5);

            glColor3f(0.0f, 1.0f, 0.0f);
            glVertex2f(-1,-1);
            glVertex2f(0,-1);
            glVertex2f(0,0);
            glVertex2f(-1,0);

            glColor3f(0.0f, 0.0f, 1.0f);
            glVertex2f(0,-1);
            glVertex2f(.5,-.5);
            glVertex2f(.5,.5);
            glVertex2f(0,0);

        glEnd();
        glFlush();
    }
int main(int argc, char** argv)
    {
        glutInit(&argc, argv);
        glutCreateWindow("2017002106");
        glutInitWindowSize(1000, 1000);
        glutInitWindowPosition(100, 100);
        glutDisplayFunc(display);
        initGL();
        glutMainLoop();
        return 0;
    }
