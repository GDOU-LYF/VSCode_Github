/*
 * TicketMachine.h
 *
 *  Created on: 2020��6��6��
 *      Author: SSTʯ��
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
