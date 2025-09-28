#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;


// ENCAPSULAMENTO E MODIFICADORES DE ACESSO
// Getters e Setters
//Public And Private Access Specifiers

class Movie {
private:
    int movieID;
    char movieTitle[50];
    char movieDirector[50];
    char movieRating[5];

public:
    std::string title;
    std::string director;
    std::string rating;

    Movie(std::string aTitle, std::string aDirector, std::string aRating) {
        title = aTitle;
        director = aDirector;
        rating = aRating;
    }
    void setmovieID(int i) {
        if (i<0) return;
        movieID=i;
    }
    int getmovieID() {
        return movieID;
    }




    void setRating(std::string aRating) {
        rating=aRating;
    }
    char* getRating() {
        return movieRating;
    }

};

int main() {


    Movie avengers("The Avengers", "Joss Whedon","PG-13");

    cout << avengers.rating;

    return 0;
}