/*
 * StopWatch.h
 *
 *  Created on: Nov 13, 2014
 *      Author: uauser
 */

#ifndef STOPWATCH_H_
#define STOPWATCH_H_

#include <iostream>
#include <ctime>
#include <chrono>

using namespace std;

class StopWatch {
private:
	 std::chrono::steady_clock::time_point previous_time;
public:
	StopWatch();
	virtual ~StopWatch();
	double getTime();
};

#endif /* STOPWATCH_H_ */
