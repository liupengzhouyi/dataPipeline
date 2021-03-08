//
// Created by 刘鹏 on 08/03/2021.
//

#ifndef DATAPIPELINE_CREATEHTMLHEAD_H
#define DATAPIPELINE_CREATEHTMLHEAD_H


#include <string>
#include <vector>

class CreateHtmlHead {

private:

    std::string title;

    std::vector<std::string> code;

public:

    CreateHtmlHead(const std::string &title);

    const std::string &getTitle() const;

    void setTitle(const std::string &title);

    std::vector<std::string> &getCode();

    void addHtmlCode(std::string code);

};


#endif //DATAPIPELINE_CREATEHTMLHEAD_H
