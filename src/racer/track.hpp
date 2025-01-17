// FILE: "track.hpp"

#include "global.hpp"

#ifndef TRACK_H
#define TRACK_H

using namespace std;

class Track
{
public:
  vector<SDL_Texture *> textures;
  int tileSize;
  vector<Point> aiMap;
  vector<Point> turboMap;
  vector<vector<Entity>> map;
  vector<vector<int>> tiles;
  Point position;
  Track();
  Track(Point position);
  void draw();
  void update();
  Point getTileIndex(Point position);
  void printAIMap();
};

#endif
