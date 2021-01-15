//
// Created by 刘鹏 on 2021/1/12.
//

#ifndef DATAPIPELINE_GETNOWTIME_H
#define DATAPIPELINE_GETNOWTIME_H

#include <iostream>
#include <string>
#include <ctime>

class GetNowTime {
private:
    time_t now;
    tm *ltm;
    int year = 0;
    int month = 0;
    int day = 0;
    int hour = 0;
    int minte = 0;
    int sec  = 0;
    std::string stringDateTime = "";
    std::string stringLogTime = "";
public:


    GetNowTime();

    int getYear() const;

    void setYear(int year);

    int getMonth() const;

    void setMonth(int month);

    int getDay() const;

    void setDay(int day);

    int getHour() const;

    void setHour(int hour);

    int getMinte() const;

    void setMinte(int minte);

    int getSec() const;

    void setSec(int sec);

    const std::string &getStringDateTime() const;

    void setStringDateTime();

    const std::string &getStringLogTime() const;

    void setStringLogTime();

    std::string getDate();

    std::string getStringDate();
};


#endif //DATAPIPELINE_GETNOWTIME_H
