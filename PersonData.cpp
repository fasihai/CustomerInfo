/*
 * PersonData.cpp
 *
 *  Created on: May 18, 2020
 *      Author: fasihatiq
 */

#include "PersonData.hpp"



PersonData::PersonData() {
	// TODO Auto-generated constructor stub

}

PersonData::~PersonData() {
	// TODO Auto-generated destructor stub
}
void PersonData::setLastName(string nLast){

		nameLast = nLast;
}
string PersonData::getLastName(){

	return nameLast;
}
void PersonData::setFirstName(string nFirst){

		nameFirst = nFirst;
}
string PersonData::getFirstName(){

	return nameFirst;
}
void PersonData::setAddress(string addy){

		address = addy;
}
string PersonData::getAddress(){

	return address;
}
void PersonData::setCity(string cty){

		city = cty;
}
string PersonData::getCity(){

	return city;
}
void PersonData::setPhone(int pnum){

		phone = pnum;
}
int PersonData::getPhone(){

	return phone;
}

