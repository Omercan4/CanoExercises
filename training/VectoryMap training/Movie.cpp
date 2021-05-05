#pragma once
#include "Movie.h"
#include "Viewer.h"
#include <vector>
#include <map>
#include <iostream>
#include <string>
using namespace std;

Movie::Movie(string NameIn, int scoreIn) : Name(NameIn), IMBDscore(scoreIn)
{

}

void Movie::print()
{
	cout << Name << endl;
}

void Movie::AddViewer(Viewer* pViewer)
	{
		Watchers.push_back(pViewer);
	}