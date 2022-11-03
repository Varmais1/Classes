#include <iostream>

using namespace std;

class videogames : generalMedia {
 public:
  videogames();
  videogames(char* newTitle, int newYear, char* newPublisher, double newRating);
  char* getPublisher();
  double getRating();
  void setPublisher(char* newPublisher);
  void setRating(double newRating);

 protected:
  char* publisher;
  double rating;
}
