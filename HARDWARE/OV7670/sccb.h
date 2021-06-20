#ifndef __SCCB_H
#define __SCCB_H
#include "sys.h"
//////////////////////////////////////////////////////////////////////////////////	 
//������ο�������guanfu_wang���롣
//ALIENTEKս��STM32������V3
//SCCB ��������	   
//����ԭ��@ALIENTEK
//������̳:www.openedv.com
//��������:2015/1/18
//�汾��V1.0		    							    							  
//////////////////////////////////////////////////////////////////////////////////
  
#define SCCB_SDA_IN()  {GPIOC->CRL&=0XFFFFF0FF;GPIOC->CRL|=0X00000800;}
#define SCCB_SDA_OUT() {GPIOC->CRL&=0XFFFFF0FF;GPIOC->CRL|=0X00000300;}

//IO��������	 
#define SCCB_SCL    		PCout(0)	 	//SCL
#define SCCB_SDA    		PCout(2) 		//SDA	 

#define SCCB_READ_SDA    	PCin(2)  		//����SDA    
#define SCCB_ID   			0X42  			//OV7670��ID

///////////////////////////////////////////
void SCCB_Init(void);
void SCCB_Start(void);
void SCCB_Stop(void);
void SCCB_No_Ack(void);
u8 SCCB_WR_Byte(u8 dat);
u8 SCCB_RD_Byte(void);
u8 SCCB_WR_Reg(u8 reg,u8 data);
u8 SCCB_RD_Reg(u8 reg);
#endif












