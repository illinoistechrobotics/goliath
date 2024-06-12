#pragma once

#include <stdint.h>
#define SFRAME 0x5b
#define EFRAME 0x5d
enum comm_state {
  COMM_WAIT,
  COMM_RECV,
  COMM_COMPLETE,
  COMM_VALID,
  COMM_INVALID };
typedef struct{
uint8_t stickX;
uint8_t stickY;
uint8_t btnhi;
uint8_t btnlo;
uint16_t cksum;
uint8_t stickRX; // add right stick, without changieng existing var names or ordering
uint8_t stickRY; 
} packet_t;
