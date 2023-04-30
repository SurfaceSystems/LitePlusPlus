/*
  @author Lite Systems: Blas 
  LitePlusPlus v_1.4
  This file contains the things that you need to work with logical functions.
  Lite Surface (c) 2023
*/
#include <iostream>

int AND(float ent1, float ent2) {
    if(ent1 != 0 && ent2 != 0) {
        return 1;
    }
    return 0;
}

int NOT(int ent1) {
    if(ent1 == 0) {
        return 1;
    }
    return 0;
}