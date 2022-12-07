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
bool findInt(int array[], int find) {
    for(int i = 0; i < sizeof(array) / sizeof(int); i++) {
        if(array[i] == find) {
            return true;
        }
    }
    return false;
}
bool findBoo(bool array[], bool find) {
    for(int i = 0; i < sizeof(array) / sizeof(int); i++) {
        if(array[i] == find) {
            return true;
        }
    }
    return false;
}
bool findSho(short array[], short find) {
    for(int i = 0; i < sizeof(array) / sizeof(int); i++) {
        if(array[i] == find) {
            return true;
        }
    }
    return false;
}
bool findLon(long array[], long find) {
    for(int i = 0; i < sizeof(array) / sizeof(int); i++) {
        if(array[i] == find) {
            return true;
        }
    }
    return false;
}
bool findCha(char array[], char find) {
    for(int i = 0; i < sizeof(array) / sizeof(int); i++) {
        if(array[i] == find) {
            return true;
        }
    }
    return false;
}
bool findFlo(float array[], float find) {
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

std::string scanFlo(float array[], char separator) {
    std::string returnText;
    for(int i = 0; i < sizeof(array) / sizeof(int); i++) {
        returnText += to_string(array[i]) + separator + " ";
    }
    return returnText;
}

