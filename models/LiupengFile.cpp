//
// Created by 刘鹏 on 2021/1/12.
//


#include "LiupengFile.h"
#include "GetNowTime.h"
#include "LiupengLogModel.h"

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
    int return_Key = 0;
    std::string path = "../" + this->getFilePath() + "/" + this->getFileName();
    std::ofstream file(path, std::ios::app);
    if (file.is_open()) return_Key = 1;
    file.close();
    return return_Key;
}

int LiupengFile::createFileWithLog() {
    GetNowTime getNowTime = GetNowTime();
    std::string logPath = "files/logs";
    std::string logFileName = getNowTime.getStringLogTime() + ".txt";
    std::string path = "../" + logPath + "/" + logFileName;
    std::ifstream f(path,std::ios::internal);
    LiupengLogModel liupengLogModel = LiupengLogModel();
    if (!f) {
        std::ofstream file(path, std::ios::app);
        liupengLogModel.setWhat("create File[" + logFileName + "] in [" + logPath + "].");
        liupengLogModel.setHow("success");
        liupengLogModel.setWhy("run OK!");
        file << liupengLogModel.getLogInformation() << std::endl;
        file.close();
    }
    int key = this->createFile();
    liupengLogModel.setWhat("create File[" + this->getFileName() + "] in [" + this->getFilePath() + "]");
    if (key == 1) {
        liupengLogModel.setHow("success");
        liupengLogModel.setWhy("run OK!");
    } else {
        liupengLogModel.setHow("error");
        liupengLogModel.setWhy("run ERROR!");
    }
    std::ofstream file1(path, std::ios::app);
    std::cout << liupengLogModel.getLogInformation() << std::endl;
    file1 << liupengLogModel.getLogInformation() << std::endl;
    return 0;
}
