#pragma once
#include <string>
using namespace std;
struct Game {
	string username;	int rank;	double averageTTC;
};

class Game {
	string username;	int rank;	double averageTTC;
public:
	Game(string username, int rank, double averageTTC)
		: username(username), rank(rank), averageTTC(averageTTC) {}

	string getUserName() const { return this->username; }
};
