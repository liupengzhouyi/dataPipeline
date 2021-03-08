//
// Created by 刘鹏 on 08/03/2021.
//

#include "CreateHtmlHead.h"

const std::string &CreateHtmlHead::getTitle() const {
    return title;
}

void CreateHtmlHead::setTitle(const std::string &title) {
    CreateHtmlHead::title = title;
}

CreateHtmlHead::CreateHtmlHead(const std::string &title) : title(title) {
    this->code = std::vector<std::string>();
    this->addHtmlCode("<html>\n");
    this->addHtmlCode("<<head>>\n");
    this->addHtmlCode("<title>" + this->getTitle() + "</title>\n");
    this->addHtmlCode("</<head>>\n");
    this->addHtmlCode("<body>\n");

}

std::vector<std::string> &CreateHtmlHead::getCode() {
    return code;
}

void CreateHtmlHead::addHtmlCode(std::string code) {
    this->getCode().push_back(code);
}



</body>

</html>