/*
  @author Lite Systems: Blas 
  LitePlusPlus v_1.3
  This file contains the things that you need to work with files.
  Lite Surface (c) 2023
*/

#include <iostream>
#include <fstream>
#include <stdio.h>

void writeFile(std::string filename, std::string text) {
    std::ofstream MyFile(filename);
    MyFile << text;
    MyFile.close();
}
std::string readFile(std::string fileName) {
    std::ifstream MyReadFile("filename.txt");
    std::string readed;
    getline(MyReadFile, readed);
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