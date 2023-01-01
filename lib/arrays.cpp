/*
  @author Lite Systems: Blas 
  LitePlusPlus v_1.0
  This file contains the things that you need to work with arrays.
  Lite Surface (c) 2023
*/

#include <iostream>
#include <string>

/*
std::string searchStr(char sepArr[], char character) {
    std::string returnText;
    int i = 0;
    std::string actualWord;
    for(int index = 0;index < sizeof(sepArr) / sizeof(char); index++) {
        if(sepArr[index] != character) {
            actualWord.append("" + sepArr[index]);
        } else {
            returnText[i] = actualWord;
            i++;
            actualWord = "";
        }
    }
}
*/
void search_str(char chareacter, std::string to_sepa) {
    int i, j;
    j = 0;
    std::string text;
    std::string text_to_return[1000];

    for(i = 0; i < sizeof(to_sepa.c_str()) / sizeof(char); i++) {
        if(to_sepa.c_str()[i] == chareacter) {
            text_to_return[j] = text;
            j++;
        } else {
            text += to_sepa.c_str()[i];
        }
    }
} 



bool findStr(std::string array[], std::string find) {
    for(int i = 0; i < sizeof(array) / sizeof(std::string); i++) {
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
    for(int i = 0; i < sizeof(array) / sizeof(bool); i++) {
        if(array[i] == find) {
            return true;
        }
    }
    return false;
}
bool findSho(short array[], short find) {
    for(int i = 0; i < sizeof(array) / sizeof(short); i++) {
        if(array[i] == find) {
            return true;
        }
    }
    return false;
}
bool findLon(long array[], long find) {
    for(int i = 0; i < sizeof(array) / sizeof(long); i++) {
        if(array[i] == find) {
            return true;
        }
    }
    return false;
}
bool findCha(char array[], char find) {
    for(int i = 0; i < sizeof(array) / sizeof(char); i++) {
        if(array[i] == find) {
            return true;
        }
    }
    return false;
}
bool findFlo(float array[], float find) {
    for(int i = 0; i < sizeof(array) / sizeof(float); i++) {
        if(array[i] == find) {
            return true;
        }
    }
    return false;
}





std::string scanStr(std::string array[], char separator) {
    std::string returnText;
    for(int i = 0; i < sizeof(array) / sizeof(std::string); i++) {
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
    for(int i = 0; i < sizeof(array) / sizeof(bool); i++) {
        returnText += array[i] + separator + " ";
    }
    return returnText;
}
std::string scanSho(short array[], char separator) {
    std::string returnText;
    for(int i = 0; i < sizeof(array) / sizeof(short); i++) {
        returnText += array[i] + separator + " ";
    }
    return returnText;
}
std::string scanLon(long array[], char separator) {
    std::string returnText;
    for(int i = 0; i < sizeof(array) / sizeof(long); i++) {
        returnText += array[i] + separator + " ";
    }
    return returnText;
}
std::string scanCha(char array[], char separator) {
    std::string returnText;
    for(int i = 0; i < sizeof(array) / sizeof(char); i++) {
        returnText += array[i] + separator + " ";
    }
    return returnText;
}

std::string scanFlo(float array[], char separator) {
    std::string returnText;
    for(int i = 0; i < sizeof(array) / sizeof(float); i++) {
        returnText += "" + std::to_string(array[i]) + separator + " ";
    }
    return returnText;
}
