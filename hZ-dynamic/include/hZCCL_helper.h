/*
 * Copyright (C) by Argonne National Laboratory
 *     See COPYRIGHT in top-level directory
 *  @author Jiajun Huang <jiajunhuang19990916@gmail.com>
 *  @date Oct, 2023
 */

#ifndef _hZCCL_HELPER_H
#define _hZCCL_HELPER_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>


// Define the type of the bit array
typedef struct {
    unsigned char* array;
    size_t size; // number of bits
} BitArray;

// Functions to operate on the bit array
BitArray* createBitArray(size_t size);
void setBit(BitArray* bitArray, size_t index, int value);
int getBit(BitArray* bitArray, size_t index);
void freeBitArray(BitArray* bitArray);

#endif /* ----- #ifndef _hZCCL_Float_H  ----- */
