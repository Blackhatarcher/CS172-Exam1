#include "Theatre.h"
#include <string>

//builds a theatre based on name and phone and populates the movies array with default movies
Theatre::Theatre(std::string Name, std::string Phone) {
	name = Name;
	phone = Phone;
	popcorn_price = 5;
	coke_price = 2;
	for (int i = 0; i < 1000; i++) {
		movies[i] = Movie();
	}
}
//adds a movie into the array of movies
void Theatre::AddMovie(Movie& Movie) {
	//search the array for the very first default movie
	for (int i = 0; i < 1000; i++) {
		//all default movies have showtime 0
		if (movies[i].GetShowtime() == 0){
			//found a default movie now replace it with the new movie
			movies[i] = Movie;
		}
	}
}
//if their is more than one movie at a given time this will return the movie that is listed last in the array
std::string Theatre::GetMovieForHour(int Hour) {
	//search the array
	std::string response = "";
	for (int i = 0; i < 1000; i++) {
		//see if it has the right hour
		if (movies[i].GetShowtime == Hour){
			//if it does then set the response to the movie's title
			response = movies[i].GetTitle();
		}
	}
}
int Theatre::GetShowTimeForGenre(std::string Genre) {
	//complicated code
}
int Theatre::GetPopcornPrice() {
	return popcorn_price;
}
int Theatre::GetCokePrice() {
	return coke_price;
}


