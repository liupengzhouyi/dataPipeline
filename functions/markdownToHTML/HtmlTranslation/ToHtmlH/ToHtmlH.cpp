//
// Created by 刘鹏 on 09/03/2021.
//

#include "ToHtmlH.h"

const std::string &ToHtmlH::getMarkdownCode() const {
    return markdownCode;
}

void ToHtmlH::setMarkdownCode(const std::string &markdownCode) {
    ToHtmlH::markdownCode = markdownCode;
}

const std::string &ToHtmlH::getHtmlCode() const {
    return htmlCode;
}

void ToHtmlH::setHtmlCode(const std::string &htmlCode) {
    ToHtmlH::htmlCode = htmlCode;
}
