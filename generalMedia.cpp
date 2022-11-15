#include <iostream>
#include "generalMedia.h"
#include <cstring>


using namespace std;

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

generalMedia::~generalMedia() {
  delete title;
}
