#ifndef REGISTERS_H
#define REGISTERS_H

#include <cstdint>

/* 16-bit register */
typedef uint16_t register16_t;
/* 8-bit register */
typedef uint8_t register8_t;

/* Pair of 8-bit registers */
typedef struct register8_pair {
  register8_t hi;
  register8_t lo;
} register8_pair_t;

/* Register which can be accesed as one 16-bit register or two seperate 8-bit
 * registers */
typedef union double_register {
  register16_t register_16;
  register8_pair_t registers_pair;
} double_register_t;

/* Full structure of GBC's CPU registers */
typedef struct gbc_cpu_registers {
  double_register_t AF; /* Accumulator & Flags */
  double_register_t BC; /* BC */
  double_register_t DE; /* DE */
  double_register_t HL; /* HL */
  register16_t SP;      /* Stack Pointer */
  register16_t PC;      /* Program Counter */
} gbc_cpu_registers_t;

/* GBC Flags */
typedef enum gbc_flags {
  FLAG_Z = 7,           /* Flag Zero */
  FLAG_N = 6,           /* Subtraction Flag */
  FLAG_H = 5,           /* Half Carry Flag */
  FLAG_C = 4,           /* Carry flag */
} gbc_flags_t;

#endif
