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
        if (str == "") continue;
        std::string keyWord = str.substr(0, 5);
        if (keyWord == "EVENT") {
            // create Model
            this->createDairyModel(file_contents);
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
    // std::cout << "\'" + dairyModelInformation  + "\'" << std::endl;
    if (dairyModelInformation.length() < 10) return;
    LiupengDairyModel liupengDairyModel = LiupengDairyModel();
    std::vector<std::string> vStr = std::vector<std::string>();
    vStr = this->split(dairyModelInformation, '\n');
    std::string key = "";
    std::string value = "";
    std::string dateValue = "";
    for (std::string item : vStr) {
        // std::cout << item << std::endl;
        int index = item.find(':');
        if (index >= 0) {
            key = item.substr(0, index);
            value = item.substr(index + 1, item.length());
            // std::cout << key << " ---- " << value << std::endl;
            if (key == "Summary") liupengDairyModel.setName(value);
            if (key == "Date") liupengDairyModel.setCalender(this->formatCalender(value).getStringDate()), dateValue = value;
            if (key == "Location") liupengDairyModel.setLocation(value);
            if (key == "Notes") liupengDairyModel.setNotes(value);
            if (key == "Time") {
                liupengDairyModel.setStartDate(this->formatTime(dateValue, value, 1));
                liupengDairyModel.setEndDate(this->formatTime(dateValue, value, 2));
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

GetNowTime LiupengDairy::formatCalender(std::string calenderInformation) {
    GetNowTime getNowTime = GetNowTime();
    std::string calender = "";
    std::string value = this->split(calenderInformation.substr(1, calenderInformation.length()), ' ')[0];
    std::vector<std::string> dateValues = std::vector<std::string>();
    dateValues = this->split(value, '/');
    if (dateValues.size() == 3) {
        calender = calender + dateValues[0];
        if (dateValues[1].length() == 1) {
            dateValues[1] = "0" + dateValues[1];
        }
        if (dateValues[2].length() == 1) {
            dateValues[2] = "0" + dateValues[2];
        }
        getNowTime.setYear(std::stoi(dateValues[0]));
        getNowTime.setMonth(std::stoi(dateValues[1]));
        getNowTime.setDay(std::stoi(dateValues[2]));
    }
    return getNowTime;
}

GetNowTime LiupengDairy::formatTime(std::string calenderInformation, std::string timeInformation, int key) {
    GetNowTime getNowTime = this->formatCalender(calenderInformation);
    timeInformation = "\t下午1:45:00 to 下午2:15:00";
    std::vector<std::string> timeValues = std::vector<std::string>();
    timeValues = this->split(timeInformation.substr(1, timeInformation.length()), ' ');
    if (timeValues.size() == 3) {
        if (key == 1) timeInformation = timeValues[0];
        else timeInformation = timeValues[2];
        std::vector<std::string> values = std::vector<std::string>();
        values = this->split(timeInformation.substr(6, timeInformation.length()), ':');
        if (timeInformation.substr(0, 6) == "下午") {
            if (std::stoi(values[0]) == 12) getNowTime.setHour(std::stoi(values[0]));
            else getNowTime.setHour(12 + std::stoi(values[0]));
            getNowTime.setMinte(std::stoi(values[1]));
            getNowTime.setSec(std::stoi(values[2]));
        } else {
            getNowTime.setHour(std::stoi(values[0]));
            getNowTime.setMinte(std::stoi(values[1]));
            getNowTime.setSec(std::stoi(values[2]));
        }
        getNowTime.setStringDateTime();
    }
    // std::cout << getNowTime.getStringDateTime() << std::endl;
    return getNowTime;
}

void LiupengDairy::createMarkdownTableDairy() {
    // 创建集合日记文件
    LiupengFile liupengFile = LiupengFile();
    liupengFile.setFilePath("files/dairy/output");
    liupengFile.setFileName("2021-01-15.markdown");
    liupengFile.createFileWithLog();
    for (LiupengDairyModel liupengDairyModel : this->getLiupengDairyModelList()) {
        liupengFile.addFileWithLog(liupengDairyModel.createMarkdownDairy());
    }
}




