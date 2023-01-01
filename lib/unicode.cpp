/*
  @author Lite Systems: Blas 
  LitePlusPlus v_1.7
  This file contains the things that you need to work with unicode characters.
  Lite Surface (c) 2023
*/
#include <iostream>

char __unicode[254] = {};

void initUnicode() {
    for(int i = 0; i < 254; i++) {
        __unicode[i] = i;
    }
}