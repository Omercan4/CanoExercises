#pragma once
#include "Movie.h"
#include <vector>
#include <map>
#include <iostream>
#include <string>
using namespace std;
class Viewer
{
	string name;
	int age;
	vector<Movie*> MoviesWatched; // will add movie pointer later
public:
	Viewer(string NameIn, int ageIn);
	void AddMovie(Movie* pMovie);
	void MoviesSeen();


	
};

