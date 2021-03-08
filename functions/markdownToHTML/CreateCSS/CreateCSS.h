//
// Created by 刘鹏 on 08/03/2021.
//

#ifndef DATAPIPELINE_CREATECSS_H
#define DATAPIPELINE_CREATECSS_H


#include <vector>
#include <string>

class CreateCSS {

private:

    std::string cssPathString;
    std::vector<std::string> code;



public:

    CreateCSS();

    const std::string &getCssPathString() const;

    void setCssPathString(const std::string &cssPathString);

    void addCode(std::string code);

    void addCSSBegin();

    void addCSSCode();

    void addCSSEnd();

    void init();

    const std::vector<std::string> &getCode() const;
};


#endif //DATAPIPELINE_CREATECSS_H
