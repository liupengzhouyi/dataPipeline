//
// Created by 刘鹏 on 09/03/2021.
//

#ifndef DATAPIPELINE_CREATEHTMLHEADWITHCSS_H
#define DATAPIPELINE_CREATEHTMLHEADWITHCSS_H


#include <vector>
#include <string>


class CreateHtmlHeadWithCSS {

private:

    std::vector<std::string> code;

    std::string cssPath;

    std::string title;

private:

public:
    CreateHtmlHeadWithCSS();

    void createHtmlHead();

    void createHtmlTail();

    void createCssCode();

    void addCode(std::string code);

    const std::string &getTitle() const;

    void setTitle(const std::string &title);

};


#endif //DATAPIPELINE_CREATEHTMLHEADWITHCSS_H
