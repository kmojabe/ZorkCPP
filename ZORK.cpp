//============================================================================
// Name        : ZORK.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Room.h"
#include "rapidxml.hpp"
using namespace std;


int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	Room r;
	r.name = "Forest";
	cout << r.name << endl;
	return 0;
}
