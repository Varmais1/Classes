#ifndef VIDEOGAMES_H
#define VIDEOGAMES_H
#include <iostream>
#include "generalMedia.h"


class videogames : public generalMedia {
 public:
  videogames();
  videogames(char* newTitle, int newYear, char* newPublisher, double newRating);
  virtual char* getPublisher();
  virtual double getRating();
  virtual void setPublisher(char* newPublisher);
  virtual void setRating(double newRating);

 protected:
  char* publisher;
  double rating;
};
#endif
