//
// Created by 刘鹏 on 2021/1/12.
//

#include "LiupengLogModel.h"

const GetNowTime &LiupengLogModel::getDatetime() const {
    return datetime;
}

void LiupengLogModel::setDatetime(const GetNowTime &datetime) {
    LiupengLogModel::datetime = datetime;
}

const std::string &LiupengLogModel::getWhat() const {
    return what;
}

void LiupengLogModel::setWhat(const std::string &what) {
    LiupengLogModel::what = what;
}

const std::string &LiupengLogModel::getHow() const {
    return how;
}

void LiupengLogModel::setHow(const std::string &how) {
    LiupengLogModel::how = how;
}

const std::string &LiupengLogModel::getWhy() const {
    return why;
}

void LiupengLogModel::setWhy(const std::string &why) {
    LiupengLogModel::why = why;
}

LiupengLogModel::LiupengLogModel() {
    this->setDatetime(GetNowTime());
}

std::string LiupengLogModel::getLogInformation() {
    return this->getDatetime().getStringDateTime() + ": " + this->getWhat() + " -> " + this->getHow() + ". because: " + this->getWhy() ;
}

std::string LiupengLogModel::getMarkdownInformation() {
    return "| " + this->getDatetime().getStringDateTime() + " | " + this->getWhat() + " | " + this->getHow() + " | " + this->getWhy() + " |";
}
