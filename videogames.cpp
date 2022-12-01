/* Name: Ishaan Varma
   Date: 12/1/2022
   Purpose: Where the functions for the videogame class is implemented.
 */
#include <iostream>
#include "videogames.h"
#include <cstring>

using namespace std;

//constructors
videogames::videogames():generalMedia() {
  strcpy(publisher, " ");
  rating = 0;
}

videogames::videogames(char newTitle[150], int newYear, char newPublisher[150], double newRating):generalMedia(newTitle, newYear) {
  publisher = new char[150];
  strcpy(publisher, newPublisher);
  rating = newRating;
}

//getters and setters
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

//prints out the media is a videogame, title, year, publisher, and rating
void videogames::print() {
  cout << endl;
  cout << "Videogame: " << endl;
  cout << "Title: " << title << endl;
  cout << "Year: " << year << endl;
  cout << "Publisher: " << publisher << endl;
  cout << "Rating: " << rating << " stars." << endl;
  cout << endl;
}

//destructor
videogames::~videogames() {
  delete[] publisher;
}
