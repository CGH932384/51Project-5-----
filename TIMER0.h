#ifndef _TIMER0_H
#define _TIMER0_H

#include "public.h"


//��������
extern u8 gmsec;//ms������
extern u8 gsec;//�붨��
extern u8 gmin;//�ֶ���
extern u8 gshi;//ʱ����
extern u8 year;
extern u8 mouth;
extern u8  day;
//��������
void Timer0_init(void);
void Timer0_stop(void);
void Timer0_start(void);
#endif
