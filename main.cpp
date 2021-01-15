#include <iostream>
#include <vector>
#include "models/GetNowTime.h"
#include "models/LiupengLogModel.h"
#include "models/LiupengFile.h"
#include "models/dairy/LiupengDairyModel.h"
#include "functions/dairy/LiupengDairy.h"

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

//    LiupengFile liupengFile = LiupengFile();
//    liupengFile.setFilePath("files");
//    liupengFile.setFileName("dairy.txt");
//    liupengFile.createFileWithLog();


    LiupengDairyModel liupengDairyModel = LiupengDairyModel();
    liupengDairyModel.setName("Liupengse");
    std::cout << liupengDairyModel.toString() << std::endl;
    std::cout << liupengDairyModel.toJson() << std::endl;
    std::cout << liupengDairyModel.toMarkdownTableHead() << std::endl;
    std::cout << liupengDairyModel.toMarkdownTableItem() << std::endl;


    LiupengFile liupengFile = LiupengFile();
    liupengFile.setFilePath("files/dairy/input");
    liupengFile.setFileName("未命名.txt");
    LiupengDairy liupengDairy = LiupengDairy();
//    std::vector<std::string> v = std::vector<std::string>();
//    liupengDairy.split("qqwertyuqwertywertywerty", 'e');
    liupengDairy.setLiupengFile(liupengFile);
    liupengDairy.readFile();
    std::list list = liupengDairy.getLiupengDairyModelList();
    std::cout << LiupengDairyModel().toMarkdownTableHead() << std::endl;
    for (LiupengDairyModel item : list) {
        std::cout << item.toMarkdownTableItem() << std::endl;
    }
    // std::cout << liupengDairy.readFile() << std::endl;




    return 0;
}
