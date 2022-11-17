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

void videogames::print() {
  cout << endl;
  cout << "Videogame: " << endl;
  cout << "Title: " << title << endl;
  cout << "Year: " << year << endl;
  cout << "Publisher: " << publisher << endl;
  cout << "Rating: " << rating << " stars." << endl;
  cout << endl;
}


videogames::~videogames() {
  delete[] publisher;
}
