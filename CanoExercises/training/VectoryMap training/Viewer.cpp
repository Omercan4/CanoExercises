#include "Viewer.h"
#include "Movie.h"
#include <vector>
#include <map>
#include <iostream>
#include <string>
using namespace std;


Viewer::Viewer(string NameIn, int ageIn) : name(NameIn), age(ageIn) //parametric constructor
{
}

void Viewer::AddMovie(Movie* pMovie)
{
	MoviesWatched.push_back(pMovie);
}

void Viewer::MoviesSeen()
{
	for (auto it : MoviesWatched) //will create a loop to write all movies viewer has seen
	{
		

	}
}

