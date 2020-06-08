/*
 * NumberDisplay.h
 *
 *  Created on: 2020年6月8日
 *      Author: SST石子
 */

#ifndef NUMBERDISPLAY_H_
#define NUMBERDISPLAY_H_

class NumberDisplay {
public:
	NumberDisplay();
	virtual ~NumberDisplay();
private:
	NumberDisplay hours;
	NumberDisplay minutes;
};

#endif /* NUMBERDISPLAY_H_ */
