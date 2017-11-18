/*
 * Room.h
 *
 *  Created on: Nov 2, 2017
 *      Author: SwaggyKavi
 */

#ifndef ROOM_H_
#define ROOM_H_

#include <string>
#include <vector>

using namespace std;
class Room {
public:
	Room();
	virtual ~Room();
public:
	std::string name;
	std::string status;
	std::string type;
	std::string description;
	vector<string> border;
	vector<string> container;
	vector<string> item;
	vector<string> creature;
	vector<string> trigger;

private:
	//void setUpRoom();
};

#endif /* ROOM_H_ */
