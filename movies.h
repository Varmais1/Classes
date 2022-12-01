/* Name: Ishaan Varma
   Date: 12/1/2022
   Purpose: Where the movies class is defined
 */

#ifndef MOVIES_H
#define MOVIES_H
#include <iostream>
#include "generalMedia.h"


class movies : public generalMedia {
 public:
  //constructors
  movies();
  movies(char newTitle[150], int newYear, char newDirector[150], double newDuration, double newRating);
  //getters and setters
  virtual char* getDirector();
  virtual double getDuration();
  virtual double getRating();
  virtual void setDirector(char newDirector[150]);
  virtual void setDuration(double newDuration);
  virtual void setRating(double newRating);
  //prints out the title, year, director, duration, and rating
  virtual void print();
  //destructor
  virtual ~movies();

 protected:
  //holds the director of the movie
  char* director;
  //hold sthe duration of the movie
  double duration;
  //holds the rating of the movie
  double rating;
};
#endif
