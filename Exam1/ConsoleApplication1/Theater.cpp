#include "Theater.h"
#include <string>

//builds a Theater based on name and phone and populates the movies array with default movies
Theater::Theater(std::string Name, std::string Phone) {
	name = Name;
	phone = Phone;
	popcorn_price = 5;
	coke_price = 2;
	for (int i = 0; i < 1000; i++) {
		movies[i] = Movie();
	}
}
//adds a movie into the array of movies
void Theater::AddMovie(Movie& Movie) {
	//search the array for the very first default movie
	for (int i = 0; i < 1000; i++) {
		//all default movies have showtime 0
		if (movies[i].GetShowtime() == 0) {
			//found a default movie now replace it with the new movie
			movies[i] = Movie;
		}
	}
}
//if their is more than one movie at a given time this will return the movie that is listed last in the array
std::string Theater::GetMovieForHour(int Hour) {
	//search the array
	std::string response = "";
	for (int i = 0; i < 1000; i++) {
		//see if it has the right hour
		if (movies[i].GetShowtime == Hour) {
			//if it does then set the response to the movie's title
			response = movies[i].GetTitle();
		}
	}
}
int Theater::GetShowTimeForGenre(std::string Genre) {
	//search array
	int response = -1;
	for (int i = 0; i < 1000; i++) {
		//check if the genre matches
		if ((movies[i].GetGenre).compare(Genre)) {
			//set the response to the showtime of that movie
			response = movies[i].GetShowtime();
		}
	}
	//if there is no movie then the response will be -1
	return response;
}
int Theater::GetPopcornPrice() {
	return popcorn_price;
}
int Theater::GetCokePrice() {
	return coke_price;
}




