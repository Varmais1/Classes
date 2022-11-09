#ifndef GENERALMEDIA_H
#define GENERALMEDIA_H
#include <iostream>

using namespace std;

class generalMedia {
 public:
  generalMedia();
  generalMedia(char* newTitle, int newYear);
  char* getTitle();
  int getYear();
  void setTitle(char* newTitle);
  void setYear(int newYear);

 protected:
  char* title;
  int year;
};
#endif
