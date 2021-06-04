/*
 * PersonData.hpp
 *
 *  Created on: May 18, 2020
 *      Author: fasihatiq
 */

#ifndef PERSONDATA_HPP_
#define PERSONDATA_HPP_

#include <iostream>
#include <string>
using namespace std;

class PersonData {
public:
	PersonData();
	virtual ~PersonData();

	void setLastName(string nLast);
	string getLastName();
	void setFirstName(string nFirst);
	string getFirstName();
	void setAddress(string addy);
	string getAddress();
	void setCity(string cty);
	string getCity();
	void setPhone(int pnum);
	int getPhone();

private:

	string nameFirst,
		   nameLast,
		   address,
		   city;
	int phone;

};

#endif /* PERSONDATA_HPP_ */
