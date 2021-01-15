//
// Created by 刘鹏 on 2021/1/13.
//

#ifndef DATAPIPELINE_LIUPENGDAIRYMODEL_H
#define DATAPIPELINE_LIUPENGDAIRYMODEL_H
#include <iostream>
#include <string>
#include "../GetNowTime.h"

class LiupengDairyModel {

private:
    std::string name;
    GetNowTime startDate;
    GetNowTime endDate;
    std::string Calender;
    std::string Location;
    std::string notes = "";

public:
    LiupengDairyModel();

    const std::string &getName() const;

    void setName(const std::string &name);

    const GetNowTime &getStartDate() const;

    void setStartDate(const GetNowTime &startDate);

    const GetNowTime &getEndDate() const;

    void setEndDate(const GetNowTime &endDate);

    const std::string &getCalender() const;

    void setCalender(const std::string &calender);

    const std::string &getLocation() const;

    void setLocation(const std::string &location);

    const std::string &getNotes() const;

    void setNotes(const std::string &notes);

    std::string toString();

    std::string toJson();

    std::string toJsonTool(std::string value);

    std::string toMarkdownTableHead();

    std::string toMarkdownTableItem();

    std::string toMarkdownTableHeadForDairy();

    std::string toMarkdownTableItemForDairy();

    std::string createMarkdownDairy();

    std::string formatForMarkdownDairyNotes(std::string notes);
};


#endif //DATAPIPELINE_LIUPENGDAIRYMODEL_H
