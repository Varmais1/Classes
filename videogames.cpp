#include <iostream>
#include "videogames.h"
#include <cstring>

using namespace std;


videogames::videogames():generalMedia() {
  publisher = " ";
  rating = 0;
}

videogames::videogames(char* newTitle, int newYear, char* newPublisher, double newRating):generalMedia(newTitle, newYear) {
  publisher = newPublisher;
  rating = newRating;
}

videogames::getPublisher() {
  return publisher;
}

videogames::getRating() {
  return rating;
}

videogames::setPublisher(char* newPublisher) {
  publisher = newPublisher;
}

videogames::setRating(double newRating) {
  rating = newRating;
}
