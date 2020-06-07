/*
 * TicketMachine.cpp
 *
 *  Created on: 2020年6月6日
 *      Author: SST石子
 */

#include "TicketMachine.h"


#include <iostream>
using namespace std;

TicketMachine::TicketMachine():PRICE(0),balance(0),total(0) {
	// TODO Auto-generated constructor stub

}

TicketMachine::~TicketMachine() {
	// TODO Auto-generated destructor stub
}

void TicketMachine::showPrompt(){
	cout <<"something";
}

void TicketMachine::insertMoney(int money){
	balance+=money;
}

//void TicketMachine::showBalance(){
//	cout<<
//
//
//}
