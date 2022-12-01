/* Name: Ishaan Varma
   Date: 12/1/2022
   Purpose: Parent class, what the child classes inherit
 */
#ifndef GENERALMEDIA_H
#define GENERALMEDIA_H
#include <iostream>

using namespace std;

class generalMedia {
 public:
  //constructors
  generalMedia();
  generalMedia(char newTitle[150], int newYear);
  //getters and setters
  virtual char* getTitle();
  virtual int getYear();
  virtual void setTitle(char newTitle[150]);
  virtual void setYear(int newYear);
  virtual void print();
  //destructor
  virtual ~generalMedia();

 protected:
  //holds the title of the media
  char* title;
  //holds the year which the media was released
  int year;
};
#endif
