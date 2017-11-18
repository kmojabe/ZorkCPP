/*
 * runGame.h
 *
 *  Created on: Nov 17, 2017
 *      Author: Abhir
 */

#ifndef RUNGAME_H_
#define RUNGAME_H_
#include "rapidxml.hpp"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#include "rapidxml.hpp"
using namespace std;

class runGame {
public:
	runGame();
	virtual ~runGame();
	bool status;
	bool SetupGame(std::string);
	bool getStatus();
	void setStatus(bool);
};

#endif /* RUNGAME_H_ */
