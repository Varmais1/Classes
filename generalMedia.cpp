/* Name: Ishaan Varma
   Date: 12/1/2022
   Purpose: Where the generalMedia class's functions are implemented
 */
#include <iostream>
#include "generalMedia.h"
#include <cstring>


using namespace std;

//constructors, getters, setters, and destructor
generalMedia::generalMedia() {
  strcpy(title, " ");
  year = 0;
}

generalMedia::generalMedia(char newTitle[150], int newYear) {
  title = new char[150];
  strcpy(title,newTitle);
  year = newYear;
}

char* generalMedia::getTitle() {
  return title;
}


int generalMedia::getYear() {
  return year;
}

void generalMedia::setTitle(char newTitle[150]) {
  strcpy(title,newTitle);
}

void generalMedia::setYear(int newYear) {
  year = newYear;
}

void generalMedia::print() {

}

generalMedia::~generalMedia() {
  delete[] title;
}
