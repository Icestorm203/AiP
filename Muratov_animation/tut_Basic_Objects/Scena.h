#pragma once
#include "GL/freeglut.h"
#define _USE_MATH_DEFINES
#include <cmath>
#include <ctime>
#include <vector>

extern clock_t curTime, startTime;

struct Figure {
	float x, y;
	float r, g, b;

};

extern std::vector <Figure> fOrest;


void renderScene(void);
void animateScene(int value);
void drawTreug(float r, float g, float b);
void drawKrug(Figure f);
void cloud(Figure krug);
void clouds(time_t curTime);
void tree(Figure f);
void forest();
void SE(Figure f);
void ca();
void car(Figure krug);
void road();
void car1();
void scena();
void initForest();
