/*
  @author Lite Systems: Blas 
  LitePlusPlus v_1.7
  This file contains the things that you need to work with files.
  Lite Surface (c) 2023
*/

#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string>

void writeFile(std::string filename, std::string text) {
    std::ofstream MyFile(filename);
    MyFile << text;
    MyFile.close();
}
std::string readFile(std::string fileName) {
    std::ifstream MyReadFile(fileName);
    std::string readed;
    std::string actualLine;
    while(actualLine != "\0") {
    std::getline(MyReadFile, readed);
    }
    return readed;
}

void appendFile(std::string fileName, std::string text_to_append) {
    writeFile(fileName, readFile(fileName) += text_to_append);
}

void createFile(std::string fileName) {
    writeFile(fileName, "");
}

void deleteFile(char fileName[]) {
    std::remove(fileName);
}