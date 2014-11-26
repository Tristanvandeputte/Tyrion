/*
 * StopWatch.cpp
 *
 *  Created on: Nov 13, 2014
 *      Author: uauser
 */

#include "StopWatch.h"

StopWatch::StopWatch() {
	previous_time = std::chrono::steady_clock::now();
	// TODO Auto-generated constructor stub

}

StopWatch::~StopWatch() {
	// TODO Auto-generated destructor stub
}
double StopWatch::getTime(){
	 auto current_time = std::chrono::steady_clock::now();
	 auto deltaT =  std::chrono::duration_cast<std::chrono::milliseconds>(current_time-previous_time).count()/1000.0;
	 previous_time = current_time;
	 return deltaT;
	 
	
}
