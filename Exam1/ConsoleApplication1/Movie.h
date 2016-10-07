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

