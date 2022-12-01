/* Name: Ishaan Varma
   Date: 12/1/2022
   Purpose: Class where music media is implemented. Inherits generalMedia.
 */
#ifndef MUSIC_H
#define MUSIC_H
#include <iostream>
#include <cstring>
#include "generalMedia.h"


class music: public generalMedia {
 public:
  //constructors
  music();
  music(char newTitle[150], int newYear, char theArtist[150], double newDuration, char newPublisher[150]);
  //getters and setters
  virtual char* getArtist();
  virtual double getDuration();
  virtual char* getPublisher();
  virtual void setArtist(char newArtist[150]);
  virtual void setDuration(double newDuration);
  virtual void setPublisher(char newPublisher[150]);
  //prints out the Title, Year, Artist, Duration, and Publisher
  virtual void print();
  //destructor
  virtual ~music();
  
 protected:
  //holds the artist who made the song
  char* artist;
  //holds the duration of the song
  double duration;
  //holds the publisher of the song
  char* publisher;

};
#endif
