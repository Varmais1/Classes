#include <iostream>
#include "videogames.h"
#include <cstring>

using namespace std;


videogames::videogames():generalMedia() {
  strcpy(publisher, " ");
  rating = 0;
}

videogames::videogames(char newTitle[150], int newYear, char newPublisher[150], double newRating):generalMedia(newTitle, newYear) {
  publisher = new char[150];
  strcpy(publisher, newPublisher);
  rating = newRating;
}

char* videogames::getPublisher() {
  return publisher;
}

double videogames::getRating() {
  return rating;
}

void videogames::setPublisher(char newPublisher[150]) {
  strcpy(publisher, newPublisher);
}

void videogames::setRating(double newRating) {
  rating = newRating;
}

videogames::~videogames() {
  generalMedia::~generalMedia();
  delete publisher;
}
