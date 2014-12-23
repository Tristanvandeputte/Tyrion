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
	StopWatch();
	static StopWatch* instance;
	StopWatch(StopWatch const&);             
	void operator=(StopWatch const&);
	
	 std::chrono::steady_clock::time_point previous_time;
public:
	virtual ~StopWatch();
	double getTime();
	void reset();
	
	static StopWatch* getInstance(){
		if(!instance){
			instance = new StopWatch;
		}
		return instance;
	}
};

#endif /* STOPWATCH_H_ */
