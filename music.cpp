#include <iostream>
#include <cstring>
#include "music.h"

music::music():generalMedia() {
  strcpy(artist, " ");
  duration = 0;
  strcpy(publisher, " ");
}

music::music(char newTitle[150], int newYear, char theArtist[150], double newDuration, char newPublisher[150]):generalMedia(newTitle,newYear) {
  artist = new char[150];
  strcpy(artist, theArtist);
  publisher = new char[150];
  strcpy(publisher, newPublisher);
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

void music::setArtist(char newArtist[150]) {
  strcpy(artist, newArtist);
}

void music::setPublisher(char newPublisher[150]) {
  strcpy(publisher,newPublisher);
}

void music::setDuration(double newDuration) {
  duration = newDuration;
}

void music::print() {
  cout << endl;
  cout << "Music: " << endl;
  cout << "Title: " << title << endl;
  cout << "Year created: " << year << endl;
  cout << "Duration: " << duration << " seconds." << endl;
  cout << "Publisher: " << publisher << endl;
  cout << endl;
}

music::~music() {
  delete[] publisher;
  delete[] artist;
}
