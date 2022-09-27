/*
 * software_timer.h
 *
 *  Created on: Sep 27, 2022
 *      Author: Acer
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int timer1_flag; //timer for7segment
extern int timer2_flag; //for led

void setTimer1 (int duration);
void setTimer2 (int duration);
void timerRun();

#endif /* INC_SOFTWARE_TIMER_H_ */
