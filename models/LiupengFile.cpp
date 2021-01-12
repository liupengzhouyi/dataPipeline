//
// Created by 刘鹏 on 2021/1/12.
//


#include "LiupengFile.h"

const std::string &LiupengFile::getFilePath() const {
    return filePath;
}

void LiupengFile::setFilePath(const std::string &filePath) {
    LiupengFile::filePath = filePath;
}

const std::string &LiupengFile::getFileName() const {
    return fileName;
}

void LiupengFile::setFileName(const std::string &fileName) {
    LiupengFile::fileName = fileName;
}

int LiupengFile::createFile() {
    auto return_Key = 0;
    std::string path = "../" + this->getFilePath() + "/" + this->getFileName();
    std::ofstream file(path, std::ios::app);
    if (file.is_open()) return_Key = 1;
    file.close();
    return return_Key;
}
