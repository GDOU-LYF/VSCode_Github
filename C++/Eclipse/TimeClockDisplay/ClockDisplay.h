/*
 * ClockDisplay.h
 *
 *  Created on: 2020年6月8日
 *      Author: SST石子
 */

#ifndef CLOCKDISPLAY_H_
#define CLOCKDISPLAY_H_

class ClockDisplay {
public:
	ClockDisplay();
	virtual ~ClockDisplay();
private:
	int limit;
	int value;
};


#endif /* CLOCKDISPLAY_H_ */
