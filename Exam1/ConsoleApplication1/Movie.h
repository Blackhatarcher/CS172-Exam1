//I affirm that all the code given below was written solely by me, Christian Williams, and that any help I received adhered to the rules stated for this exam.
#pragma once
#include <string>

class Movie
{
private:
	std::string title;
	std::string genre;
	int showtime;
public:
	Movie(); // will be used as a placeholder in the movies array
	Movie(std::string Title,std::string Genre, int Showtime);
	std::string GetTitle();
	std::string GetGenre();
	int GetShowtime();
};

