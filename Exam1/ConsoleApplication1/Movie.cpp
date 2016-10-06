#include "Movie.h"
#include <string>

Movie::Movie() {
	title = "Default Movie";//might need to use a string constructor
	genre = "Comedy";//might need to use a string constructor
	showtime = 0;
}
Movie::Movie(std::string Title, std::string Genre, int Showtime) {
	title = Title;
	showtime = Showtime;
	if (Genre.compare("Action")==0 || Genre.compare("Comedy")==0 || Genre.compare("Horror") == 0 || Genre.compare("Documentary") == 0) {
		genre = Genre;
	}
	else {
		genre = "Comedy";// might need string constructor
	}

}
std::string Movie::GetTitle() {
	return title;
}
std::string Movie::GetGenre() {
	return genre;
}
int Movie::GetShowtime() {
	return showtime;
}


