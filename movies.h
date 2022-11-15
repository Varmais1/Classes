#ifndef MOVIES_H
#define MOVIES_H
#include <iostream>
#include "generalMedia.h"

class movies : public generalMedia {
 public:
  movies();
  movies(char newTitle[150], int newYear, char newDirector[150], double newDuration, double newRating);
  virtual char* getDirector();
  virtual double getDuration();
  virtual double getRating();
  virtual void setDirector(char newDirector[150]);
  virtual void setDuration(double newDuration);
  virtual void setRating(double newRating);
  virtual ~movies();

 protected:
  char* director;
  double duration;
  double rating;
};
#endif
