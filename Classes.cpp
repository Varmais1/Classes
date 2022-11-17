#include <iostream>
#include <cstring>
#include <vector>
#include "generalMedia.h"
#include "videogames.h"





using namespace std;

int main() {
  char* publisher;
  char* title;
  vector<generalMedia*> media;
  bool run = true;
  char command[10] = {'d','e','f','a','u','l','t'};
  while(run == true) {
    cin >> command;
    cout << endl;
    if(strcmp(command, "quit") == 0) {
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
