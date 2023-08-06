// FILE: "global.h"

#ifndef GLOBAL_H
#define GLOBAL_H

// DEBUG MACROS:
#define COLLISION 1
#define RESPONSE 1
#define AI 1

// SYSTEM MACROS:
#define _USE_MATH_DEFINES

// SYSTEM HEADERS:
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <math.h>
#include <time.h>
#include <float.h>
#include <unordered_map>
#include <limits>
#include <SDL.h>
#include <SDL_image.h>
#include <SDL_ttf.h>

// GAME HEADERS:
#include "point.h" // Multi-purpose Textures: http://www.mptextures.com/
#include "glrgb.h"
#include "entity.h"
#include "menu.h"
#include "hud.h"
#include "car.h"
#include "player.h"
#include "enemy.h"
#include "track.h"

// ENGINE VARIABLES:
extern const float S_WIDTH;
extern const float S_HEIGHT;
extern unordered_map<SDL_Keycode, bool> KEYS;

// GAME VARIABLES:
extern Track *track;
extern Player *player;
extern Enemy *enemy;
extern vector<Car *> cars;
extern int lapLimit;
extern bool raceStarted;
extern bool resetGame;
extern bool gameRun;
extern bool pause;
extern SDL_Window *window;
extern SDL_Renderer *renderer;
extern bool debug;

// GLOBAL FUNCTIONS:
SDL_Texture *loadTexture(std::string path);
TTF_Font *loadFont(std::string path, int ptSize);
int roundUp(int numToRound, int multiple);
vector<Point> getBox(float width, float height, Point position = Point(0, 0));
vector<Point> getPoly(int sides, float radius, Point position = Point(0, 0));

#endif