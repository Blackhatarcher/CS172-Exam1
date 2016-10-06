#pragma once
#include <string>

class Movie
{
private:
	std::string title;
	std::string genre;
	int showtime;
public:
	Movie();
	Movie(std::string Title,std::string Genre, int Showtime);
	std::string GetTitle();
	std::string GetGenre();
	int GetShowtime();
};

