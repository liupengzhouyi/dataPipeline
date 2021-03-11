//
// Created by 刘鹏 on 11/03/2021.
//

#include "ToHtmlP.h"


ToHtmlP::ToHtmlP(const std::string &markdownCode) : markdownCode(markdownCode) {
    this->setMarkdownCode(markdownCode);
}

ToHtmlP::ToHtmlP() {}

const std::string &ToHtmlP::getMarkdownCode() const {
    return markdownCode;
}

void ToHtmlP::setMarkdownCode(const std::string &markdownCode) {
    ToHtmlP::markdownCode = markdownCode;
}

const std::string &ToHtmlP::getHtmlCode() const {
    return htmlCode;
}

void ToHtmlP::setHtmlCode(const std::string &htmlCode) {
    ToHtmlP::htmlCode = htmlCode;
}

void ToHtmlP::translation() {
    this->setHtmlCode("<p>" + this->getMarkdownCode() + "</p>\n");
}
