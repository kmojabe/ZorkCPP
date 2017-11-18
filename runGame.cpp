/*
 * runGame.cpp
 *
 *  Created on: Nov 17, 2017
 *      Author: Abhir
 */

#include "runGame.h"
#include "rapidxml.hpp"

using namespace rapidxml;
using namespace std;

runGame::runGame() {
	// TODO Auto-generated constructor stub

}

runGame::~runGame() {
	// TODO Auto-generated destructor stub
}

void runGame::setStatus(bool curr_status){
	this->status = curr_status;
}

bool runGame::getStatus(){
	return this->status;
}

bool runGame::SetupGame(std::string fileName){
	std::ifstream file(fileName);

	if(!(file.is_open())){
		cout << "Cannot open file!" << endl;
		setStatus(false);
		return false;
 	}


	xml_document<> doc;
	xml_node<> * root;

	std::vector<char> buffer((istreambuf_iterator<char>(file)), istreambuf_iterator<char>());
	buffer.push_back('\0');
	return getStatus();
}
