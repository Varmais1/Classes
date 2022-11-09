#include <iostream>
#include "generalMedia.h"
#include <cstring>


using namespace std;

generalMedia::generalMedia() {
  strcpy(title, " ");
  year = 0;
}

generalMedia::generalMedia(char* newTitle, int newYear) {
  title = newTitle;
  year = newYear;
}

char* generalMedia::getTitle() {
  return title;
}

int generalMedia::getYear() {
  return year;
}

void generalMedia::setTitle(char* newTitle) {
  memcpy(title,newTitle, strlen(newTitle)+1);
}

void generalMedia::setYear(int newYear) {
  year = newYear;
}
