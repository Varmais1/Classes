#include <iostream>
#include "generalMedia.h"
#include <cstring>


using namespace std;

generalMedia::generalMedia() {
  title = " ";
  year = 0;
}

generalMedia::generalMedia(char* newTitle, int newYear) {
  title = newTitle;
  year = newYear;
}

generalMedia::getTitle() {
  return title;
}

generalMedia::getYear() {
  return year;
}

generalMedia::setTitle(char* newTitle) {
  title = newTitle;
}

generalMedia::setYear(int newYear) {
  year = newYear;
}
