#ifndef _AES_H_
#define _AES_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <inttypes.h>

typedef struct State_s {
    uint8_t val[4][4];
} State;

typedef struct AES_128_s {
    State roundKeys[11];
} AES_128;


void printstate(State etat);

void setCipherKey(AES_128 *aes, uint8_t cipherKey[16]);

void addRoundKey(State *state, State *key);

void subBytes(State *state);
void shiftRows(State *state);
void mixColumns(State *state);

void invSubBytes(State *state);
void invShiftRows(State *state);
void invMixColumns(State *state);


void encrypt128(AES_128 *aes, uint8_t message[16]);
void decrypt128(AES_128 *aes, uint8_t message[16]);

#endif