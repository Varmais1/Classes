#ifndef GENERALMEDIA_H
#define GENERALMEDIA_H
#include <iostream>

using namespace std;

class generalMedia {
 public:
  generalMedia();
  generalMedia(char newTitle[150], int newYear);
  virtual char* getTitle();
  virtual int getYear();
  virtual void setTitle(char newTitle[150]);
  virtual void setYear(int newYear);
  virtual void print();
  virtual ~generalMedia();

 protected:
  char* title;
  int year;
};
#endif
