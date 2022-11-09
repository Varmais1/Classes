#include <iostream>
#include <cstring>
#include "music.h"

music::music():generalMedia() {
  strcpy(artist, " ");
  duration = 0;
  strcpy(publisher, " ");
}

music::music(char* newTitle, int newYear, char* theArtist, double newDuration, char* newPublisher):generalMedia(newTitle,newYear) {
  artist = theArtist;
  publisher = newPublisher;
  duration = newDuration;
}

char* music::getArtist() {
  return artist;
}

char* music::getPublisher() {
  return publisher;
}

double music::getDuration() {
  return duration;
}

void music::setArtist(char* newArtist) {
  memcpy(artist, newArtist, strlen(newArtist)+1);
}

void music::setPublisher(char* newPublisher) {
  memcpy(publisher, newPublisher, strlen(newPublisher)+1);
}

void music::setDuration(double newDuration) {
  duration = newDuration;
}
