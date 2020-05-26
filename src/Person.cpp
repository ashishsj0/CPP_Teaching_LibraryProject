/*
 * Person.cpp
 *
 *  Created on: 20-May-2020
 *      Author: ashishsharma
 */


#include <iostream>
#include<string>

using namespace std;

class Person {

private:
	string name;

public:
	void set_name(string name) {
		this->name = name;
	}

	string get_name() {
		return name;
	}

};

// adding a comment
