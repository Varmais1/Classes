#ifndef MUSIC_H
#define MUSIC_H
#include <iostream>
#include <cstring>
#include "generalMedia.h"

class music: public generalMedia {
 public:
  music();
  music(char* newTitle, int newYear, char* theArtist, double newDuration, char* newPublisher);
  char* getArtist();
  virtual double getDuration();
  virtual char* getPublisher();
  void setArtist(char* newArtist);
  virtual void setDuration(double newDuration);
  virtual void setPublisher(char* newPublisher);

  
 protected:
  char* artist;
  double duration;
  char* publisher;

};
#endif
