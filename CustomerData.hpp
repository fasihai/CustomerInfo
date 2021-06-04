/*
 * CustomerData.hpp
 *
 *  Created on: May 18, 2020
 *      Author: fasihatiq
 */

#ifndef CUSTOMERDATA_HPP_
#define CUSTOMERDATA_HPP_

#include "PersonData.hpp"
#include <iostream>
#include <string>
using namespace std;


class CustomerData: public PersonData {
public:
	CustomerData();
	virtual ~CustomerData();

	void setCustomerNum(int nCus);
	int getCustomerNum();
	void setMailinglist(bool mList);
	bool getMailinglist();

private:

	int custNum;
	bool mailingList;
};


#endif /* CUSTOMERDATA_HPP_ */
