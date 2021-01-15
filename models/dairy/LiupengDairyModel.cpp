//
// Created by 刘鹏 on 2021/1/13.
//

#include "LiupengDairyModel.h"

LiupengDairyModel::LiupengDairyModel() {}

const std::string &LiupengDairyModel::getName() const {
    return name;
}

void LiupengDairyModel::setName(const std::string &name) {
    LiupengDairyModel::name = name;
}

const GetNowTime &LiupengDairyModel::getStartDate() const {
    return startDate;
}

void LiupengDairyModel::setStartDate(const GetNowTime &startDate) {
    LiupengDairyModel::startDate = startDate;
}

const GetNowTime &LiupengDairyModel::getEndDate() const {
    return endDate;
}

void LiupengDairyModel::setEndDate(const GetNowTime &endDate) {
    LiupengDairyModel::endDate = endDate;
}

const std::string &LiupengDairyModel::getCalender() const {
    return Calender;
}

void LiupengDairyModel::setCalender(const std::string &calender) {
    Calender = calender;
}

const std::string &LiupengDairyModel::getLocation() const {
    return Location;
}

void LiupengDairyModel::setLocation(const std::string &location) {
    Location = location;
}

const std::string &LiupengDairyModel::getNotes() const {
    return notes;
}

void LiupengDairyModel::setNotes(const std::string &notes) {
    LiupengDairyModel::notes = notes;
}

std::string LiupengDairyModel::toString() {
    return std::string();
}
