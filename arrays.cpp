/*
  @author Lite Systems: Blas 
  LitePlusPlus v_1.0
  This file contains the things that you need to work with arrays.
  Lite Surface (c) 2023
*/

#include <iostream>

bool findStr(std::string array[], std::string find) {
    for(int i = 0; i < sizeof(array) / sizeof(int); i++) {
        if(array[i] == find) {
            return true;
        }
    }
    return false;
}

std::string scanStr(std::string array[], char separator) {
    std::string returnText;
    for(int i = 0; i < sizeof(array) / sizeof(int); i++) {
        returnText += array[i] + separator + " ";
    }
    return returnText;
}

std::string scanInt(int array[], char separator) {
    std::string returnText;
    for(int i = 0; i < sizeof(array) / sizeof(int); i++) {
        returnText += array[i] + separator + " ";
    }
    return returnText;
}
std::string scanBoo(bool array[], char separator) {
    std::string returnText;
    for(int i = 0; i < sizeof(array) / sizeof(int); i++) {
        returnText += array[i] + separator + " ";
    }
    return returnText;
}
std::string scanSho(short array[], char separator) {
    std::string returnText;
    for(int i = 0; i < sizeof(array) / sizeof(int); i++) {
        returnText += array[i] + separator + " ";
    }
    return returnText;
}
std::string scanLon(long array[], char separator) {
    std::string returnText;
    for(int i = 0; i < sizeof(array) / sizeof(int); i++) {
        returnText += array[i] + separator + " ";
    }
    return returnText;
}
std::string scanCha(char array[], char separator) {
    std::string returnText;
    for(int i = 0; i < sizeof(array) / sizeof(int); i++) {
        returnText += array[i] + separator + " ";
    }
    return returnText;
}

