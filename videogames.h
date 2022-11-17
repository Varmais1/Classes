#ifndef VIDEOGAMES_H
#define VIDEOGAMES_H
#include <iostream>
#include "generalMedia.h"


class videogames : public generalMedia {
 public:
  videogames();
  videogames(char newTitle[150], int newYear, char newPublisher[150], double newRating);
  virtual char* getPublisher();
  virtual double getRating();
  virtual void setPublisher(char newPublisher[150]);
  virtual void setRating(double newRating);
  virtual void print();
  virtual ~videogames();

 protected:
  char* publisher;
  double rating;
};
#endif
