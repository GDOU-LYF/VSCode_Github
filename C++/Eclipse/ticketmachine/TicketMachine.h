/*
 * TicketMachine.h
 *
 *  Created on: 2020年6月6日
 *      Author: SST石子
 */

#ifndef TICKETMACHINE_H_
#define TICKETMACHINE_H_

class TicketMachine {
public:
	TicketMachine();
	virtual ~TicketMachine();
    void showPrompt();
    void insertMoney(int money);
    void showBalance();
    void printError();
private:
   const int PRICE;
   int balance;
   int total;
};

#endif /* TICKETMACHINE_H_ */
