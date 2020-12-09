#pragma once

#include "Human.hpp"

#include <list>
#include <vector>
using namespace std;

vector< char > foo(list< Human >& people)
{
	vector<char> wektor;
	for (vector<char> ra = people.rbegin(); ra != people.rend(); ra++) 
	{
		ra->birthday();
		if (ra->isMonster())
		{
			wektor.push_back('n');
		}
		else if (!(ra->isMonster()))
		{
			wektor.push_back('y');
		}
	}
	return {wektor};
}
