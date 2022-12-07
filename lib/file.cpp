/*
  @author Lite Systems: Blas 
  LitePlusPlus v_1.3
  This file contains the things that you need to work with files.
  Lite Surface (c) 2023
*/

#include <iostream>
#include <iostream>
#include <fstream>

void writeFile(std::string filename, std::string text) {
    std::ofstream MyFile(filename);
    MyFile << text;
    MyFile.close();
}
std::string readFile(std::string fileName) {
    std::string myText;
    std::string returnText;
    std::ifstream MyReadFile("filename.txt");
    while (std::getline (MyReadFile, myText)) {
        returnText.append(myText);
    }
    MyReadFile.close();
    return returnText;
}

void appendFile(std::string fileName, std::string text_to_append) {
    writeFile(fileName, readFile(fileName) += text_to_append);
}