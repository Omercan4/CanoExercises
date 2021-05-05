#pragma once
#include "Viewer.h"
#include <vector>
#include <map>
#include <iostream>
#include <string>
using namespace std;
class Movie
{
	string Name;
	int IMBDscore;
	vector<Viewer*> Watchers;
public:
	Movie(string NameIn, int scoreIn);
	void AddViewer(Viewer* Viewer);
	void ViewersCame();
	void print();

	
	
};

