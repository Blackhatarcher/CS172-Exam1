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
	Movie movies[];
public:
	void AddMovie(Movie& Movie);
	std::string GetMovieForHour(int Hour);
	int GetShowTimeForGenre(std::string Genre);
	int GetPopcornPrice();
	int GetCokePrice();
	Theatre(std::string Name, std::string Phone);
};

