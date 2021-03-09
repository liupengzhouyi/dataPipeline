//
// Created by 刘鹏 on 09/03/2021.
//

#ifndef DATAPIPELINE_TOHTMLH_H
#define DATAPIPELINE_TOHTMLH_H


#include <string>

class ToHtmlH {

private:
    std::string markdownCode;

    std::string htmlCode;

private:

public:
    const std::string &getMarkdownCode() const;

    void setMarkdownCode(const std::string &markdownCode);

    const std::string &getHtmlCode() const;

    void setHtmlCode(const std::string &htmlCode);
};


#endif //DATAPIPELINE_TOHTMLH_H
