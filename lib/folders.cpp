/*
  @author Lite Systems: Blas 
  LitePlusPlus v_1.7
  This file contains the things that you need to work with system folders.
  Lite Surface (c) 2023
*/

#include <iostream>

void createFolder(std::string folderName) {
    std::string comm = "mkdir " + folderName;
    system(comm.c_str());
}

void goToFolder(std::string directory) {
    std::string comm = "cd " + directory;
    system(comm.c_str());
}

void getDirectory() {
    system("dir");
}

void deleteFolder(std::string folderName) {
    std::string comm = "rmdir " + folderName;
    system(comm.c_str());
}