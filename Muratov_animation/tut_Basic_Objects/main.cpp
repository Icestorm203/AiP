#include "Scena.h"

clock_t curTime, startTime;
std::vector <Figure> fOrest;


int main(int argc, char* argv[]) {
	initForest();
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(600, 600);
	glutCreateWindow("Lesson - Basic Forms");
	glutDisplayFunc(renderScene);
	glutTimerFunc(1000 / 60, animateScene, 1);
	startTime = clock();
	glutMainLoop();
	return 0;
}


void renderScene(void) {

	glClear(GL_COLOR_BUFFER_BIT |
		GL_DEPTH_BUFFER_BIT);

	curTime = clock() - startTime;
	
	scena();
	
	

	glutSwapBuffers();

}

