/*
  @author Lite Systems: Blas 
  LitePlusPlus v_1.0
  This file contains the things that you need to pick data from the screen.
  Lite Surface (c) 2023
*/
#include <iostream>
using namespace std;

string inputStr(bool config1) {
    if(config1) {
        string text;
        while (text.empty()) {    
            cin >> text;
            return text;
        }
    } else {
        string text;
        cin >> text;
        return text;
    }
}
int inputInt() {
    int text;
    cin >> text;
    return text;
}
bool inputBoo() {
    bool text;
    cin >> text;
    return text;
}
short inputSho() {
    short text;
    cin >> text;
    return text;
}
long inputLon() {
    long text;
    cin >> text;
    return text;
}
double inputDou() {
    double text;
    cin >> text;
    return text;
}
float inputFlo() {
    float text;
    cin >> text;
    return text;
}