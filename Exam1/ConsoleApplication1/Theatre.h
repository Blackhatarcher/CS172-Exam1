#pragma once
#include <string>
#include "Movie.h"
class Theatre
{
private:
	std::string name;
	std::string phone;
	int popcorn_price;
	int coke_price;
	//haven't worked with arrays in a while so I might now be doing this as well as I could
	Movie movies[1000]; //more movies than any theatre will ever need to play
public:
	void AddMovie(Movie& Movie);
	std::string GetMovieForHour(int Hour);
	int GetShowTimeForGenre(std::string Genre);
	int GetPopcornPrice();
	int GetCokePrice();
	Theatre(std::string Name, std::string Phone);
};

