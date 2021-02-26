#include "Scena.h"



void drawTreug(float r, float g, float b) {

	glBegin(GL_TRIANGLES);

	glColor3f(r, g, b);

	glVertex2f(-0.5, -0.5);

	glVertex2f(0.0, 0.5);

	glVertex2f(0.5, -0.5);

	glEnd();


}

void drawKrug(Figure f) {
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(f.r, f.g, f.b);
	for (float i = 0; i < 2 * M_PI; i += M_PI / 16) {

		glVertex2f(cos(i), sin(i));
	}
	glEnd();
}

void cloud(Figure krug) {

	glPushMatrix();
	glScalef(.1, .1, 1);
	drawKrug(krug);
	glScalef(1.2, 1.2, 1);
	glTranslatef(0.75, 0.25, 0);
	drawKrug(krug);
	glScalef(.8, .8, 1);
	glTranslatef(1.25, -.3, 0);
	drawKrug(krug);
	glPopMatrix();
}

void clouds(time_t curTime) {
	glScalef(0.5, 0.5, 1);
	glTranslatef(0, 1.2, 0);
	Figure krug;
	krug.r = .75;
	krug.g = .85;
	krug.b = .9;

	float pos = -curTime * 0.001;

	for (int i = 0; i < 100; i++) {
		glPushMatrix();
		glTranslatef(pos + 1.5 * i, 0, 0);
		cloud(krug);
		glTranslatef(.5, .2, 0);
		cloud(krug);
		glTranslatef(.5, .1, 0);
		cloud(krug);
		glTranslatef(.2, -.5, 0);
		cloud(krug);
		cloud(krug);
		glTranslatef(.5, .2, 0);
		cloud(krug);
		glTranslatef(.5, .1, 0);
		cloud(krug);
		glTranslatef(.2, -.5, 0);
		cloud(krug);
		glPopMatrix();
	}
}

void tree(Figure f) {
	glPushMatrix();
	glTranslatef(f.x, f.y, 0);
	glScalef(.4, .4, 1);
	drawTreug(f.r, f.g + 0.6, f.b);
	glTranslatef(0, .5, 0);
	drawTreug(f.r + 0.1, f.g + 0.7, f.b + 0.1);
	glTranslatef(0, .5, 0);
	drawTreug(f.r + 0.3, f.g + 0.9, f.b + 0.3);

	glBegin(GL_QUADS);

	glColor3f(.5, .3, 0.1);

	glVertex2f(-.05, -1.4);

	glVertex2f(-.05, -1.8);

	glVertex2f(.05, -1.8);

	glVertex2f(.05, -1.4);


	glEnd();

	glPopMatrix();
}

void forest() {
	glPushMatrix();
	glScalef(.5, .5, 1);
	for (int i = 0; i < fOrest.size(); i++) {
		tree(fOrest[i]);
	}
	glPopMatrix();
}

void SE(Figure f) {
	glBegin(GL_QUADS);

	glPushMatrix();
	curTime = clock();
	float phi = curTime * 0.0005, x = sin(phi), y = cos(phi), del = curTime * 0.0001;
	if (y > 0.2)
		f.r = 0.0, f.g = 0.6, f.b = 1.0;
	else if (y<0.2 & y>-0.2 & x > 0)
		f.r = 1.0, f.g = 0.0, f.b = 0.999;
	else if (y < -0.2)
		f.r = 0.1, f.g = 0.0, f.b = 0.3;
	else if (y<0.2 & y>-0.2 & x < 0)
	{
		f.r = 1.0, f.g = 0.7, f.b = 0.0;
	}

	glBegin(GL_QUADS);
	glColor3f(f.r, f.g, f.b);
	glVertex2f(1.0, -.2);
	glVertex2f(1.0, 1.0);
	glVertex2f(-1.0, 1.0);
	glVertex2f(-1.0, -.2);
	glEnd();   //sky
	
	
	glPushMatrix();
	glTranslatef(x, y, .0);
	glScalef(0.1, 0.1, 1.0);
	glBegin(GL_TRIANGLE_FAN);
	glPushMatrix();
	glColor3f(1.0, 0.6, 0.3);
	for (float i = 0; i < 2 * M_PI; i += M_PI / 18)
		glVertex2f(cos(i), sin(i));
	glPopMatrix();
	glEnd();
	glPopMatrix(); //sun

	glPushMatrix();
	glTranslatef(-x, -y, .0);
	glScalef(0.1, 0.1, 1.0);
	glBegin(GL_TRIANGLE_FAN);
	glPushMatrix();
	glColor3f(1.0, 1, 1);
	for (float i = 0; i < 2 * M_PI; i += M_PI / 18)
		glVertex2f(cos(i), sin(i));
	glPopMatrix();
	glEnd();
	glPopMatrix();  //moon

	 


	
	glBegin(GL_QUADS);
	glColor3f(.7, .3, 0.1);
	glVertex2f(-1, 0.1);
	glVertex2f(1, 0.1);
	glVertex2f(1, -2);
	glVertex2f(-1, -2); //земля

	glEnd();
}

