/* Name: Ishaan Varma
   Date: 12/1/2022
   Purpose: The class for videogames, inherits generalMedia.
 */
#ifndef VIDEOGAMES_H
#define VIDEOGAMES_H
#include <iostream>
#include "generalMedia.h"

class videogames : public generalMedia {
 public:
  //constructors
  videogames();
  videogames(char newTitle[150], int newYear, char newPublisher[150], double newRating);
  //getters and setters
  virtual char* getPublisher();
  virtual double getRating();
  virtual void setPublisher(char newPublisher[150]);
  virtual void setRating(double newRating);
  //Prints out the title, year, publisher, and rating
  virtual void print();
  //destructor
  virtual ~videogames();

 protected:
  //holds the publisher of the videogame
  char* publisher;
  //holds the rating the videogame has earned
  double rating;
};
#endif
