#include <iostream>
#include "models/GetNowTime.h"
#include "models/LiupengLogModel.h"
#include "models/LiupengFile.h"

int main() {
    std::cout << "Hello, World!" << std::endl;

    GetNowTime g = GetNowTime();
    std::cout << g.getStringDateTime() << std::endl;

    LiupengLogModel liupengLogModel = LiupengLogModel();
    liupengLogModel.setWhat("create File");
    liupengLogModel.setHow("success");
    liupengLogModel.setWhy("run OK!");
    std::cout << liupengLogModel.getLogInformation() << std::endl;
    std::cout << liupengLogModel.getMarkdownInformation() << std::endl;

    LiupengFile liupengFile = LiupengFile();
    liupengFile.setFilePath("files");
    liupengFile.setFileName("dairy.txt");
    liupengFile.createFileWithLog();
    return 0;
}
