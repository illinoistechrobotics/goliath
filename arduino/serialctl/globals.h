#pragma once

extern packet_t pA, pB, safe;
extern packet_t *astate, *incoming;
extern comm_state cs;
extern long last_p;
extern char comm_ok;
extern double pidLeftP, pidLeftI, pidLeftD, pidRightP, pidRightI, pidRightD;
extern double leftIn, leftOut, leftSet, rightIn, rightOut, rightSet;

#define SerComm Serial1
#define SerCommDbg Serial
#define PID_SERIAL_BUFFER_SIZE 20
#define RESET_BUTTON 9

#define htons(x) ( ((x)<<8) | (((x)>>8)&0xFF) )
#define ntohs(x) htons(x)
#define htonl(x) ( ((x)<<24 & 0xFF000000UL) | ((x)<< 8 & 0x00FF0000UL) | ((x)>> 8 & 0x0000FF00UL) | ((x)>>24 & 0x000000FFUL) )
#define ntohl(x) htonl(x)
#define ALI1 7
#define BLI1 8
#define AHI1 22
#define BHI1 23
#define ALI2 11
#define BLI2 12
#define AHI2 24
#define BHI2 25
#define drive_right(x) drive_osmc(x,0,ALI1,BLI1,AHI1,BHI1)
#define drive_left(x) drive_osmc(x,0,ALI2,BLI2,AHI2,BHI2)
#define DEADBAND_HALF_WIDTH 5
#define JOYSTICK_PAD_UP 12
#define JOYSTICK_PAD_RIGHT 13
#define JOYSTICK_PAD_DOWN 14
#define JOYSTICK_PAD_LEFT 15


#define FAILTIME 100
