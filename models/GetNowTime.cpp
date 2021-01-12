//
// Created by 刘鹏 on 2021/1/12.
//

#include "GetNowTime.h"

GetNowTime::GetNowTime() {
    // 基于当前系统的当前日期/时间
    this->now = time(0);
    this->ltm = localtime(&now);
    // setting value
    this->year = 1900 + ltm->tm_year;
    this->month = 1 + ltm->tm_mon;
    this->day = ltm->tm_mday;
    this->hour = ltm->tm_hour;
    this->minte = ltm->tm_min;
    this->sec = ltm->tm_sec;
    this->setStringDateTime();
}

int GetNowTime::getYear() const {
    return year;
}

void GetNowTime::setYear(int year) {
    GetNowTime::year = year;
}

int GetNowTime::getMonth() const {
    return month;
}

void GetNowTime::setMonth(int month) {
    GetNowTime::month = month;
}

int GetNowTime::getDay() const {
    return day;
}

void GetNowTime::setDay(int day) {
    GetNowTime::day = day;
}

int GetNowTime::getHour() const {
    return hour;
}

void GetNowTime::setHour(int hour) {
    GetNowTime::hour = hour;
}

int GetNowTime::getMinte() const {
    return minte;
}

void GetNowTime::setMinte(int minte) {
    GetNowTime::minte = minte;
}

int GetNowTime::getSec() const {
    return sec;
}

void GetNowTime::setSec(int sec) {
    GetNowTime::sec = sec;
}

const std::string &GetNowTime::getStringDateTime() const {
    return stringDateTime;
}

void GetNowTime::setStringDateTime() {
    GetNowTime::stringDateTime = std::to_string(this->getYear()) + "-" +
                                 std::to_string(this->getMonth()) + "-" +
                                 std::to_string(this->getDay()) + " " +
                                 std::to_string(this->getHour()) + ":" +
                                 std::to_string(this->getMinte()) + ":" +
                                 std::to_string(this->getSec());
}

const std::string &GetNowTime::getStringLogTime() const {
    return stringLogTime;
}

void GetNowTime::setStringLogTime() {
    GetNowTime::stringLogTime = std::to_string(this->getYear()) + "-" +
                                std::to_string(this->getMonth()) + "-" +
                                std::to_string(this->getDay()) + "_" +
                                std::to_string(this->getHour()) + ":" +
                                std::to_string(this->getMinte()) + ":" +
                                std::to_string(this->getSec());
}
