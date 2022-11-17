#include <iostream>
#include <cstring>
#include "movies.h"

movies::movies():generalMedia() {
  strcpy(director, " ");
  rating = 0;
  duration = 0;
}

movies::movies(char newTitle[150], int newYear, char newDirector[150], double newDuration, double newRating):generalMedia(newTitle,newYear) {
  director = new char[150];
  strcpy(director,newDirector);
  duration = newDuration;
  rating = newRating;
}

char* movies::getDirector() {
  return director;
}

double movies::getDuration() {
  return duration;
}

double movies::getRating() {
  return rating;
}

void movies::setDirector(char newDirector[150]) {
  strcpy(director, newDirector);
}

void movies::setDuration(double newDuration) {
  duration = newDuration;
}

void movies::setRating(double newRating) {
  rating = newRating;
}

void movies::print() {
  cout << endl;
  cout << "Movie: " << endl;
  cout << "Title: " << title << endl;
  cout << "Year released: " << year << endl;
  cout << "Director: " << director << endl;
  cout << "Duration: " << duration << " minutes." << endl;
  cout << "Rating: " << rating << " stars." << endl;
  cout << endl;
}


movies::~movies() {
  delete[] director;
}
