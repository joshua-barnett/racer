// FILE: "hud.hpp"

#include "global.hpp"

#ifndef HUD_H
#define HUD_H

using namespace std;

class HUD
{
private:
  vector<Entity> entities;
  TTF_Font *font;
  SDL_Color fontColor;
  int raceWon;
  float start;
  float timer;
  int seconds;

public:
  HUD();
  void draw();
};

#endif
