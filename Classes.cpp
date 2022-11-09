#include <iostream>
#include <cstring>
#include <vector>
#include "generalMedia.h"
#include "videogames.h"





using namespace std;

int main() {
  char* publisher;
  char* title;
  strcpy(title, "game");
  strcpy(publisher, "Nintendo");
  videogames a = videogames(title, 2005, publisher, 4.90);
  
  return 0;
}
