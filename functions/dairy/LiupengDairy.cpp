//
// Created by 刘鹏 on 2021/1/13.
//

#include <vector>

#include "LiupengDairy.h"

std::string LiupengDairy::readFile() {

    std::string path = "../" + this->getLiupengFile().getFilePath() + "/" + this->getLiupengFile().getFileName();
    std::ifstream  file;
    file.open(path, std::ios::out | std::ios::in );
    std::string str;
    std::string file_contents = "";
    while (std::getline(file, str))
    {
        std::string keyWord = str.substr(0, 5);
        if (keyWord == "EVENT") {
            // create Model
            this->createDairyModel(file_contents);
            // std::cout << file_contents << std::endl;

            // 清空临时存储
            file_contents = "";
        } else {
            if (str != "\n") {
                file_contents += str;
                file_contents.push_back('\n');
            }
        }
    }
    this->createDairyModel(file_contents);
    file.close();
    return file_contents;
}

const LiupengFile &LiupengDairy::getLiupengFile() const {
    return liupengFile;
}

void LiupengDairy::setLiupengFile(const LiupengFile &liupengFile) {
    LiupengDairy::liupengFile = liupengFile;
}

void LiupengDairy::createDairyModel(std::string dairyModelInformation) {
    std::cout << "\'" + dairyModelInformation  + "\'" << std::endl;
    if (dairyModelInformation.length() < 10) return;
    LiupengDairyModel liupengDairyModel = LiupengDairyModel();
    std::vector<std::string> vStr = std::vector<std::string>();
    vStr = this->split(dairyModelInformation, '\n');
    std::string key = "";
    std::string value = "";
    for (std::string item : vStr) {
        std::cout << item << std::endl;
        int index = item.find(':');
        if (index >= 0) {
            key = item.substr(0, index);
            value = item.substr(index + 1, item.length());
            std::cout << key << " ---- " << value << std::endl;
            if (key == "Summary") liupengDairyModel.setName(value);
            if (key == "Date") liupengDairyModel.setCalender(value);
            if (key == "Location") liupengDairyModel.setLocation(value);
            if (key == "Notes") liupengDairyModel.setNotes(value);
            if (key == "Time") {
                liupengDairyModel.setStartDate(GetNowTime());
                liupengDairyModel.setEndDate(GetNowTime());
            }
        } else  {
            if (key == "Location") {
                value = value + "-" + item;
                liupengDairyModel.setLocation(value);
            }
            if (key == "Notes") {
                value = value + item;
                liupengDairyModel.setNotes(value);
            }
        }
    }
    this->liupengDairyModelList.push_back(liupengDairyModel);
}

const std::list<LiupengDairyModel> &LiupengDairy::getLiupengDairyModelList() const {
    return liupengDairyModelList;
}

void LiupengDairy::setLiupengDairyModelList(const std::list<LiupengDairyModel> &liupengDairyModelList) {
    LiupengDairy::liupengDairyModelList = liupengDairyModelList;
}

//字符串分割到数组
std::vector<std::string> LiupengDairy::split(std::string src, char key) {
    std::vector<std::string> dest = std::vector<std::string>();
    std::string substring = "";
    for (int i = 0; i < src.length(); i++) {
        if (src[i] != key) {
            substring = substring + src[i];
        } else {
            dest.push_back(substring);
            substring = "";
        }
    }
    dest.push_back(substring);
    return dest;
}