void ca() {

	glBegin(GL_QUADS);

	glColor3f(1, 0, 0);
	glVertex2f(.3, -.6);
	glVertex2f(.4, -.5);
	glVertex2f(.7, -.5);
	glVertex2f(.8, -.6); //крыша машины

	glColor3f(1, 0, 0);
	glVertex2f(.3, -.6);
	glVertex2f(.05, -.65);
	glVertex2f(.05, -.7);
	glVertex2f(.3, -.7);
	glVertex2f(.3, -.6);
	glVertex2f(.3, -.7);
	glVertex2f(.8, -.7);
	glVertex2f(.8, -.6); //кузов

	glColor3f(1, 1, 1);
	glVertex2f(.32, -.6);
	glVertex2f(.41, -.51);
	glVertex2f(.52, -.51);
	glVertex2f(.52, -.6);

	glVertex2f(.55, -.6);
	glVertex2f(.55, -.51);
	glVertex2f(.67, -.51);
	glVertex2f(.72, -.6); //стёкла


	glVertex2f(.05, -.65);
	glVertex2f(.05, -.67);
	glVertex2f(.07, -.67);
	glVertex2f(.09, -.64); //фара

	glColor3f(0, 0, 0);
	glVertex2f(.465, -.62);
	glVertex2f(.465, -.63);
	glVertex2f(.5, -.63);
	glVertex2f(.5, -.62);

	glVertex2f(.665, -.62);
	glVertex2f(.665, -.63);
	glVertex2f(.7, -.63);
	glVertex2f(.7, -.62); //ручки дверей 


	glEnd();


}

void car(Figure krug) {
	glPushMatrix();
	glTranslatef(.3, -.1, 0);
	glScalef(0.9, 0.9, 1);

	ca();

	glTranslatef(.2, -.7, 0);
	glScalef(.05, .05, 1);
	drawKrug(krug);

	glTranslatef(9.5, 0, 0);
	drawKrug(krug);
	glPopMatrix();

}

void road() {
	glPushMatrix();
	glBegin(GL_QUADS);

	glColor3f(0, 0, 0);
	glVertex2f(-1, -0.2);
	glVertex2f(-1, -0.8);
	glVertex2f(1, -.8);
	glVertex2f(1, -.2);

	glColor3f(1, 1, 1);
	glVertex2f(-1, -0.5);
	glVertex2f(-1, -.525);
	glVertex2f(1, -.525);
	glVertex2f(1, -.5);

	glEnd();
	glPopMatrix();
}

void car1() {
	glPushMatrix();
	Figure krug;
	krug.r = 1;

	glRotatef(180, 0, 0, 1);
	glScalef(1, -1, 1);
	glTranslatef(0, 0.3, 0);
	car(krug);


	glPopMatrix();
}

void scena() {
	glPushMatrix();
	Figure f;
	f.r = 0;
	SE(f);
	road();


	float pos1 = curTime * 0.001;


	for (int j = 0; j < 100; j++) {
		glPushMatrix();
		glTranslatef(pos1 - 1.5 * j, 0, 0);
		car1();
		
		glPopMatrix();
	}


	Figure krug;
	krug.r = 1;
	float pos = -curTime * 0.001;
	for (int i = 0; i < 100; i++) {
		glPushMatrix();
		glTranslatef(pos - 1.5 * -i, 0, 0);
		car(krug);
		
		glPopMatrix();
	}

	clouds(curTime);

	
	forest();


	glPopMatrix();
}

void animateScene(int value) {

	glutPostRedisplay();

	glutTimerFunc(1000 / 60, animateScene, 1);
}

void initForest() {
	//    srand(10);
	srand(clock());
	Figure f;
	for (int i = 0; i < 50; i++) {
		f.x = .1 * (rand() % 100) - 4.0;
		f.y = 0.1 * (rand() % 10) - 2.85;
		f.r = 0.01 * (rand() % 10) - .1;
		f.g = 0.1 * (rand() % 10) - .3;
		fOrest.push_back(f);
	}
}
