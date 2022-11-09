#include <iostream>
#include "videogames.h"
#include <cstring>

using namespace std;


videogames::videogames():generalMedia() {
  strcpy(publisher, " ");
  rating = 0;
}

videogames::videogames(char* newTitle, int newYear, char* newPublisher, double newRating):generalMedia(newTitle, newYear) {
  publisher = newPublisher;
  rating = newRating;
}

char* videogames::getPublisher() {
  return publisher;
}

double videogames::getRating() {
  return rating;
}

void videogames::setPublisher(char* newPublisher) {
  memcpy(publisher, newPublisher, strlen(newPublisher)+1);
}

void videogames::setRating(double newRating) {
  rating = newRating;
}
