/*
  @author Lite Systems: Blas 
  LitePlusPlus v_1.6
  This file contains the things that you need to work with strings.
  Lite Surface (c) 2023
*/

#include <iostream>

void initialize(std::string arg0, char arg1[], bool message) {
    system("CLS");
    if(message) {
      cout << "LitePlusPlus 1.7 started:";
    }
    system(arg1);
}