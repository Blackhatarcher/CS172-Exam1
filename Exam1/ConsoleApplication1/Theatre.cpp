#include "Theatre.h"
#include <string>
int GetCokePrice();
Theatre::Theatre(std::string Name, std::string Phone) {
	name = Name;
	phone = Phone;
	popcorn_price = 5;
	coke_price = 2;

}
void Theatre::AddMovie(Movie& Movie) {
	//add some things
}
std::string Theatre::GetMovieForHour(int Hour) {
	// complicated code
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


