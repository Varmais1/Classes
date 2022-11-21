#include <iostream>
#include <cstring>
#include <vector>
#include "videogames.h"
#include "music.h"
#include "movies.h"


using namespace std;

void lowercase(char sentence[]);


int main() {
  char* publisher;
  char* title;
  char* artist;
  char* director;
  int year;
  char type[20];
  double duration;
  double rating;
  vector<generalMedia*> media;
  bool run = true;
  char command[10] = {'d','e','f','a','u','l','t'};
  while(run == true) {
    cout << "Type add if you wish to add a form of media, search if you wish to find a work, and quit if you wish to quit." << endl;
    lowercase(command);
    cin >> command;
    cout << endl;
    if(strcmp(command, "add") == 0) {
      cout << "What type of media would you like to add?" << endl;
      cin >> type;
      lowercase(type);
      if(strcmp(type, "videogames") == 0 || strcmp(type, "videogame")) {
	cout << "What is the title of this videogame?" << endl;
	cin.get(title, 150);
	cin.get();
	cout << "What was the year that this videogame was released? (please type in a whole number)" << endl;
	cin >> year;
	cout << "Who was the publisher of this videogame?" << endl;
	cin.get(publisher, 150);
	cin.get();
	cout << "What is the rating of this videogame? (please type in a real number)" << endl;
	videogames* games = new videogames(title,year,publisher,rating);
	media.push_back((generalMedia*)games);
      }
      else if(strcmp(type, "music") == 0) {
	cout << "What is the title of this piece of music?" << endl;
	cin.get(title, 150);
	cin.get();
	cout << "Who was the artist who made this piece of music?" << endl;
	cin.get(artist, 150);
	cin.get();
	cout << "Which year was this song released? (please type in a whole number)" << endl;
	cin >> year;
	cout << "What is the duration of this song in seconds? (please type in a real number)" << endl;
	cin >> duration;
	cout << "Who is the publisher?" << endl;
	cin.get(publisher, 150);
	cin.get();
	music* work = new music(title, year, artist, duration, publisher);
	media.push_back((generalMedia*)work);
      }
      else if(strcmp(type, "movies") == 0) {
	cout << "What is the title of this movie?" << endl;
	cin.get(title, 150);
	cin.get();
	cout << "Who is the director of this movie?" << endl;
	cin.get(director, 150);
	cin.get();
	cout << "Which year was this movie made?" << endl;
	cin >> year;
	cout << "What is the duration of this movie in minutes?" << endl;
	cin >> duration;
	cout << "What is the current rating of this movie?" << endl;
	cin >> rating;
	movies* movie = new movies(title, year, director, duration, rating);
	media.push_back((generalMedia*)movie);
      }
    }
    else if(strcmp(command, "search") == 0) {
      cout << "What is the title of the media you want to find?" << endl;
      cin.get(title, 150);
      cin.get();
      for(auto i = media.begin(); i !=media.end(); i++) {
	if(strcmp(title, (*i)->getTitle()) == 0) {
          (*i)->print();
	  break;
	}
      }
    
      
    }
    else if(strcmp(command, "quit") == 0) {
      for(auto i = media.begin(); i!= media.end(); i++) {
	delete *i;
      }
      run = false;
    }



  }
  /*strcpy(title, "game");
  strcpy(publisher, "Nintendo");
  videogames a = videogames(title, 2005, publisher, 4.90);
  a.print();*/
  return 0;
}


void lowercase(char sentence[]) {
  //iterating variable
   int i = 0;
   //go through the char array
   while(true) {
     int charVal = (int) sentence[i];
     //if the letter is capital, make it lowercase using ASCII
     if(65<=charVal && charVal <= 90) {
       sentence[i] = (char)(charVal+32);
     }
     //if the character is the null character, 
     else if(sentence[i] == '\0') {
       break;
     }
     //increment the variable
     i++;
   }

   
 }
