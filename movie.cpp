#include <stdio.h>
#include <string>
using namespace std;

class Movie {
    private:
        string title;
        string director;
        int releaseYear;
    public:
        // Constructor to initialize members
        Movie() : title(""), director(""), releaseYear(0) {}
        // Getter for title
        string getTitle() {
            return title;
        }

        // Setter for title
        void setTitle(const string& t) {
            title = t;
        }

        // Getter for director
        string getDirector() {
            return director;
        }

        // Setter for director
        void setDirector(const string& d) {
            director = d;
        }

        // Getter for releaseYear
        int getReleaseYear() {
            return releaseYear;
        }

        // Setter for releaseYear
        void setReleaseYear(int year) {
            if (year > 1800) { // Basic validation
                releaseYear = year;
            }
        }
};

int main() {
    Movie movie;

    movie.setTitle("Inception");
    movie.setDirector("Christopher Nolan");
    movie.setReleaseYear(2010);

    printf("Title: %s\n", movie.getTitle().c_str());
    printf("Director: %s\n", movie.getDirector().c_str());
    printf("Release Year: %d\n", movie.getReleaseYear());
    

    return 0;
}