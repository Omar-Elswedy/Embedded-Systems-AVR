/*
 * common.h
 *
 * Created: 7/12/2019 10:44:15 AM
 *  Author: Omar Elswedy
 */ 


#ifndef COMMON_H_
#define COMMON_H_

#define SET_BIT(Reg,Pos)  Reg|=(1<<Pos)  //OR
#define CLR_BIT(Reg,Pos)  Reg&=~(1<<Pos)  //AND
#define TOGGLE_BIT(Reg,Pos)  Reg^=(1<<Pos)  //XOR
#define GET_BIT(Reg,Pos)  (Reg&(1<<Pos))>>Pos



#endif /* COMMON_H_ */