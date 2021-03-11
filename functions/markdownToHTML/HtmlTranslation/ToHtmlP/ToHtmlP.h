//
// Created by 刘鹏 on 11/03/2021.
//

#ifndef DATAPIPELINE_TOHTMLP_H
#define DATAPIPELINE_TOHTMLP_H


#include <string>

class ToHtmlP {
private:
    std::string markdownCode;

    std::string htmlCode;

public:

    ToHtmlP(const std::string &markdownCode);

    ToHtmlP();

    const std::string &getMarkdownCode() const;

    void setMarkdownCode(const std::string &markdownCode);

    const std::string &getHtmlCode() const;

    void setHtmlCode(const std::string &htmlCode);

    void translation();
};


#endif //DATAPIPELINE_TOHTMLP_H
