#include <iostream>
#include <OpenGL/gl.h>
#include <OpenGL/glu.h>
#include <GLUT/glut.h>

using namespace std;

int main(int argc, char **argv) {
    glutInit(argc, argv);
    glutInitDisplayMode(GLUT_RGBA);
    glutInitWindowSize(512, 512);
    glutInitContextVersion(3, 2);
    glutInitContextProfile(GLUT_3_2_CORE_PROFILE);
    glutCreateWindow(argv[0]);

    if(glewInit()) {
        cerr << "无法初始化GLEW,退出"<<endl;
        exit(EXIT_FAILURE);
    }
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}