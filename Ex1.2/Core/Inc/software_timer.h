/*
 * software_timer.h
 *
 *  Created on: Sep 26, 2022
 *      Author: Acer
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int timer1_flag;
extern int timer2_flag;

void setTimer1 (int duration);//timer direct the 7seg
void setTimer2 (int duration);//timer for leds

void timerRun();

#endif /* INC_SOFTWARE_TIMER_H_ */
