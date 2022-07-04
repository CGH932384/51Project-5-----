#ifndef _TIMER0_H
#define _TIMER0_H

#include "public.h"


//变量声明
extern u8 gmsec;//ms级定义
extern u8 gsec;//秒定义
extern u8 gmin;//分定义
extern u8 gshi;//时定义
extern u8 year;
extern u8 mouth;
extern u8  day;
//函数声明
void Timer0_init(void);
void Timer0_stop(void);
void Timer0_start(void);
#endif
