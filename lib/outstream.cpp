/*
  @author Lite Systems: Blas 
  LitePlusPlus v_1.0
  This file contains the things that you need to put things in the screen.
  Lite Surface (c) 2023
*/

#include <iostream>
#include <string>
typedef std::string String;
typedef bool Boolean;
typedef int Intregrer;

// Prints a String
void printStr(String text, bool config1) {
    if(config1) {
        std::cout << text << std::endl;
    } else {
        std::cout << text;
    }
}
// Prints a Intreger
void printInt(Intregrer text, bool config1) {
    if(config1) {
        std::cout << text << std::endl;
    } else {
        std::cout << text;
    }
}
// Prints a Boolean
void printBoo(Boolean text, bool config1) {
    if(config1) {
        std::cout << text << std::endl;
    } else {
        std::cout << text;
    }
}
// Prints a Short
void printSho(short text, bool config1) {
    if(config1) {
        std::cout << text << std::endl;
    } else {
        std::cout << text; 
    }
}
// Prints a Long
void printLon(long text, bool config1) {
    if(config1) {
        std::cout << text << std::endl;
    } else {
        std::cout << text;
    }
}
// Prints a Character
void printCha(char text, bool config1) {
    if(config1) {
        std::cout << text << std::endl;
    } else {
        std::cout << text;
    }
}
// Prints a Float
void printFlo(float text, bool config1) {
    if(config1) {
        std::cout << text << std::endl;
    } else {
        std::cout << text;
    }
}
// Prints a Double
void printFlo(double text, bool config1) {
    if(config1) {
        std::cout << text << std::endl;
    } else {
        std::cout << text;
    }
}

void clear() {
    system("CLS");
}
void pause() {
    system("Pause");
}
