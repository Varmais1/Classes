#ifndef MUSIC_H
#define MUSIC_H
#include <iostream>
#include <cstring>
#include "generalMedia.h"

class music: public generalMedia {
 public:
  music();
  music(char newTitle[150], int newYear, char theArtist[150], double newDuration, char newPublisher[150]);
  virtual char* getArtist();
  virtual double getDuration();
  virtual char* getPublisher();
  virtual void setArtist(char newArtist[150]);
  virtual void setDuration(double newDuration);
  virtual void setPublisher(char newPublisher[150]);
  virtual ~music();
  
 protected:
  char* artist;
  double duration;
  char* publisher;

};
#endif
