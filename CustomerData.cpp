/*
 * CustomerData.cpp
 *
 *  Created on: May 18, 2020
 *      Author: fasihatiq
 */

#include "CustomerData.hpp"

CustomerData::CustomerData() {
	// TODO Auto-generated constructor stub

}

CustomerData::~CustomerData() {
	// TODO Auto-generated destructor stub
}
void CustomerData::setCustomerNum(int nCus){

	custNum = nCus;
}
int CustomerData::getCustomerNum(){

	return custNum;
}
void CustomerData::setMailinglist(bool mList){

	mailingList = mList;
}
bool CustomerData::getMailinglist(){

	return mailingList;
}
