/*
  @author Lite Systems: Blas 
  LitePlusPlus v_1.2
  This file contains the things that you need to work with strings.
  Lite Surface (c) 2023
*/
#include <iostream>


std::string add(std::string initialText, std::string text) {
    return initialText += text;
}

std::string quitEnd(std::string initialText, int lenght) {
    return initialText.substr(0, initialText.length() - lenght);
}

bool contains(char text[], char find[]) {
    int index = 0;
    for(int i = 0;i < sizeof(text) / sizeof(char); i++) {
        if(text[i] == find[index]) {
            index++;
            if(index == sizeof(find) / sizeof(char)) {
                return true;
            }
        }
    }
    return false;
}