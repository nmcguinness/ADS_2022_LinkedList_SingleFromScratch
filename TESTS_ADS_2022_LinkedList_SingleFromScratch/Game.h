#pragma once
#include <string>
using namespace std;

struct Game {
	//public by default
	string username;
	int rank;
	double averageTTC;

	//constructors, g/s, overload operators (<< etc)
};
/*
class Game {
	//private by default
	string username;
	int rank;
	double averageTTC;
public:
	Game(string username, int rank, double averageTTC)
		: username(username), rank(rank), averageTTC(averageTTC) {}

	string getUserName() const { return this->username; }
};
*/
