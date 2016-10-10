//I affirm that all the code given below was written solely by me, Christian Williams, and that any help I received adhered to the rules stated for this exam.
#include "Movie.h"
#include <string>

//constructs a default movie 
Movie::Movie() {
	title = "Default Movie";//might need to use a string constructor
	genre = "Comedy";//might need to use a string constructor
	showtime = 0;// default showtime and will be used to identify default movies
}
//will construct a movie, if the genre isn't action comedy horror or documentary then it sets genre to comedy
//do not want a show time 0
Movie::Movie(std::string Title, std::string Genre, int Showtime) {
	title = Title;
	if (Showtime != 0) {
		showtime = Showtime;
	}
	else {
		showtime = 1;
	}
	if (Genre.compare("Action")==0 || Genre.compare("Comedy")==0 || Genre.compare("Horror") == 0 || Genre.compare("Documentary") == 0) {
		genre = Genre;
	}
	else {
		genre = "Comedy";// might need string constructor
	}
}
//will return the title of the movie
std::string Movie::GetTitle() {
	return title;
}
//will return the genre of the movie
std::string Movie::GetGenre() {
	return genre;
}
//will return the show time of the movie
int Movie::GetShowtime() {
	return showtime;
}


